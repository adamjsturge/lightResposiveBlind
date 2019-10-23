#include <stdio.h>
#include "utilities.h"
#include "io.hpp"
#include <stdbool.h>
#include "gpio.hpp"



int main(void){
    typedef enum{IDLE, MORNING, CLOSE, PAUSE, ON} State;


    State currentState = IDLE;
    State tempState = currentState;
    GPIO pin20(P1_20);
    pin20.setAsOutput();
    pin20.setLow();
    printf("Start\n");

    while(1){

        delay_ms(200);

        switch(currentState){

            case IDLE:
                LD.setNumber(1);
                printf("IDLE\n");
                printf("%d\n",LS.getPercentValue());
                pin20.setLow();
                if(SW.getSwitch(1)){
                    currentState = MORNING;
                }
                if(SW.getSwitch(2)){
                    tempState = currentState;
                    currentState = PAUSE;
                }
                if(SW.getSwitch(3)){
                    currentState = ON;
                }
                break;

            case MORNING:
                LD.setNumber(2);
                printf("Morning\n");
                if(LS.getPercentValue()>=14){
                    currentState = CLOSE;
                }else{
                    pin20.setLow();
                }
                if(SW.getSwitch(1)){
                    currentState = IDLE;
                }
                if(SW.getSwitch(2)){
                    tempState = currentState;
                    currentState = PAUSE;
                }

                break;

            case CLOSE:
                LD.setNumber(3);
                printf("Close\n");
                if(LS.getPercentValue()>=14){
                    pin20.setHigh();
                }else{
                    currentState = MORNING;

                }
                if(SW.getSwitch(1)){
                    currentState = IDLE;
                }
                if(SW.getSwitch(2)){
                    tempState = currentState;
                    currentState = PAUSE;
                }
                break;

            case PAUSE:
                LD.setNumber(99);
                printf("Pause\n");
                pin20.setLow();
                if(SW.getSwitch(2)){
                    currentState = tempState;
                }
                if(SW.getSwitch(1)){
                    currentState = tempState;
                }
                if(SW.getSwitch(3)){
                    currentState = tempState;
                }

                break;

            case ON:
                LD.setNumber(0);
                pin20.setHigh();
                if(SW.getSwitch(1)){
                    currentState = IDLE;
                }
                if(SW.getSwitch(2)){
                    tempState = currentState;
                    currentState = PAUSE;
                }
                break;
        }

    }
    return 0;
}

#include "LED.h"
#include "ti/driverlib/dl_gpio.h"

uint32_t aaa=55;

void LED_ON(){
	DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_0);
}	

void LED_OFF(){
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_0);
}	
void flip(){
	DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_0);
	aaa=DL_GPIO_readPins(GPIOA,DL_GPIO_PIN_0);
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_0);
	aaa=DL_GPIO_readPins(GPIOA,DL_GPIO_PIN_0);
	DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_0);
	aaa=DL_GPIO_readPins(GPIOA,DL_GPIO_PIN_0);
	DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_0);
	aaa=DL_GPIO_readPins(GPIOA,DL_GPIO_PIN_0);
	
	if(DL_GPIO_readPins(GPIOA,DL_GPIO_PIN_0) == 1){
		
		DL_GPIO_clearPins(GPIOA,DL_GPIO_PIN_0);
	}
	else{
		DL_GPIO_setPins(GPIOA,DL_GPIO_PIN_0);
	}
	aaa=DL_GPIO_readPins(GPIOA,DL_GPIO_PIN_0);
}
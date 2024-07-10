#include <Key.h>
#include <ti/driverlib/dl_gpio.h>
#include <ti/driverlib/m0p/dl_core.h>

void delay_ms(uint32_t ms){
	while(ms--){
		delay_cycles(32000);
	}
}

uint8_t Key_GetNum(void){
	uint8_t KeyNum = 0;
	if(DL_GPIO_readPins(GPIOB,DL_GPIO_PIN_21) == 0){
		delay_ms(20);
		while(DL_GPIO_readPins(GPIOB,DL_GPIO_PIN_21) == 0);
		delay_ms(20);
		KeyNum = 1;
	}
	return KeyNum;
}

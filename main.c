#include <stm32f407xx.h>

int main(){
	int i=14;
	int duration=16050;
	RCC-> APB1ENR=RCC_APB1ENR_TIM14EN;
	TIM14->PSC=2;
	TIM14->ARR=65535;
	while(1){
		(TIM14->CR1)==TIM_CR1_CEN;
		if(i<duration){
			(TIM14->CNT)=(TIM14->CNT)+1;
			i++;
						}

		else{
			(TIM14->CR1)=0;
			(TIM14->CNT)=1;
			RCC-> AHB1ENR |=RCC_AHB1ENR_GPIODEN;
			GPIOD->MODER=GPIO_MODER_MODE13_0;
			GPIOD->ODR^=GPIO_ODR_ODR_13;
		}

}}


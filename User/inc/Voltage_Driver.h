#ifndef __VOLTAGE_DRIVER_H_
#define	__VOLTAGE_DRIVER_H_

#include "stm32f1xx.h"

extern DMA_HandleTypeDef DMA_Handle;
extern ADC_HandleTypeDef ADC_Handle;

//#define USE_ADC_IT    

// ADC GPIO �궨��
#define VOLTAGE_ADC_GPIO_PORT               GPIOA
#define VOLTAGE_ADC_GPIO_PIN                GPIO_PIN_7
#define VOLTAGE_ADC_GPIO_CLK_ENABLE()       __HAL_RCC_GPIOA_CLK_ENABLE()

// ADC DMA �궨��
#define VOLTAGE_ADC_DMA                     DMA1_Channel1
#define VOLTAGE_ADC_DMA1_CLK_ENABLE()       __HAL_RCC_DMA1_CLK_ENABLE()
#define Voltage_ADC_DMA_IRQ                 DMA1_Channel1_IRQn
#define Voltage_ADC_DMA_INT_FUNCTION        DMA1_Channel1_IRQHandler

// ADC ��ź궨��
#define VOLTAGE_ADC                         ADC1
#define VOLTAGE_ADC_CLK_ENABLE()            __HAL_RCC_ADC1_CLK_ENABLE()
#define VOLTAGE_ADC_CHANNEL                 ADC_CHANNEL_7

// ADC �жϺ궨��
#define Voltage_ADC_IRQ                     ADC1_IRQn
#define Voltage_ADC_INT_FUNCTION            ADC1_IRQHandler


extern __IO uint32_t ADC_ConvertedValue;

void Voltage_Init(void);
float Get_VoltageValue(void);

#endif /* __VOLTAGE_DRIVER_H_ */


/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IO4_Pin GPIO_PIN_13
#define IO4_GPIO_Port GPIOC
#define button_encoder_Pin GPIO_PIN_2
#define button_encoder_GPIO_Port GPIOA
#define safetyStatus1_Pin GPIO_PIN_0
#define safetyStatus1_GPIO_Port GPIOB
#define safetyStatus2_Pin GPIO_PIN_1
#define safetyStatus2_GPIO_Port GPIOB
#define safetyStatus3_Pin GPIO_PIN_2
#define safetyStatus3_GPIO_Port GPIOB
#define led1_Pin GPIO_PIN_13
#define led1_GPIO_Port GPIOB
#define led2_Pin GPIO_PIN_14
#define led2_GPIO_Port GPIOB
#define led3_Pin GPIO_PIN_15
#define led3_GPIO_Port GPIOB
#define neopixel_Pin GPIO_PIN_6
#define neopixel_GPIO_Port GPIOC
#define nixie_display_enable_Pin GPIO_PIN_8
#define nixie_display_enable_GPIO_Port GPIOA
#define nixie_RCLK_Pin GPIO_PIN_9
#define nixie_RCLK_GPIO_Port GPIOA
#define nixie_SRCLK_Pin GPIO_PIN_10
#define nixie_SRCLK_GPIO_Port GPIOA
#define IO1_Pin GPIO_PIN_10
#define IO1_GPIO_Port GPIOC
#define IO2_Pin GPIO_PIN_11
#define IO2_GPIO_Port GPIOC
#define IO3_Pin GPIO_PIN_12
#define IO3_GPIO_Port GPIOC
#define safetyStatus4_Pin GPIO_PIN_3
#define safetyStatus4_GPIO_Port GPIOB
#define safetyEnable1_Pin GPIO_PIN_4
#define safetyEnable1_GPIO_Port GPIOB
#define safetyEnable2_Pin GPIO_PIN_5
#define safetyEnable2_GPIO_Port GPIOB
#define hvOutputRelay_Pin GPIO_PIN_6
#define hvOutputRelay_GPIO_Port GPIOB
#define IO5_Pin GPIO_PIN_7
#define IO5_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

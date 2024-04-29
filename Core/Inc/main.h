/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWM_C7_Pin GPIO_PIN_7
#define PWM_C7_GPIO_Port GPIOI
#define PWM_C6_Pin GPIO_PIN_6
#define PWM_C6_GPIO_Port GPIOI
#define VCC_5V_Out_PWM_200Hz_Pin GPIO_PIN_8
#define VCC_5V_Out_PWM_200Hz_GPIO_Port GPIOC
#define PWM_C5_Pin GPIO_PIN_6
#define PWM_C5_GPIO_Port GPIOC
#define LED_R_Pin GPIO_PIN_12
#define LED_R_GPIO_Port GPIOH
#define VCC_BAT_Monitor_Pin GPIO_PIN_10
#define VCC_BAT_Monitor_GPIO_Port GPIOF
#define LED_G_Pin GPIO_PIN_11
#define LED_G_GPIO_Port GPIOH
#define LED_B_Pin GPIO_PIN_10
#define LED_B_GPIO_Port GPIOH
#define HW0_Pin GPIO_PIN_0
#define HW0_GPIO_Port GPIOC
#define HW1_Pin GPIO_PIN_1
#define HW1_GPIO_Port GPIOC
#define HW2_Pin GPIO_PIN_2
#define HW2_GPIO_Port GPIOC
#define Buzzer_Pin GPIO_PIN_14
#define Buzzer_GPIO_Port GPIOD
#define KEY_Pin GPIO_PIN_0
#define KEY_GPIO_Port GPIOA
#define KEY_EXTI_IRQn EXTI0_IRQn
#define PWM_C3_Pin GPIO_PIN_13
#define PWM_C3_GPIO_Port GPIOE
#define PWM_C1_Pin GPIO_PIN_9
#define PWM_C1_GPIO_Port GPIOE
#define PWM_C2_Pin GPIO_PIN_11
#define PWM_C2_GPIO_Port GPIOE
#define PWM_C4_Pin GPIO_PIN_14
#define PWM_C4_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

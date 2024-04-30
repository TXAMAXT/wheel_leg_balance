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
#define USER_USART1_P3_Pin GPIO_PIN_14
#define USER_USART1_P3_GPIO_Port GPIOG
#define USER_USART2_4P_Pin GPIO_PIN_7
#define USER_USART2_4P_GPIO_Port GPIOB
#define RC_receive_Pin GPIO_PIN_11
#define RC_receive_GPIO_Port GPIOC
#define Empty_Pin GPIO_PIN_10
#define Empty_GPIO_Port GPIOC
#define PWM_C7_Pin GPIO_PIN_7
#define PWM_C7_GPIO_Port GPIOI
#define PWM_C6_Pin GPIO_PIN_6
#define PWM_C6_GPIO_Port GPIOI
#define USER_USART1_P3G9_Pin GPIO_PIN_9
#define USER_USART1_P3G9_GPIO_Port GPIOG
#define USER_I2C_Pin GPIO_PIN_0
#define USER_I2C_GPIO_Port GPIOF
#define USER_USART2_4PA9_Pin GPIO_PIN_9
#define USER_USART2_4PA9_GPIO_Port GPIOA
#define VCC_5V_Out_PWM_200Hz_Pin GPIO_PIN_8
#define VCC_5V_Out_PWM_200Hz_GPIO_Port GPIOC
#define USER_I2CF1_Pin GPIO_PIN_1
#define USER_I2CF1_GPIO_Port GPIOF
#define PWM_C5_Pin GPIO_PIN_6
#define PWM_C5_GPIO_Port GPIOC
#define IST8310_RST_Pin GPIO_PIN_6
#define IST8310_RST_GPIO_Port GPIOG
#define IMU_TEMP_Pin GPIO_PIN_6
#define IMU_TEMP_GPIO_Port GPIOF
#define LED_R_Pin GPIO_PIN_12
#define LED_R_GPIO_Port GPIOH
#define IST8310_DRDY_Pin GPIO_PIN_3
#define IST8310_DRDY_GPIO_Port GPIOG
#define IST8310_DRDY_EXTI_IRQn EXTI3_IRQn
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
#define CS1_ACCEL_Pin GPIO_PIN_4
#define CS1_ACCEL_GPIO_Port GPIOA
#define INT1_ACCEL_Pin GPIO_PIN_4
#define INT1_ACCEL_GPIO_Port GPIOC
#define INT1_ACCEL_EXTI_IRQn EXTI4_IRQn
#define PWM_C3_Pin GPIO_PIN_13
#define PWM_C3_GPIO_Port GPIOE
#define INT1_GRYO_Pin GPIO_PIN_5
#define INT1_GRYO_GPIO_Port GPIOC
#define INT1_GRYO_EXTI_IRQn EXTI9_5_IRQn
#define PWM_C1_Pin GPIO_PIN_9
#define PWM_C1_GPIO_Port GPIOE
#define PWM_C2_Pin GPIO_PIN_11
#define PWM_C2_GPIO_Port GPIOE
#define PWM_C4_Pin GPIO_PIN_14
#define PWM_C4_GPIO_Port GPIOE
#define USER_SPI_CS_Pin GPIO_PIN_12
#define USER_SPI_CS_GPIO_Port GPIOB
#define USER_SPI_CLK_Pin GPIO_PIN_13
#define USER_SPI_CLK_GPIO_Port GPIOB
#define CS1_GYRO_Pin GPIO_PIN_0
#define CS1_GYRO_GPIO_Port GPIOB
#define USER_SPI_MOSI_Pin GPIO_PIN_14
#define USER_SPI_MOSI_GPIO_Port GPIOB
#define USER_SPI_MISO_Pin GPIO_PIN_15
#define USER_SPI_MISO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

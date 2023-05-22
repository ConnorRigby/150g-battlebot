/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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
#define RF_IRQ_Pin GPIO_PIN_4
#define RF_IRQ_GPIO_Port GPIOC
#define M2_EN_Pin GPIO_PIN_11
#define M2_EN_GPIO_Port GPIOB
#define MC_RESET_Pin GPIO_PIN_12
#define MC_RESET_GPIO_Port GPIOB
#define M2_SENSE_Pin GPIO_PIN_13
#define M2_SENSE_GPIO_Port GPIOB
#define M1_SENSE_Pin GPIO_PIN_14
#define M1_SENSE_GPIO_Port GPIOB
#define M2_FAULT_Pin GPIO_PIN_15
#define M2_FAULT_GPIO_Port GPIOB
#define M1_FAULT_Pin GPIO_PIN_6
#define M1_FAULT_GPIO_Port GPIOC
#define M1_PWM_Pin GPIO_PIN_8
#define M1_PWM_GPIO_Port GPIOA
#define M2_PWM_Pin GPIO_PIN_9
#define M2_PWM_GPIO_Port GPIOA
#define M1_EN_Pin GPIO_PIN_10
#define M1_EN_GPIO_Port GPIOA
#define M1_PH_Pin GPIO_PIN_11
#define M1_PH_GPIO_Port GPIOA
#define M2_PH_Pin GPIO_PIN_12
#define M2_PH_GPIO_Port GPIOA
#define IMU_INT1_Pin GPIO_PIN_5
#define IMU_INT1_GPIO_Port GPIOB
#define IMU_INT2_Pin GPIO_PIN_6
#define IMU_INT2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define FAULT_Pin GPIO_PIN_13
#define FAULT_GPIO_Port GPIOC
#define RESET_Pin GPIO_PIN_10
#define RESET_GPIO_Port GPIOG
#define M2_ENCA_Pin GPIO_PIN_0
#define M2_ENCA_GPIO_Port GPIOA
#define M2_ENCB_Pin GPIO_PIN_1
#define M2_ENCB_GPIO_Port GPIOA
#define IMU_INT1_Pin GPIO_PIN_2
#define IMU_INT1_GPIO_Port GPIOA
#define IMU_INT2_Pin GPIO_PIN_3
#define IMU_INT2_GPIO_Port GPIOA
#define IMU_CS_Pin GPIO_PIN_4
#define IMU_CS_GPIO_Port GPIOA
#define RF_CS_Pin GPIO_PIN_4
#define RF_CS_GPIO_Port GPIOC
#define RF_INT_Pin GPIO_PIN_0
#define RF_INT_GPIO_Port GPIOB
#define VCP_TX_Pin GPIO_PIN_10
#define VCP_TX_GPIO_Port GPIOB
#define VCP_RX_Pin GPIO_PIN_11
#define VCP_RX_GPIO_Port GPIOB
#define M2_DIR_Pin GPIO_PIN_12
#define M2_DIR_GPIO_Port GPIOB
#define M1_DIR_Pin GPIO_PIN_13
#define M1_DIR_GPIO_Port GPIOB
#define M3_PWM_Pin GPIO_PIN_14
#define M3_PWM_GPIO_Port GPIOB
#define M4_PWM_Pin GPIO_PIN_15
#define M4_PWM_GPIO_Port GPIOB
#define REF_Pin GPIO_PIN_6
#define REF_GPIO_Port GPIOC
#define M1_ENCA_Pin GPIO_PIN_8
#define M1_ENCA_GPIO_Port GPIOA
#define M1_ENCB_Pin GPIO_PIN_9
#define M1_ENCB_GPIO_Port GPIOA
#define M2_PWM_Pin GPIO_PIN_10
#define M2_PWM_GPIO_Port GPIOA
#define M1_PWM_Pin GPIO_PIN_11
#define M1_PWM_GPIO_Port GPIOA
#define M4_ENCB_Pin GPIO_PIN_12
#define M4_ENCB_GPIO_Port GPIOA
#define M3_DIR_Pin GPIO_PIN_10
#define M3_DIR_GPIO_Port GPIOC
#define M4_DIR_Pin GPIO_PIN_11
#define M4_DIR_GPIO_Port GPIOC
#define M3_ENCA_Pin GPIO_PIN_4
#define M3_ENCA_GPIO_Port GPIOB
#define M3_ENCB_Pin GPIO_PIN_5
#define M3_ENCB_GPIO_Port GPIOB
#define M4_ENCA_Pin GPIO_PIN_6
#define M4_ENCA_GPIO_Port GPIOB
#define BAT_SENSE_Pin GPIO_PIN_7
#define BAT_SENSE_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

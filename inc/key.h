#ifndef __KEY_H
#define __KEY_H
#include "sys.h"

#define KEY1 GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_7) //��ȡ����1
#define KEY2 GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_6) //��ȡ����2
#define KEY1_PRES 1                                   //KEY1����
#define KEY2_PRES 2                                   //KEY2����

void KEY_Init(void); //IO��ʼ��
u8 KEY_Scan(u8);     //����ɨ�躯��
#endif
/* 
 * File:   motor.h
 * Author: ztjoh
 *
 * Created on September 3, 2016, 11:43 PM
 */

#ifndef MOTOR_H
#define	MOTOR_H


#ifdef	__cplusplus
extern "C" {
#endif

    
#ifdef	__cplusplus
}
#endif

#include "mcc_generated_files/mcc.h"
    
#define CMD 1
#define MOTOR 2
#define MOTOR_HEADER 0xAA
#define FORWARD_MOTOR1() APH_1_SetHigh()
#define FORWARD_MOTOR2() BPH_1_SetHigh()
#define FORWARD_MOTOR3() APH_2_SetHigh()
#define FORWARD_MOTOR4() BPH_2_SetHigh()
#define REVERSE_MOTOR1() APH_1_SetLow()
#define REVERSE_MOTOR2() BPH_1_SetLow()
#define REVERSE_MOTOR3() APH_2_SetLow()
#define REVERSE_MOTOR4() BPH_2_SetLow()
#define MOTOR1_DIRECTION() APH_1_GetValue()
#define MOTOR2_DIRECTION() BPH_1_GetValue()
#define MOTOR3_DIRECTION() APH_2_GetValue()
#define MOTOR4_DIRECTION() BPH_2_GetValue() 
    
#define FORWARD 1
#define REVERSE 0
    
#define MOTOR1_DUTY_CYCLE(Duty_Cycle) PWM1_LoadDutyValue(Duty_Cycle)
#define MOTOR2_DUTY_CYCLE(Duty_Cycle) PWM2_LoadDutyValue(Duty_Cycle)
#define MOTOR3_DUTY_CYCLE(Duty_Cycle) PWM3_LoadDutyValue(Duty_Cycle)
#define MOTOR4_DUTY_CYCLE(Duty_Cycle) PWM4_LoadDutyValue(Duty_Cycle)  
    
    
void set_motor_values(void);
#endif	/* MOTOR_H */


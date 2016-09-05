//Motor stuff

#include "motor.h"
#include "mcc_generated_files/mcc.h"

extern int i2c_buffer[12];

void set_motor_values(void)
{

//   if(i2c_buffer[0] < 0)            //MOTOR 1
//   {
//     if(MOTOR1_DIRECTION() != REVERSE)
//     {
//         REVERSE_MOTOR1();
//     }
//     i2c_buffer[0] *= -1;
//   }
//      else
//   {
//       if(MOTOR1_DIRECTION() != FORWARD)
//       {
//          //APH_1_SetHigh(); 
//       }
//   }
   MOTOR1_DUTY_CYCLE((uint16_t)(i2c_buffer[0] *0xF9/100)); 
   MOTOR2_DUTY_CYCLE((uint16_t)(i2c_buffer[1] *0xF9/100)); 
   MOTOR3_DUTY_CYCLE((uint16_t)(i2c_buffer[2] *0xF9/100)); 
   MOTOR4_DUTY_CYCLE((uint16_t)(i2c_buffer[3] *0xF9/100));    
   
   //LATD4 = 1;
    
    
//   if(i2c_buffer[0] < 0)            //MOTOR 1
//   {
//     if(MOTOR1_DIRECTION != REVERSE)
//     {
//         REVERSE_MOTOR1;
//     }
//     i2c_buffer[0] *= -1;
//   }
//   else
//   {
//       if(MOTOR1_DIRECTION != FORWARD)
//       {
//          FORWARD_MOTOR1; 
//       }
//   }
//   MOTOR1_DUTY_CYCLE((uint16_t)(i2c_buffer[0] *0xF9/100));
//      
//   if(i2c_buffer[1] < 0)            //MOTOR 2
//   {
//     if(MOTOR2_DIRECTION != REVERSE)
//     {
//         REVERSE_MOTOR2;
//     }
//     i2c_buffer[1] *= -1;
//   }
//   else
//   {
//       if(MOTOR2_DIRECTION != FORWARD)
//       {
//          FORWARD_MOTOR2; 
//       }
//   }
//   MOTOR2_DUTY_CYCLE((uint16_t)(i2c_buffer[1] *0xF9/100));
   
//   if(i2c_buffer[2] < 0)                //MOTOR 3
//   {
//     if(MOTOR3_DIRECTION != REVERSE)
//     {
//         REVERSE_MOTOR3;
//     }
//     i2c_buffer[2] *= -1;
//   }
//   else
//   {
//       if(MOTOR3_DIRECTION != FORWARD)
//       {
//          FORWARD_MOTOR3; 
//       }
//   }
//   MOTOR3_DUTY_CYCLE((uint16_t)(i2c_buffer[2] *0xF9/100));
//   
//   if(i2c_buffer[3] < 0)                //MOTOR 4
//   {
//     if(MOTOR4_DIRECTION != REVERSE)
//     {
//         REVERSE_MOTOR4;
//     }
//     i2c_buffer[3] *= -1;
//   }
//   else
//   {
//       if(MOTOR4_DIRECTION != FORWARD)
//       {
//          FORWARD_MOTOR4; 
//       }
//   }
//      MOTOR4_DUTY_CYCLE((uint16_t)(i2c_buffer[3] *0xF9/100));
}
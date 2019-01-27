#ifndef  __DRIVER_GIMBAL_H
#define  __DRIVER_GIMBAL_H

#define STICK_TO_PITCH_ANGLE_INC_FACT       0.004f		//���˵���̨������
#define STICK_TO_YAW_ANGLE_INC_FACT         0.004f
#define MOUSE_TO_PITCH_ANGLE_INC_FACT 		0.1f		//��굽��̨������
#define MOUSE_TO_YAW_ANGLE_INC_FACT 		0.1f

#define PITCH_MAX 17.0f
#define YAW_MAX 50 	

#define RM66TODM90 1

//�Ƕ�����ö��
typedef enum
{
  AngleMode_REL,          //��ԽǶ�
  AngleMode_ABS,           //���ԽǶ�
	AngleMode_ECD            //�������Ƕ�
}AngleMode_Enum;					//û�ж������

typedef struct
{
    float Pitch;
    float Yaw;
}Gimbal_Ref_t;

typedef __packed struct
{
	float yaw;
	float pitch;
}CameraOffset_t;

void GMControlLoop(void);
static void Ref_UpdataFromRCStick(void);

extern Gimbal_Ref_t GimbalRef;

#endif
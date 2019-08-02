/**
  ******************************************************************************
  * @file    LwIP/LwIP_TCP_Echo_Server/Inc/main.h 
  * @author  MCD Application Team
  * @version V1.4.0
  * @date    17-February-2017
  * @brief   Header for main.c module
  ******************************************************************************
/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __INPUT_CAP_TIMER_H
#define __INPUT_CAP_TIMER_H

#include "stdint.h"
#define   USR_BUF_LEN    200
#define   PLUS_EDGE_LEN  30

struct usr_tcp_buf_s
{
	uint8_t buf[USR_BUF_LEN];
	uint16_t len;
};

__packed struct mode_config
{
		/*ģʽ*/
		uint8_t mode_type;
    /*Lֵ*/
    uint8_t l_cnt;
    /*Tcֵ*/
    uint8_t c_duration;
    /*delayֵ*/
    uint8_t delay_time_ns;
    /*wait max timeֵ*/
    uint8_t wait_max_time;
		/*ģʽ3���ռ�ձ�*/
    uint8_t duty;
		/*ģʽ3���Ƶ��ֵ*/
    uint32_t fre;
		/*cmpֵ*/
    uint32_t l_cmp;
		/*����״̬*/
		uint8_t run_state;
};

struct edge_s
{
	uint16_t edge_index;
	uint16_t time;
	uint16_t wave_t;
};
struct edge_recored_s
{
	uint16_t ch1_cnt;
	uint16_t ch2_cnt;
	uint16_t ch1_cycle_time;
	uint16_t ch2_cycle_time;
	int16_t ch1_ch2_offset_time;
	struct edge_s ch1_edge[PLUS_EDGE_LEN];
	struct edge_s ch2_edge[PLUS_EDGE_LEN];
};

void handle_cmd_data(void);
void usr_tcp_send_data(void *data, uint16_t lens);
void start_mode1_2(void);
void set_mode1_2(void);
void sort(uint16_t *a, uint16_t len);
#endif /* __INPUT_CAP_TIMER_H */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/


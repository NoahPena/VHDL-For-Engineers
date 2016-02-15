/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/npena9/Documents/GitHub/VHDL-For-Engineers/Freestyle/iDK/RAM.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3830602496_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3472);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1192U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t2 = (t0 + 6052U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t17 = (t16 - 63);
    t18 = (t17 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, t16);
    t19 = (16U * t18);
    t20 = (0 + t19);
    t8 = (t4 + t20);
    t11 = (t0 + 3616);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t8, 16U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB9;

LAB11:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1672U);
    t14 = *((char **)t4);
    t4 = (t0 + 1512U);
    t15 = *((char **)t4);
    t4 = (t0 + 6052U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t15, t4);
    t17 = (t16 - 63);
    t18 = (t17 * -1);
    t19 = (16U * t18);
    t20 = (0U + t19);
    t21 = (t0 + 3552);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t14, 16U);
    xsi_driver_first_trans_delta(t21, t20, 16U, 0LL);
    goto LAB12;

}


extern void work_a_3830602496_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3830602496_3212880686_p_0};
	xsi_register_didat("work_a_3830602496_3212880686", "isim/RAM_testbench_isim_beh.exe.sim/work/a_3830602496_3212880686.didat");
	xsi_register_executes(pe);
}

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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/LEFT_SHIFT/LEFT_SHIFT.vhd";



static void work_a_1516215202_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2984);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 4666);
    *((int *)t4) = 0;
    t8 = (t0 + 4670);
    *((int *)t8) = 6;
    t9 = 0;
    t10 = 6;

LAB8:    if (t9 <= t10)
        goto LAB9;

LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 3128);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(44, ng0);
    t11 = (t0 + 1512U);
    t12 = *((char **)t11);
    t13 = (0 - 7);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t0 + 3064);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t17;
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 4666);
    t13 = *((int *)t2);
    t23 = (t13 + 1);
    t24 = (t23 - 7);
    t14 = (t24 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t23);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t5 = (t4 + t16);
    t1 = *((unsigned char *)t5);
    t8 = (t0 + 4666);
    t25 = *((int *)t8);
    t26 = (t25 - 7);
    t27 = (t26 * -1);
    t28 = (1 * t27);
    t29 = (0U + t28);
    t11 = (t0 + 3128);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t1;
    xsi_driver_first_trans_delta(t11, t29, 1, 0LL);

LAB10:    t2 = (t0 + 4666);
    t9 = *((int *)t2);
    t4 = (t0 + 4670);
    t10 = *((int *)t4);
    if (t9 == t10)
        goto LAB11;

LAB12:    t13 = (t9 + 1);
    t9 = t13;
    t5 = (t0 + 4666);
    *((int *)t5) = t9;
    goto LAB8;

}


extern void work_a_1516215202_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1516215202_3212880686_p_0};
	xsi_register_didat("work_a_1516215202_3212880686", "isim/LEFT_SHIFT_isim_beh.exe.sim/work/a_1516215202_3212880686.didat");
	xsi_register_executes(pe);
}

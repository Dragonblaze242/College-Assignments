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
static const char *ng0 = "/home/ise/X/DECODER_PROCESS/DECODER_PROCESS.vhd";



static void work_a_3819610351_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4274);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4280);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4286);
    t4 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t4 = 0;

LAB23:    if (t4 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4292);
    t4 = 1;
    if (2U == 2U)
        goto LAB29;

LAB30:    t4 = 0;

LAB31:    if (t4 != 0)
        goto LAB27;

LAB28:
LAB3:    t1 = (t0 + 2664);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t8 = (t0 + 4276);
    t10 = (t0 + 2744);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(45, ng0);
    t8 = (t0 + 4282);
    t10 = (t0 + 2744);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 4288);
    t10 = (t0 + 2744);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB21:    t5 = 0;

LAB24:    if (t5 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB22;

LAB26:    t5 = (t5 + 1);
    goto LAB24;

LAB27:    xsi_set_current_line(49, ng0);
    t8 = (t0 + 4294);
    t10 = (t0 + 2744);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB29:    t5 = 0;

LAB32:    if (t5 < 2U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB30;

LAB34:    t5 = (t5 + 1);
    goto LAB32;

}


extern void work_a_3819610351_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3819610351_3212880686_p_0};
	xsi_register_didat("work_a_3819610351_3212880686", "isim/DECODER_PROCESS_isim_beh.exe.sim/work/a_3819610351_3212880686.didat");
	xsi_register_executes(pe);
}

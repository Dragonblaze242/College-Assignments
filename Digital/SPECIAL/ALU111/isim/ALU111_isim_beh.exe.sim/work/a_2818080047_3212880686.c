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
static const char *ng0 = "/home/ise/ALU111/ALU111.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833316239837_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16447329934917513135_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16447329948342641973_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_16272557775307340295_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_2255506239096238868_3965413181(char *, char *, char *, char *, int );


static void work_a_2818080047_3212880686_p_0(char *t0)
{
    char t34[16];
    char t36[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    int t24;
    char *t25;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t35;
    unsigned char t37;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = (3 - 2);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t7 = (t0 + 5981);
    t9 = xsi_mem_cmp(t7, t2, 3U);
    if (t9 == 1)
        goto LAB5;

LAB13:    t10 = (t0 + 5984);
    t12 = xsi_mem_cmp(t10, t2, 3U);
    if (t12 == 1)
        goto LAB6;

LAB14:    t13 = (t0 + 5987);
    t15 = xsi_mem_cmp(t13, t2, 3U);
    if (t15 == 1)
        goto LAB7;

LAB15:    t16 = (t0 + 5990);
    t18 = xsi_mem_cmp(t16, t2, 3U);
    if (t18 == 1)
        goto LAB8;

LAB16:    t19 = (t0 + 5993);
    t21 = xsi_mem_cmp(t19, t2, 3U);
    if (t21 == 1)
        goto LAB9;

LAB17:    t22 = (t0 + 5996);
    t24 = xsi_mem_cmp(t22, t2, 3U);
    if (t24 == 1)
        goto LAB10;

LAB18:    t25 = (t0 + 5999);
    t27 = xsi_mem_cmp(t25, t2, 3U);
    if (t27 == 1)
        goto LAB11;

LAB19:
LAB12:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5856U);
    t10 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t36, t3, t2, t8, t7);
    t11 = (t0 + 1672U);
    t13 = *((char **)t11);
    t35 = *((unsigned char *)t13);
    t11 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t34, t10, t36, t35);
    t14 = (t34 + 12U);
    t4 = *((unsigned int *)t14);
    t5 = (1U * t4);
    t37 = (8U != t5);
    if (t37 == 1)
        goto LAB31;

LAB32:    t16 = (t0 + 4072);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t11, 8U);
    xsi_driver_first_trans_fast(t16);

LAB4:    xsi_set_current_line(47, ng0);

LAB35:    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB36;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);
    t28 = (t0 + 1032U);
    t29 = *((char **)t28);
    t28 = (t0 + 4072);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t29, 8U);
    xsi_driver_first_trans_fast(t28);
    goto LAB4;

LAB6:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t34, t3, t2, 1);
    t8 = (t34 + 12U);
    t4 = *((unsigned int *)t8);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB21;

LAB22:    t10 = (t0 + 4072);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB7:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = ieee_p_3620187407_sub_2255506239096238868_3965413181(IEEE_P_3620187407, t34, t3, t2, 1);
    t8 = (t34 + 12U);
    t4 = *((unsigned int *)t8);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB23;

LAB24:    t10 = (t0 + 4072);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB8:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4072);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB9:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t34, t3, t2, 1);
    t8 = (t34 + 12U);
    t4 = *((unsigned int *)t8);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB25;

LAB26:    t10 = (t0 + 4072);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB10:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = ieee_p_3620187407_sub_2255506239096238868_3965413181(IEEE_P_3620187407, t34, t3, t2, 1);
    t8 = (t34 + 12U);
    t4 = *((unsigned int *)t8);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB27;

LAB28:    t10 = (t0 + 4072);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB11:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5856U);
    t10 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t34, t3, t2, t8, t7);
    t11 = (t34 + 12U);
    t4 = *((unsigned int *)t11);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB29;

LAB30:    t13 = (t0 + 4072);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t10, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB4;

LAB20:;
LAB21:    xsi_size_not_matching(8U, t5, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t5, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(8U, t5, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(8U, t5, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(8U, t5, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, t5, 0);
    goto LAB32;

LAB33:    t3 = (t0 + 3960);
    *((int *)t3) = 0;
    goto LAB2;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

}

static void work_a_2818080047_3212880686_p_1(char *t0)
{
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = (3 - 2);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t7 = (t0 + 6002);
    t9 = xsi_mem_cmp(t7, t2, 3U);
    if (t9 == 1)
        goto LAB5;

LAB13:    t10 = (t0 + 6005);
    t12 = xsi_mem_cmp(t10, t2, 3U);
    if (t12 == 1)
        goto LAB6;

LAB14:    t13 = (t0 + 6008);
    t15 = xsi_mem_cmp(t13, t2, 3U);
    if (t15 == 1)
        goto LAB7;

LAB15:    t16 = (t0 + 6011);
    t18 = xsi_mem_cmp(t16, t2, 3U);
    if (t18 == 1)
        goto LAB8;

LAB16:    t19 = (t0 + 6014);
    t21 = xsi_mem_cmp(t19, t2, 3U);
    if (t21 == 1)
        goto LAB9;

LAB17:    t22 = (t0 + 6017);
    t24 = xsi_mem_cmp(t22, t2, 3U);
    if (t24 == 1)
        goto LAB10;

LAB18:    t25 = (t0 + 6020);
    t27 = xsi_mem_cmp(t25, t2, 3U);
    if (t27 == 1)
        goto LAB11;

LAB19:
LAB12:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5856U);
    t10 = ieee_p_2592010699_sub_16447329948342641973_503743352(IEEE_P_2592010699, t28, t3, t2, t8, t7);
    t11 = (t28 + 12U);
    t4 = *((unsigned int *)t11);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB35;

LAB36:    t13 = (t0 + 4136);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t10, 8U);
    xsi_driver_first_trans_fast(t13);

LAB4:    xsi_set_current_line(56, ng0);

LAB39:    t2 = (t0 + 3976);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB40;

LAB1:    return;
LAB5:    xsi_set_current_line(57, ng0);
    t29 = (t0 + 1032U);
    t30 = *((char **)t29);
    t29 = (t0 + 5856U);
    t31 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t28, t30, t29);
    t32 = (t28 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (1U * t33);
    t35 = (8U != t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    t36 = (t0 + 4136);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t31, 8U);
    xsi_driver_first_trans_fast(t36);
    goto LAB4;

LAB6:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t28, t3, t2);
    t8 = (t28 + 12U);
    t4 = *((unsigned int *)t8);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB23;

LAB24:    t10 = (t0 + 4136);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB7:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5856U);
    t10 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t28, t3, t2, t8, t7);
    t11 = (t28 + 12U);
    t4 = *((unsigned int *)t11);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB25;

LAB26:    t13 = (t0 + 4136);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t10, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB4;

LAB8:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5856U);
    t10 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t28, t3, t2, t8, t7);
    t11 = (t28 + 12U);
    t4 = *((unsigned int *)t11);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB27;

LAB28:    t13 = (t0 + 4136);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t10, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB4;

LAB9:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5856U);
    t10 = ieee_p_2592010699_sub_16447329934917513135_503743352(IEEE_P_2592010699, t28, t3, t2, t8, t7);
    t11 = (t28 + 12U);
    t4 = *((unsigned int *)t11);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB29;

LAB30:    t13 = (t0 + 4136);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t10, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB4;

LAB10:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5856U);
    t10 = ieee_p_2592010699_sub_16439989833316239837_503743352(IEEE_P_2592010699, t28, t3, t2, t8, t7);
    t11 = (t28 + 12U);
    t4 = *((unsigned int *)t11);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB31;

LAB32:    t13 = (t0 + 4136);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t10, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB4;

LAB11:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5856U);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5856U);
    t10 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t28, t3, t2, t8, t7);
    t11 = (t28 + 12U);
    t4 = *((unsigned int *)t11);
    t5 = (1U * t4);
    t35 = (8U != t5);
    if (t35 == 1)
        goto LAB33;

LAB34:    t13 = (t0 + 4136);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t10, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB4;

LAB20:;
LAB21:    xsi_size_not_matching(8U, t34, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t5, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(8U, t5, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(8U, t5, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(8U, t5, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, t5, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(8U, t5, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(8U, t5, 0);
    goto LAB36;

LAB37:    t3 = (t0 + 3976);
    *((int *)t3) = 0;
    goto LAB2;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

}

static void work_a_2818080047_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    static char *nl0[] = {&&LAB4, &&LAB4, &&LAB6, &&LAB5, &&LAB4, &&LAB4, &&LAB4, &&LAB4, &&LAB4};

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = (3 - 3);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (char *)((nl0) + t8);
    goto **((char **)t9);

LAB4:    xsi_set_current_line(66, ng0);

LAB9:    t2 = (t0 + 3992);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB5:    xsi_set_current_line(67, ng0);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t10 = (t0 + 4200);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB6:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 4200);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    t3 = (t0 + 3992);
    *((int *)t3) = 0;
    goto LAB2;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

}


extern void work_a_2818080047_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2818080047_3212880686_p_0,(void *)work_a_2818080047_3212880686_p_1,(void *)work_a_2818080047_3212880686_p_2};
	xsi_register_didat("work_a_2818080047_3212880686", "isim/ALU111_isim_beh.exe.sim/work/a_2818080047_3212880686.didat");
	xsi_register_executes(pe);
}

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

/* This file is designed for use with ISim build 0x16fbe694 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//192.168.6.1/teacher/MIE/Computer Organization and Design/Project/arm_clear_cache/arm_clear_cache/dram_ctrl_sim.v";
static unsigned int ng1[] = {2U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};



static void Always_48_0(char *t0)
{
    char t14[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 8632);
    *((int *)t2) = 1;
    t3 = (t0 + 6608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB9:    t5 = (t0 + 608);
    t11 = *((char **)t5);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t11, 32);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 32);
    if (t13 == 1)
        goto LAB42;

LAB43:
LAB45:
LAB44:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB46:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    t11 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 5, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 5176);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t16 = (t0 + 3816U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t14, 2, 2, 2U, t17, 1, t15, 1);
    t16 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t14 + 4);
    t20 = (t16 + 4);
    t6 = *((unsigned int *)t14);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t19);
    t10 = *((unsigned int *)t20);
    t21 = (t9 ^ t10);
    t22 = (t8 | t21);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t20);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB50;

LAB47:    if (t25 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t18) = 1;

LAB50:    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t18);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB53:    goto LAB46;

LAB12:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB14:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB16:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1152);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB18:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1288);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB20:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1424);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB22:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1560);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB24:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1696);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB26:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1832);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB28:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1968);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB30:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2104);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB32:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2240);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB34:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2376);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB36:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2512);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB38:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2648);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB40:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2784);
    t5 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB42:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4296U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);

LAB56:    goto LAB46;

LAB49:    t28 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(55, ng0);
    t35 = (t0 + 744);
    t36 = *((char **)t35);
    t35 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t35, t36, 0, 0, 5, 0LL);
    goto LAB53;

LAB54:    xsi_set_current_line(74, ng0);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    t11 = (t0 + 5496);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 5, 0LL);
    goto LAB56;

}

static void Cont_81_1(char *t0)
{
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 6824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    t24 = (t0 + 8824);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t8 + 4);
    t32 = *((unsigned int *)t8);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t37 = (t0 + 8648);
    *((int *)t37) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

}

static void Cont_82_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 7072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2784);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    t22 = (t0 + 8888);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t7 + 4);
    t30 = *((unsigned int *)t7);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 8664);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_84_3(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 7320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8680);
    *((int *)t2) = 1;
    t3 = (t0 + 7352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3816U);
    t11 = *((char **)t5);
    xsi_vlogtype_concat(t13, 2, 2, 2U, t11, 1, t4, 1);
    t5 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t12 = (t13 + 4);
    t15 = (t5 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t14) = 1;

LAB11:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(86, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

LAB10:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(88, ng0);
    t30 = (t0 + 3976U);
    t31 = *((char **)t30);
    t30 = (t0 + 5336);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 32, 0LL);
    goto LAB14;

}

static void Always_90_4(char *t0)
{
    char t13[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;

LAB0:    t1 = (t0 + 7568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 8696);
    *((int *)t2) = 1;
    t3 = (t0 + 7600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2784);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB11;

LAB8:    if (t18 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t13) = 1;

LAB11:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB14:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(92, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

LAB10:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(94, ng0);
    t28 = (t0 + 5656);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 32, t31, 32);
    t33 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 32, 0LL);
    goto LAB14;

LAB17:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(96, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 5656);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB21;

}

static void Always_98_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8712);
    *((int *)t2) = 1;
    t3 = (t0 + 7848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4616U);
    t3 = *((char **)t2);
    t2 = (t0 + 5016);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(100, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 5016);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

}

static void Always_104_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 8064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 8728);
    *((int *)t2) = 1;
    t3 = (t0 + 8096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3816U);
    t3 = *((char **)t2);
    t2 = (t0 + 5176);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(106, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 5176);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

}

static void implSig1_execute(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 8312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 32, t7, 32);
    t9 = (t0 + 8952);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31);
    t14 = (t0 + 8744);
    *((int *)t14) = 1;

LAB1:    return;
}


extern void work_m_00000000000894666312_1194452562_init()
{
	static char *pe[] = {(void *)Always_48_0,(void *)Cont_81_1,(void *)Cont_82_2,(void *)Always_84_3,(void *)Always_90_4,(void *)Always_98_5,(void *)Always_104_6,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000894666312_1194452562", "isim/stimulus_isim_beh.exe.sim/work/m_00000000000894666312_1194452562.didat");
	xsi_register_executes(pe);
}

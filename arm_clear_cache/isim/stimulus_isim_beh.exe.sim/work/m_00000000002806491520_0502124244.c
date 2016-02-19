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
static const char *ng0 = "//192.168.6.1/teacher/MIE/Computer Organization and Design/Project/arm_clear_cache/arm_clear_cache/altera_mf.v";
static int ng1[] = {65, 0};
static int ng2[] = {90, 0};
static int ng3[] = {32, 0};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng7[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng8[] = {6841720, 0};
static int ng9[] = {778330484, 0};
static int ng10[] = {776225108, 0};
static const char *ng11 = "r";
static const char *ng12 = "ERROR: cannot read %0s.";
static int ng13[] = {778922342, 0};
static int ng14[] = {776816966, 0};
static int ng15[] = {7759218, 0};
static int ng16[] = {24, 0};
static const char *ng17 = "ERROR: Invalid input file name %0s. Expecting file with .mif extension and Altera-mif data format.";
static const char *ng18 = "w";
static const char *ng19 = "ERROR : cannot write %0s.";
static const char *ng20 = "WARNING: %0s, Intel-hex data file is empty.";
static const char *ng21 = "Time: %0t  Instance: %m";
static const char *ng22 = "ERROR: %0s, line %0d, Missing `content begin` statement.";
static const char *ng23 = "ERROR: %0s, line %0d, Missing `end` statement.";
static int ng24[] = {10, 0};
static unsigned int ng25[] = {13U, 0U};
static int ng26[] = {1701276014, 0, 1701737570, 0, 1668247156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng27[] = {1952804468, 0, 6516590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng28 = "ERROR: %0s, line %0d, Invalid Altera-mif record.";
static int ng29[] = {9, 0};
static int ng30[] = {37, 0};
static int ng31[] = {45, 0};
static int ng32[] = {61, 0};
static int ng33[] = {1768191080, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng34 = "ERROR: %0s, line %0d, Width has already been specified once.";
static int ng35[] = {1701868648, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng36[] = {1633970552, 0, 1952538482, 0, 25697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng37[] = {1633970552, 0, 1936940914, 0, 1684304485, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng38 = "ERROR: %0s, line %0d, Unknown setting (%0s).";
static int ng39[] = {58, 0};
static const char *ng40 = "ERROR: %0s, line %0d, Invalid data record.";
static int ng41[] = {46, 0};
static int ng42[] = {91, 0};
static int ng43[] = {93, 0};
static int ng44[] = {59, 0};
static int ng45[] = {6449518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng46[] = {7299956, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng47[] = {6579555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng48[] = {7695987, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng49[] = {6841720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng50 = "ERROR: %0s, line %0d, Invalid assignment (%0s) to data_radix.";
static const char *ng51 = "ERROR: %0s, line %0d, Invalid assignment (%0s) to address radix.";
static int ng52[] = {6647396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng53 = "@%0h";
static int ng54[] = {4, 0};
static const char *ng55 = "%0h";
static const char *ng56 = "\n";
static const char *ng57 = "ERROR: %0s, line %0d, Invalid assigment.";
static int ng58[] = {48, 0};
static int ng59[] = {57, 0};
static unsigned int ng60[] = {48U, 0U};
static const char *ng61 = "ERROR: %0s, line %0d, Invalid assignment to width/depth.";
static int ng62[] = {70, 0};
static unsigned int ng63[] = {65U, 0U};
static int ng64[] = {97, 0};
static int ng65[] = {102, 0};
static unsigned int ng66[] = {97U, 0U};
static int ng67[] = {16, 0};
static int ng68[] = {6579555, 0};
static int ng69[] = {7695987, 0};
static int ng70[] = {6449518, 0};
static int ng71[] = {49, 0};
static int ng72[] = {2, 0};
static int ng73[] = {7299956, 0};
static int ng74[] = {55, 0};
static int ng75[] = {8, 0};
static int ng76[] = {16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng77[] = {10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng78[] = {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng79[] = {8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng80[] = {778593656, 0};
static int ng81[] = {776488280, 0};
static const char *ng82 = "ERROR: Invalid input file name %0s. Expecting file with .hex extension and Intel-hex data format.";
static const char *ng83 = "ERROR: %0s, line %0d, Missing the last record.";
static const char *ng84 = "ERROR: %0s, line %0d, Invalid INTEL HEX record.";
static unsigned int ng85[] = {0U, 0U};
static int ng86[] = {3, 0};
static const char *ng87 = "0";
static const char *ng88 = "%h";
static unsigned int ng89[] = {1U, 0U};
static unsigned int ng90[] = {2U, 0U};
static unsigned int ng91[] = {16U, 0U};
static unsigned int ng92[] = {3U, 0U};
static unsigned int ng93[] = {4U, 0U};
static unsigned int ng94[] = {65536U, 0U};
static unsigned int ng95[] = {5U, 0U};
static const char *ng96 = "ERROR: %0s, line %0d, Unknown record type.";
static unsigned int ng97[] = {255U, 0U};
static const char *ng98 = "ERROR: %0s, line %0d, Invalid checksum.";
static const char *ng99 = "ERROR:%0s, line %0d, Invalid INTEL HEX record.";
static const char *ng100 = "ERROR: Invalid input file name %0s. Expecting file with .hex extension (with Intel-hex data format) or .mif extension (with Altera-mif data format).";



static int sp_tolower(char *t1, char *t2)
{
    char t7[8];
    char t11[8];
    char t27[8];
    char t31[8];
    char t39[8];
    char t81[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t82;

LAB0:    t0 = 1;
    xsi_set_current_line(80, ng0);

LAB2:    xsi_set_current_line(81, ng0);
    t3 = (t1 + 3768);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB4;

LAB3:    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB4;

LAB7:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB6:    memset(t11, 0, 8);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t7);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t12) != 0)
        goto LAB10;

LAB11:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB12;

LAB13:    memcpy(t39, t11, 8);

LAB14:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(87, ng0);
    t3 = (t1 + 3768);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 3608);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);

LAB29:    t0 = 0;

LAB1:    return t0;
LAB4:    t10 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB6;

LAB8:    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB10:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB11;

LAB12:    t23 = (t1 + 3768);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB16;

LAB15:    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t25) > *((unsigned int *)t26))
        goto LAB18;

LAB17:    *((unsigned int *)t27) = 1;

LAB18:    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t32) != 0)
        goto LAB22;

LAB23:    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t11 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB14;

LAB16:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t31) = 1;
    goto LAB23;

LAB22:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB23;

LAB24:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t11 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t11);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB26;

LAB27:    xsi_set_current_line(82, ng0);

LAB30:    xsi_set_current_line(83, ng0);
    t77 = (t1 + 3768);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng3)));
    memset(t81, 0, 8);
    xsi_vlog_unsigned_add(t81, 32, t79, 8, t80, 32);
    t82 = (t1 + 3928);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 8);
    xsi_set_current_line(84, ng0);
    t3 = (t1 + 3928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 3608);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB29;

}

static int sp_convert_mif2ver(char *t1, char *t2)
{
    char t7[8];
    char t17[8];
    char t33[8];
    char t46[8];
    char t59[8];
    char t75[8];
    char t83[8];
    char t121[8];
    char t122[8];
    char t123[8];
    char t144[16];
    char t145[512];
    char t192[512];
    char t193[512];
    char t194[512];
    char t199[512];
    char t200[8];
    char t203[8];
    char t234[8];
    char t247[520];
    char t248[72];
    char t249[72];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    int t129;
    char *t130;
    unsigned int t131;
    int t132;
    int t133;
    char *t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    int t142;
    int t143;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    char *t201;
    char *t202;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t235;
    char *t236;
    char *t237;
    char *t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t246;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1872);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(138, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 8248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 13048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 10808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 10968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(149, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(150, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(151, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(153, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(154, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(155, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(157, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 12568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(158, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(159, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(160, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(161, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    xsi_set_current_line(162, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(163, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(164, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(165, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 4728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 257);
    xsi_set_current_line(166, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 4888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 257);
    xsi_set_current_line(167, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 5528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    xsi_set_current_line(168, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 5688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    xsi_set_current_line(169, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294967295U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4294967295U);
    t16 = ((char*)((ng9)));
    memset(t17, 0, 8);
    t18 = (t7 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB9;

LAB6:    if (t29 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t17) = 1;

LAB9:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t34) != 0)
        goto LAB12;

LAB13:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = (!(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB14;

LAB15:    memcpy(t83, t33, 8);

LAB16:    t111 = (t83 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t83);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(186, ng0);

LAB31:    xsi_set_current_line(187, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t7) = xsi_vlogfile_file_open_of_valname_ctype(t6, 2048, ng11);
    t8 = (t7 + 4);
    *((int *)t8) = 0;
    t9 = (t1 + 9368);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(189, ng0);
    t4 = (t1 + 9368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(195, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 4408);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 2048);
    xsi_set_current_line(197, ng0);
    t4 = (t1 + 4408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294967295U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4294967295U);
    t16 = ((char*)((ng13)));
    memset(t17, 0, 8);
    t18 = (t7 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB39;

LAB36:    if (t29 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t17) = 1;

LAB39:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t34) != 0)
        goto LAB42;

LAB43:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = (!(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB44;

LAB45:    memcpy(t83, t33, 8);

LAB46:    t111 = (t83 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t83);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(200, ng0);

LAB63:    xsi_set_current_line(201, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 1872);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t8, (char)118, t6, 2048);
    xsi_set_current_line(202, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB60:    xsi_set_current_line(205, ng0);
    t4 = (t1 + 8248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t8) == 0)
        goto LAB64;

LAB66:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;

LAB67:    t16 = (t7 + 4);
    t15 = *((unsigned int *)t16);
    t20 = (~(t15));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB68;

LAB69:
LAB70:    xsi_set_current_line(216, ng0);

LAB76:    t4 = (t1 + 8248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB80;

LAB78:    if (*((unsigned int *)t8) == 0)
        goto LAB77;

LAB79:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;

LAB80:    memset(t17, 0, 8);
    t16 = (t7 + 4);
    t15 = *((unsigned int *)t16);
    t20 = (~(t15));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t16) != 0)
        goto LAB83;

LAB84:    t19 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    t25 = *((unsigned int *)t19);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB85;

LAB86:    memcpy(t59, t17, 8);

LAB87:    t74 = (t59 + 4);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t59);
    t84 = (t81 & t80);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(723, ng0);
    t4 = (t1 + 9368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t6));
    xsi_set_current_line(724, ng0);
    t4 = (t1 + 9528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t6));

LAB30:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t33) = 1;
    goto LAB13;

LAB12:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB13;

LAB14:    t47 = (t1 + 4088);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t46, 0, 8);
    t50 = (t46 + 4);
    t51 = (t49 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t56 & 4294967295U);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 4294967295U);
    t58 = ((char*)((ng10)));
    memset(t59, 0, 8);
    t60 = (t46 + 4);
    t61 = (t58 + 4);
    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = *((unsigned int *)t60);
    t66 = *((unsigned int *)t61);
    t67 = (t65 ^ t66);
    t68 = (t64 | t67);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t61);
    t71 = (t69 | t70);
    t72 = (~(t71));
    t73 = (t68 & t72);
    if (t73 != 0)
        goto LAB20;

LAB17:    if (t71 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t59) = 1;

LAB20:    memset(t75, 0, 8);
    t76 = (t59 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t59);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t76) != 0)
        goto LAB23;

LAB24:    t84 = *((unsigned int *)t33);
    t85 = *((unsigned int *)t75);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = (t33 + 4);
    t88 = (t75 + 4);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t87);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t74 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t75) = 1;
    goto LAB24;

LAB23:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB24;

LAB25:    t95 = *((unsigned int *)t83);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t83) = (t95 | t96);
    t97 = (t33 + 4);
    t98 = (t75 + 4);
    t99 = *((unsigned int *)t97);
    t100 = (~(t99));
    t101 = *((unsigned int *)t33);
    t102 = (t101 & t100);
    t103 = *((unsigned int *)t98);
    t104 = (~(t103));
    t105 = *((unsigned int *)t75);
    t106 = (t105 & t104);
    t107 = (~(t102));
    t108 = (~(t106));
    t109 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t109 & t107);
    t110 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t110 & t108);
    goto LAB27;

LAB28:    xsi_set_current_line(184, ng0);
    t117 = (t1 + 4088);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t1 + 4408);
    xsi_vlogvar_assign_value(t120, t119, 0, 0, 2048);
    goto LAB30;

LAB32:    xsi_set_current_line(190, ng0);

LAB35:    xsi_set_current_line(191, ng0);
    t16 = (t1 + 4088);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t32 = (t1 + 1872);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t32, (char)118, t19, 2048);
    xsi_set_current_line(192, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB34;

LAB38:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t33) = 1;
    goto LAB43;

LAB42:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB43;

LAB44:    t47 = (t1 + 4408);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t46, 0, 8);
    t50 = (t46 + 4);
    t51 = (t49 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t56 & 4294967295U);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 4294967295U);
    t58 = ((char*)((ng14)));
    memset(t59, 0, 8);
    t60 = (t46 + 4);
    t61 = (t58 + 4);
    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = *((unsigned int *)t60);
    t66 = *((unsigned int *)t61);
    t67 = (t65 ^ t66);
    t68 = (t64 | t67);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t61);
    t71 = (t69 | t70);
    t72 = (~(t71));
    t73 = (t68 & t72);
    if (t73 != 0)
        goto LAB50;

LAB47:    if (t71 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t59) = 1;

LAB50:    memset(t75, 0, 8);
    t76 = (t59 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t59);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t76) != 0)
        goto LAB53;

LAB54:    t84 = *((unsigned int *)t33);
    t85 = *((unsigned int *)t75);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = (t33 + 4);
    t88 = (t75 + 4);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t87);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB49:    t74 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t75) = 1;
    goto LAB54;

LAB53:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB54;

LAB55:    t95 = *((unsigned int *)t83);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t83) = (t95 | t96);
    t97 = (t33 + 4);
    t98 = (t75 + 4);
    t99 = *((unsigned int *)t97);
    t100 = (~(t99));
    t101 = *((unsigned int *)t33);
    t102 = (t101 & t100);
    t103 = *((unsigned int *)t98);
    t104 = (~(t103));
    t105 = *((unsigned int *)t75);
    t106 = (t105 & t104);
    t107 = (~(t102));
    t108 = (~(t106));
    t109 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t109 & t107);
    t110 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t110 & t108);
    goto LAB57;

LAB58:    xsi_set_current_line(198, ng0);
    t117 = ((char*)((ng15)));
    t118 = (t1 + 4408);
    t119 = (t1 + 4408);
    t120 = (t119 + 72U);
    t124 = *((char **)t120);
    t125 = ((char*)((ng16)));
    t126 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t121, t122, t123, ((int*)(t124)), 2, t125, 32, 1, t126, 32, 1);
    t127 = (t121 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (!(t128));
    t130 = (t122 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (!(t131));
    t133 = (t129 && t132);
    t134 = (t123 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (!(t135));
    t137 = (t133 && t136);
    if (t137 == 1)
        goto LAB61;

LAB62:    goto LAB60;

LAB61:    t138 = *((unsigned int *)t123);
    t139 = (t138 + 0);
    t140 = *((unsigned int *)t121);
    t141 = *((unsigned int *)t122);
    t142 = (t140 - t141);
    t143 = (t142 + 1);
    xsi_vlogvar_assign_value(t118, t117, t139, *((unsigned int *)t122), t143);
    goto LAB62;

LAB64:    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(206, ng0);

LAB71:    xsi_set_current_line(207, ng0);
    t18 = (t1 + 4408);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    *((int *)t17) = xsi_vlogfile_file_open_of_valname_ctype(t32, 2048, ng18);
    t34 = (t17 + 4);
    *((int *)t34) = 0;
    t40 = (t1 + 9528);
    xsi_vlogvar_assign_value(t40, t17, 0, 0, 32);
    xsi_set_current_line(209, ng0);
    t4 = (t1 + 9528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB72;

LAB73:
LAB74:    goto LAB70;

LAB72:    xsi_set_current_line(210, ng0);

LAB75:    xsi_set_current_line(211, ng0);
    t16 = (t1 + 4408);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t32 = (t1 + 1872);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t32, (char)118, t19, 2048);
    xsi_set_current_line(212, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB74;

LAB77:    *((unsigned int *)t7) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t17) = 1;
    goto LAB84;

LAB83:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB84;

LAB85:    t32 = (t1 + 8408);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    memset(t33, 0, 8);
    t41 = (t40 + 4);
    t27 = *((unsigned int *)t41);
    t28 = (~(t27));
    t29 = *((unsigned int *)t40);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t41) == 0)
        goto LAB88;

LAB90:    t47 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t47) = 1;

LAB91:    memset(t46, 0, 8);
    t48 = (t33 + 4);
    t35 = *((unsigned int *)t48);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t48) != 0)
        goto LAB94;

LAB95:    t42 = *((unsigned int *)t17);
    t43 = *((unsigned int *)t46);
    t44 = (t42 & t43);
    *((unsigned int *)t59) = t44;
    t50 = (t17 + 4);
    t51 = (t46 + 4);
    t58 = (t59 + 4);
    t45 = *((unsigned int *)t50);
    t52 = *((unsigned int *)t51);
    t53 = (t45 | t52);
    *((unsigned int *)t58) = t53;
    t54 = *((unsigned int *)t58);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB88:    *((unsigned int *)t33) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t46) = 1;
    goto LAB95;

LAB94:    t49 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB95;

LAB96:    t56 = *((unsigned int *)t59);
    t57 = *((unsigned int *)t58);
    *((unsigned int *)t59) = (t56 | t57);
    t60 = (t17 + 4);
    t61 = (t46 + 4);
    t62 = *((unsigned int *)t17);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t46);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t102 = (t63 & t65);
    t106 = (t67 & t69);
    t70 = (~(t102));
    t71 = (~(t106));
    t72 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t72 & t70);
    t73 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t73 & t71);
    t77 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t77 & t70);
    t78 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t78 & t71);
    goto LAB98;

LAB99:    xsi_set_current_line(217, ng0);

LAB101:    t76 = (t1 + 280);
    xsi_vlog_namedbase_setdisablestate(t76, &&LAB102);
    xsi_vlog_namedbase_pushprocess(t76, t2);

LAB103:    xsi_set_current_line(219, ng0);
    t82 = (t1 + 9368);
    t87 = (t82 + 56U);
    t88 = *((char **)t87);
    *((int *)t75) = xsi_vlogfile_fgetc(*((unsigned int *)t88));
    t89 = (t75 + 4);
    *((int *)t89) = 0;
    t97 = (t1 + 9688);
    xsi_vlogvar_assign_value(t97, t75, 0, 0, 32);
    xsi_set_current_line(221, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t8, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t6, 32, t7, 32);
    t9 = (t17 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(242, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng24)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB135;

LAB132:    if (t23 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t7) = 1;

LAB135:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t19) != 0)
        goto LAB138;

LAB139:    t34 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = (!(t31));
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB140;

LAB141:    memcpy(t59, t17, 8);

LAB142:    t88 = (t59 + 4);
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t96);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB154;

LAB155:    xsi_set_current_line(265, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB192;

LAB189:    if (t23 != 0)
        goto LAB191;

LAB190:    *((unsigned int *)t7) = 1;

LAB192:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB193;

LAB194:    if (*((unsigned int *)t19) != 0)
        goto LAB195;

LAB196:    t34 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = (!(t31));
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB197;

LAB198:    memcpy(t59, t17, 8);

LAB199:    t88 = (t59 + 4);
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t96);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB211;

LAB212:    xsi_set_current_line(269, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng30)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB218;

LAB215:    if (t23 != 0)
        goto LAB217;

LAB216:    *((unsigned int *)t7) = 1;

LAB218:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB219;

LAB220:    xsi_set_current_line(291, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng31)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB318;

LAB315:    if (t23 != 0)
        goto LAB317;

LAB316:    *((unsigned int *)t7) = 1;

LAB318:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB319;

LAB320:    xsi_set_current_line(325, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng32)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB410;

LAB407:    if (t23 != 0)
        goto LAB409;

LAB408:    *((unsigned int *)t7) = 1;

LAB410:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB411;

LAB412:    xsi_set_current_line(361, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng39)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB444;

LAB441:    if (t23 != 0)
        goto LAB443;

LAB442:    *((unsigned int *)t7) = 1;

LAB444:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB445;

LAB446:    xsi_set_current_line(379, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng41)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB469;

LAB466:    if (t23 != 0)
        goto LAB468;

LAB467:    *((unsigned int *)t7) = 1;

LAB469:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB470;

LAB471:    xsi_set_current_line(407, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng42)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB497;

LAB494:    if (t23 != 0)
        goto LAB496;

LAB495:    *((unsigned int *)t7) = 1;

LAB497:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB498;

LAB499:    xsi_set_current_line(411, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng43)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB505;

LAB502:    if (t23 != 0)
        goto LAB504;

LAB503:    *((unsigned int *)t7) = 1;

LAB505:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB506;

LAB507:    xsi_set_current_line(427, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng44)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB523;

LAB520:    if (t23 != 0)
        goto LAB522;

LAB521:    *((unsigned int *)t7) = 1;

LAB523:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB524;

LAB525:    xsi_set_current_line(553, ng0);
    t4 = (t1 + 5848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB744;

LAB741:    if (t23 != 0)
        goto LAB743;

LAB742:    *((unsigned int *)t7) = 1;

LAB744:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB745;

LAB746:    if (*((unsigned int *)t19) != 0)
        goto LAB747;

LAB748:    t34 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = (!(t31));
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB749;

LAB750:    memcpy(t59, t17, 8);

LAB751:    t88 = (t59 + 4);
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t96);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB763;

LAB764:    xsi_set_current_line(563, ng0);
    t4 = (t1 + 7288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB798;

LAB795:    if (t23 != 0)
        goto LAB797;

LAB796:    *((unsigned int *)t7) = 1;

LAB798:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB799;

LAB800:    xsi_set_current_line(632, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1060;

LAB1057:    if (t23 != 0)
        goto LAB1059;

LAB1058:    *((unsigned int *)t7) = 1;

LAB1060:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB1061;

LAB1062:    xsi_set_current_line(712, ng0);

LAB1304:    xsi_set_current_line(713, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(715, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t6, 32, t8, 32);
    memset(t17, 0, 8);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB1305;

LAB1306:    if (*((unsigned int *)t9) != 0)
        goto LAB1307;

LAB1308:    t18 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t18);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB1309;

LAB1310:    memcpy(t59, t17, 8);

LAB1311:    t60 = (t59 + 4);
    t66 = *((unsigned int *)t60);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB1319;

LAB1320:    xsi_set_current_line(718, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 5048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);

LAB1321:    xsi_set_current_line(720, ng0);
    t4 = (t1 + 5048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 4568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    xsi_vlogtype_concat(t247, 2056, 2056, 2U, t16, 2048, t6, 8);
    t18 = (t1 + 4568);
    xsi_vlogvar_assign_value(t18, t247, 0, 0, 2048);
    t19 = (t1 + 5368);
    xsi_vlogvar_assign_value(t19, t247, 2048, 0, 4);

LAB1063:
LAB801:
LAB765:
LAB526:
LAB508:
LAB500:
LAB472:
LAB447:
LAB413:
LAB321:
LAB221:
LAB213:
LAB156:
LAB106:    t4 = (t1 + 280);
    xsi_vlog_namedbase_popprocess(t4);

LAB102:    goto LAB76;

LAB104:    xsi_set_current_line(222, ng0);

LAB107:    xsi_set_current_line(224, ng0);
    t16 = (t1 + 8568);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t33, 0, 8);
    t32 = (t19 + 4);
    t15 = *((unsigned int *)t32);
    t20 = (~(t15));
    t21 = *((unsigned int *)t19);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB111;

LAB109:    if (*((unsigned int *)t32) == 0)
        goto LAB108;

LAB110:    t34 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t34) = 1;

LAB111:    t40 = (t33 + 4);
    t24 = *((unsigned int *)t40);
    t25 = (~(t24));
    t26 = *((unsigned int *)t33);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(230, ng0);
    t4 = (t1 + 7128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB119;

LAB117:    if (*((unsigned int *)t8) == 0)
        goto LAB116;

LAB118:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;

LAB119:    t16 = (t7 + 4);
    t15 = *((unsigned int *)t16);
    t20 = (~(t15));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(235, ng0);
    t4 = (t1 + 8728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB127;

LAB125:    if (*((unsigned int *)t8) == 0)
        goto LAB124;

LAB126:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;

LAB127:    t16 = (t7 + 4);
    t15 = *((unsigned int *)t16);
    t20 = (~(t15));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB128;

LAB129:
LAB130:
LAB122:
LAB114:    xsi_set_current_line(240, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB106;

LAB108:    *((unsigned int *)t33) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(225, ng0);

LAB115:    xsi_set_current_line(226, ng0);
    t41 = ((char*)((ng5)));
    t47 = (t1 + 8408);
    xsi_vlogvar_assign_value(t47, t41, 0, 0, 1);
    xsi_set_current_line(227, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t8, (char)118, t6, 2048);
    xsi_set_current_line(228, ng0);
    t4 = xsi_vlog_time(t144, 1.0000000000000000, 1.0000000000000000);
    t5 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t5, (char)118, t144, 64);
    goto LAB114;

LAB116:    *((unsigned int *)t7) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(231, ng0);

LAB123:    xsi_set_current_line(232, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t1 + 8408);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(233, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    goto LAB122;

LAB124:    *((unsigned int *)t7) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(236, ng0);

LAB131:    xsi_set_current_line(237, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t1 + 8408);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(238, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng23, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    goto LAB130;

LAB134:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB135;

LAB136:    *((unsigned int *)t17) = 1;
    goto LAB139;

LAB138:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB139;

LAB140:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng25)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    t50 = (t48 + 4);
    t38 = *((unsigned int *)t47);
    t39 = *((unsigned int *)t48);
    t42 = (t38 ^ t39);
    t43 = *((unsigned int *)t49);
    t44 = *((unsigned int *)t50);
    t45 = (t43 ^ t44);
    t52 = (t42 | t45);
    t53 = *((unsigned int *)t49);
    t54 = *((unsigned int *)t50);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB146;

LAB143:    if (t55 != 0)
        goto LAB145;

LAB144:    *((unsigned int *)t33) = 1;

LAB146:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t58) != 0)
        goto LAB149;

LAB150:    t67 = *((unsigned int *)t17);
    t68 = *((unsigned int *)t46);
    t69 = (t67 | t68);
    *((unsigned int *)t59) = t69;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t74);
    t72 = (t70 | t71);
    *((unsigned int *)t76) = t72;
    t73 = *((unsigned int *)t76);
    t77 = (t73 != 0);
    if (t77 == 1)
        goto LAB151;

LAB152:
LAB153:    goto LAB142;

LAB145:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB146;

LAB147:    *((unsigned int *)t46) = 1;
    goto LAB150;

LAB149:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB150;

LAB151:    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t78 | t79);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t80 = *((unsigned int *)t82);
    t81 = (~(t80));
    t84 = *((unsigned int *)t17);
    t102 = (t84 & t81);
    t85 = *((unsigned int *)t87);
    t86 = (~(t85));
    t90 = *((unsigned int *)t46);
    t106 = (t90 & t86);
    t91 = (~(t102));
    t92 = (~(t106));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t91);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    goto LAB153;

LAB154:    xsi_set_current_line(243, ng0);

LAB157:    xsi_set_current_line(244, ng0);
    t89 = (t1 + 4568);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng26)));
    xsi_vlog_unsigned_equal(t145, 2048, t98, 2048, t111, 2048);
    memset(t75, 0, 8);
    t117 = (t145 + 4);
    t103 = *((unsigned int *)t117);
    t104 = (~(t103));
    t105 = *((unsigned int *)t145);
    t107 = (t105 & t104);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t117) != 0)
        goto LAB160;

LAB161:    t119 = (t75 + 4);
    t109 = *((unsigned int *)t75);
    t110 = *((unsigned int *)t119);
    t112 = (t109 || t110);
    if (t112 > 0)
        goto LAB162;

LAB163:    memcpy(t122, t75, 8);

LAB164:    t184 = (t122 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t122);
    t188 = (t187 & t186);
    t189 = (t188 != 0);
    if (t189 > 0)
        goto LAB176;

LAB177:    xsi_set_current_line(250, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng27)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB180;

LAB181:    xsi_set_current_line(255, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng6)));
    xsi_vlog_unsigned_not_equal(t145, 2048, t6, 2048, t8, 2048);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB184;

LAB185:
LAB186:
LAB182:
LAB178:    xsi_set_current_line(262, ng0);
    t4 = (t1 + 12568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 12568);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB156;

LAB158:    *((unsigned int *)t75) = 1;
    goto LAB161;

LAB160:    t118 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB161;

LAB162:    t120 = (t1 + 7128);
    t124 = (t120 + 56U);
    t125 = *((char **)t124);
    t126 = ((char*)((ng4)));
    memset(t83, 0, 8);
    t127 = (t125 + 4);
    t130 = (t126 + 4);
    t113 = *((unsigned int *)t125);
    t114 = *((unsigned int *)t126);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t127);
    t128 = *((unsigned int *)t130);
    t131 = (t116 ^ t128);
    t135 = (t115 | t131);
    t138 = *((unsigned int *)t127);
    t140 = *((unsigned int *)t130);
    t141 = (t138 | t140);
    t146 = (~(t141));
    t147 = (t135 & t146);
    if (t147 != 0)
        goto LAB168;

LAB165:    if (t141 != 0)
        goto LAB167;

LAB166:    *((unsigned int *)t83) = 1;

LAB168:    memset(t121, 0, 8);
    t148 = (t83 + 4);
    t149 = *((unsigned int *)t148);
    t150 = (~(t149));
    t151 = *((unsigned int *)t83);
    t152 = (t151 & t150);
    t153 = (t152 & 1U);
    if (t153 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t148) != 0)
        goto LAB171;

LAB172:    t155 = *((unsigned int *)t75);
    t156 = *((unsigned int *)t121);
    t157 = (t155 & t156);
    *((unsigned int *)t122) = t157;
    t158 = (t75 + 4);
    t159 = (t121 + 4);
    t160 = (t122 + 4);
    t161 = *((unsigned int *)t158);
    t162 = *((unsigned int *)t159);
    t163 = (t161 | t162);
    *((unsigned int *)t160) = t163;
    t164 = *((unsigned int *)t160);
    t165 = (t164 != 0);
    if (t165 == 1)
        goto LAB173;

LAB174:
LAB175:    goto LAB164;

LAB167:    t134 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB168;

LAB169:    *((unsigned int *)t121) = 1;
    goto LAB172;

LAB171:    t154 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB172;

LAB173:    t166 = *((unsigned int *)t122);
    t167 = *((unsigned int *)t160);
    *((unsigned int *)t122) = (t166 | t167);
    t168 = (t75 + 4);
    t169 = (t121 + 4);
    t170 = *((unsigned int *)t75);
    t171 = (~(t170));
    t172 = *((unsigned int *)t168);
    t173 = (~(t172));
    t174 = *((unsigned int *)t121);
    t175 = (~(t174));
    t176 = *((unsigned int *)t169);
    t177 = (~(t176));
    t129 = (t171 & t173);
    t132 = (t175 & t177);
    t178 = (~(t129));
    t179 = (~(t132));
    t180 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t180 & t178);
    t181 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t181 & t179);
    t182 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t182 & t178);
    t183 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t183 & t179);
    goto LAB175;

LAB176:    xsi_set_current_line(245, ng0);

LAB179:    xsi_set_current_line(246, ng0);
    t190 = ((char*)((ng5)));
    t191 = (t1 + 7128);
    xsi_vlogvar_assign_value(t191, t190, 0, 0, 1);
    xsi_set_current_line(247, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(248, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB178;

LAB180:    xsi_set_current_line(251, ng0);

LAB183:    goto LAB182;

LAB184:    xsi_set_current_line(256, ng0);

LAB187:    xsi_set_current_line(258, ng0);
    t16 = ((char*)((ng5)));
    t18 = (t1 + 8408);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 1);
    xsi_set_current_line(259, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(260, ng0);
    goto LAB102;

LAB188:    goto LAB186;

LAB191:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB192;

LAB193:    *((unsigned int *)t17) = 1;
    goto LAB196;

LAB195:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB196;

LAB197:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng29)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    t50 = (t48 + 4);
    t38 = *((unsigned int *)t47);
    t39 = *((unsigned int *)t48);
    t42 = (t38 ^ t39);
    t43 = *((unsigned int *)t49);
    t44 = *((unsigned int *)t50);
    t45 = (t43 ^ t44);
    t52 = (t42 | t45);
    t53 = *((unsigned int *)t49);
    t54 = *((unsigned int *)t50);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB203;

LAB200:    if (t55 != 0)
        goto LAB202;

LAB201:    *((unsigned int *)t33) = 1;

LAB203:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB204;

LAB205:    if (*((unsigned int *)t58) != 0)
        goto LAB206;

LAB207:    t67 = *((unsigned int *)t17);
    t68 = *((unsigned int *)t46);
    t69 = (t67 | t68);
    *((unsigned int *)t59) = t69;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t74);
    t72 = (t70 | t71);
    *((unsigned int *)t76) = t72;
    t73 = *((unsigned int *)t76);
    t77 = (t73 != 0);
    if (t77 == 1)
        goto LAB208;

LAB209:
LAB210:    goto LAB199;

LAB202:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB203;

LAB204:    *((unsigned int *)t46) = 1;
    goto LAB207;

LAB206:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB207;

LAB208:    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t78 | t79);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t80 = *((unsigned int *)t82);
    t81 = (~(t80));
    t84 = *((unsigned int *)t17);
    t102 = (t84 & t81);
    t85 = *((unsigned int *)t87);
    t86 = (~(t85));
    t90 = *((unsigned int *)t46);
    t106 = (t90 & t86);
    t91 = (~(t102));
    t92 = (~(t106));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t91);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    goto LAB210;

LAB211:    xsi_set_current_line(266, ng0);

LAB214:    goto LAB213;

LAB217:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB218;

LAB219:    xsi_set_current_line(270, ng0);

LAB222:    xsi_set_current_line(272, ng0);
    t32 = (t1 + 9368);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t40));
    t41 = (t17 + 4);
    *((int *)t41) = 0;
    t47 = (t1 + 9688);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 32);
    xsi_set_current_line(274, ng0);

LAB223:    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng30)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB225;

LAB224:    if (t23 != 0)
        goto LAB226;

LAB227:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB228;

LAB229:    if (*((unsigned int *)t19) != 0)
        goto LAB230;

LAB231:    t34 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t34);
    t36 = (t31 || t35);
    if (t36 > 0)
        goto LAB232;

LAB233:    memcpy(t59, t17, 8);

LAB234:    memset(t75, 0, 8);
    t88 = (t59 + 4);
    t100 = *((unsigned int *)t88);
    t101 = (~(t100));
    t103 = *((unsigned int *)t59);
    t104 = (t103 & t101);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB246;

LAB247:    if (*((unsigned int *)t88) != 0)
        goto LAB248;

LAB249:    t97 = (t75 + 4);
    t107 = *((unsigned int *)t75);
    t108 = *((unsigned int *)t97);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB250;

LAB251:    memcpy(t122, t75, 8);

LAB252:    t158 = (t122 + 4);
    t182 = *((unsigned int *)t158);
    t183 = (~(t182));
    t185 = *((unsigned int *)t122);
    t186 = (t185 & t183);
    t187 = (t186 != 0);
    if (t187 > 0)
        goto LAB264;

LAB265:    xsi_set_current_line(279, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng24)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB270;

LAB267:    if (t23 != 0)
        goto LAB269;

LAB268:    *((unsigned int *)t7) = 1;

LAB270:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB271;

LAB272:    if (*((unsigned int *)t19) != 0)
        goto LAB273;

LAB274:    t34 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = (!(t31));
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB275;

LAB276:    memcpy(t59, t17, 8);

LAB277:    t88 = (t59 + 4);
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t96);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB289;

LAB290:
LAB291:    goto LAB221;

LAB225:    *((unsigned int *)t7) = 1;
    goto LAB227;

LAB226:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB227;

LAB228:    *((unsigned int *)t17) = 1;
    goto LAB231;

LAB230:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB231;

LAB232:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng24)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    t50 = (t48 + 4);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t48);
    t39 = (t37 ^ t38);
    t42 = *((unsigned int *)t49);
    t43 = *((unsigned int *)t50);
    t44 = (t42 ^ t43);
    t45 = (t39 | t44);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t45 & t55);
    if (t56 != 0)
        goto LAB236;

LAB235:    if (t54 != 0)
        goto LAB237;

LAB238:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t57 = *((unsigned int *)t58);
    t62 = (~(t57));
    t63 = *((unsigned int *)t33);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB239;

LAB240:    if (*((unsigned int *)t58) != 0)
        goto LAB241;

LAB242:    t66 = *((unsigned int *)t17);
    t67 = *((unsigned int *)t46);
    t68 = (t66 & t67);
    *((unsigned int *)t59) = t68;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t69 = *((unsigned int *)t61);
    t70 = *((unsigned int *)t74);
    t71 = (t69 | t70);
    *((unsigned int *)t76) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB243;

LAB244:
LAB245:    goto LAB234;

LAB236:    *((unsigned int *)t33) = 1;
    goto LAB238;

LAB237:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB238;

LAB239:    *((unsigned int *)t46) = 1;
    goto LAB242;

LAB241:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB242;

LAB243:    t77 = *((unsigned int *)t59);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t77 | t78);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t79 = *((unsigned int *)t17);
    t80 = (~(t79));
    t81 = *((unsigned int *)t82);
    t84 = (~(t81));
    t85 = *((unsigned int *)t46);
    t86 = (~(t85));
    t90 = *((unsigned int *)t87);
    t91 = (~(t90));
    t102 = (t80 & t84);
    t106 = (t86 & t91);
    t92 = (~(t102));
    t93 = (~(t106));
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t95 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t95 & t93);
    t96 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t96 & t92);
    t99 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t99 & t93);
    goto LAB245;

LAB246:    *((unsigned int *)t75) = 1;
    goto LAB249;

LAB248:    t89 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB249;

LAB250:    t98 = (t1 + 9688);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng25)));
    memset(t83, 0, 8);
    t119 = (t117 + 4);
    t120 = (t118 + 4);
    t110 = *((unsigned int *)t117);
    t112 = *((unsigned int *)t118);
    t113 = (t110 ^ t112);
    t114 = *((unsigned int *)t119);
    t115 = *((unsigned int *)t120);
    t116 = (t114 ^ t115);
    t128 = (t113 | t116);
    t131 = *((unsigned int *)t119);
    t135 = *((unsigned int *)t120);
    t138 = (t131 | t135);
    t140 = (~(t138));
    t141 = (t128 & t140);
    if (t141 != 0)
        goto LAB254;

LAB253:    if (t138 != 0)
        goto LAB255;

LAB256:    memset(t121, 0, 8);
    t125 = (t83 + 4);
    t146 = *((unsigned int *)t125);
    t147 = (~(t146));
    t149 = *((unsigned int *)t83);
    t150 = (t149 & t147);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB257;

LAB258:    if (*((unsigned int *)t125) != 0)
        goto LAB259;

LAB260:    t152 = *((unsigned int *)t75);
    t153 = *((unsigned int *)t121);
    t155 = (t152 & t153);
    *((unsigned int *)t122) = t155;
    t127 = (t75 + 4);
    t130 = (t121 + 4);
    t134 = (t122 + 4);
    t156 = *((unsigned int *)t127);
    t157 = *((unsigned int *)t130);
    t161 = (t156 | t157);
    *((unsigned int *)t134) = t161;
    t162 = *((unsigned int *)t134);
    t163 = (t162 != 0);
    if (t163 == 1)
        goto LAB261;

LAB262:
LAB263:    goto LAB252;

LAB254:    *((unsigned int *)t83) = 1;
    goto LAB256;

LAB255:    t124 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB256;

LAB257:    *((unsigned int *)t121) = 1;
    goto LAB260;

LAB259:    t126 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB260;

LAB261:    t164 = *((unsigned int *)t122);
    t165 = *((unsigned int *)t134);
    *((unsigned int *)t122) = (t164 | t165);
    t148 = (t75 + 4);
    t154 = (t121 + 4);
    t166 = *((unsigned int *)t75);
    t167 = (~(t166));
    t170 = *((unsigned int *)t148);
    t171 = (~(t170));
    t172 = *((unsigned int *)t121);
    t173 = (~(t172));
    t174 = *((unsigned int *)t154);
    t175 = (~(t174));
    t129 = (t167 & t171);
    t132 = (t173 & t175);
    t176 = (~(t129));
    t177 = (~(t132));
    t178 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t178 & t176);
    t179 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t179 & t177);
    t180 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t180 & t176);
    t181 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t181 & t177);
    goto LAB263;

LAB264:    xsi_set_current_line(275, ng0);

LAB266:    xsi_set_current_line(276, ng0);
    t159 = (t1 + 9368);
    t160 = (t159 + 56U);
    t168 = *((char **)t160);
    *((int *)t123) = xsi_vlogfile_fgetc(*((unsigned int *)t168));
    t169 = (t123 + 4);
    *((int *)t169) = 0;
    t184 = (t1 + 9688);
    xsi_vlogvar_assign_value(t184, t123, 0, 0, 32);
    goto LAB223;

LAB269:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB270;

LAB271:    *((unsigned int *)t17) = 1;
    goto LAB274;

LAB273:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB274;

LAB275:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng25)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    t50 = (t48 + 4);
    t38 = *((unsigned int *)t47);
    t39 = *((unsigned int *)t48);
    t42 = (t38 ^ t39);
    t43 = *((unsigned int *)t49);
    t44 = *((unsigned int *)t50);
    t45 = (t43 ^ t44);
    t52 = (t42 | t45);
    t53 = *((unsigned int *)t49);
    t54 = *((unsigned int *)t50);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB281;

LAB278:    if (t55 != 0)
        goto LAB280;

LAB279:    *((unsigned int *)t33) = 1;

LAB281:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB282;

LAB283:    if (*((unsigned int *)t58) != 0)
        goto LAB284;

LAB285:    t67 = *((unsigned int *)t17);
    t68 = *((unsigned int *)t46);
    t69 = (t67 | t68);
    *((unsigned int *)t59) = t69;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t74);
    t72 = (t70 | t71);
    *((unsigned int *)t76) = t72;
    t73 = *((unsigned int *)t76);
    t77 = (t73 != 0);
    if (t77 == 1)
        goto LAB286;

LAB287:
LAB288:    goto LAB277;

LAB280:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB281;

LAB282:    *((unsigned int *)t46) = 1;
    goto LAB285;

LAB284:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB285;

LAB286:    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t78 | t79);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t80 = *((unsigned int *)t82);
    t81 = (~(t80));
    t84 = *((unsigned int *)t17);
    t102 = (t84 & t81);
    t85 = *((unsigned int *)t87);
    t86 = (~(t85));
    t90 = *((unsigned int *)t46);
    t106 = (t90 & t86);
    t91 = (~(t102));
    t92 = (~(t106));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t91);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    goto LAB288;

LAB289:    xsi_set_current_line(280, ng0);

LAB292:    xsi_set_current_line(281, ng0);
    t89 = (t1 + 12568);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng5)));
    memset(t75, 0, 8);
    xsi_vlog_signed_add(t75, 32, t98, 32, t111, 32);
    t117 = (t1 + 12568);
    xsi_vlogvar_assign_value(t117, t75, 0, 0, 32);
    xsi_set_current_line(283, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng26)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    memset(t7, 0, 8);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB293;

LAB294:    if (*((unsigned int *)t9) != 0)
        goto LAB295;

LAB296:    t18 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t18);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB297;

LAB298:    memcpy(t46, t7, 8);

LAB299:    t76 = (t46 + 4);
    t81 = *((unsigned int *)t76);
    t84 = (~(t81));
    t85 = *((unsigned int *)t46);
    t86 = (t85 & t84);
    t90 = (t86 != 0);
    if (t90 > 0)
        goto LAB311;

LAB312:
LAB313:    goto LAB291;

LAB293:    *((unsigned int *)t7) = 1;
    goto LAB296;

LAB295:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB296;

LAB297:    t19 = (t1 + 7128);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t41 = (t34 + 4);
    t47 = (t40 + 4);
    t22 = *((unsigned int *)t34);
    t23 = *((unsigned int *)t40);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t41);
    t26 = *((unsigned int *)t47);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t41);
    t30 = *((unsigned int *)t47);
    t31 = (t29 | t30);
    t35 = (~(t31));
    t36 = (t28 & t35);
    if (t36 != 0)
        goto LAB303;

LAB300:    if (t31 != 0)
        goto LAB302;

LAB301:    *((unsigned int *)t17) = 1;

LAB303:    memset(t33, 0, 8);
    t49 = (t17 + 4);
    t37 = *((unsigned int *)t49);
    t38 = (~(t37));
    t39 = *((unsigned int *)t17);
    t42 = (t39 & t38);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB304;

LAB305:    if (*((unsigned int *)t49) != 0)
        goto LAB306;

LAB307:    t44 = *((unsigned int *)t7);
    t45 = *((unsigned int *)t33);
    t52 = (t44 & t45);
    *((unsigned int *)t46) = t52;
    t51 = (t7 + 4);
    t58 = (t33 + 4);
    t60 = (t46 + 4);
    t53 = *((unsigned int *)t51);
    t54 = *((unsigned int *)t58);
    t55 = (t53 | t54);
    *((unsigned int *)t60) = t55;
    t56 = *((unsigned int *)t60);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB308;

LAB309:
LAB310:    goto LAB299;

LAB302:    t48 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB303;

LAB304:    *((unsigned int *)t33) = 1;
    goto LAB307;

LAB306:    t50 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB307;

LAB308:    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t60);
    *((unsigned int *)t46) = (t62 | t63);
    t61 = (t7 + 4);
    t74 = (t33 + 4);
    t64 = *((unsigned int *)t7);
    t65 = (~(t64));
    t66 = *((unsigned int *)t61);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (~(t68));
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t102 = (t65 & t67);
    t106 = (t69 & t71);
    t72 = (~(t102));
    t73 = (~(t106));
    t77 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t77 & t72);
    t78 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t78 & t73);
    t79 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t79 & t72);
    t80 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t80 & t73);
    goto LAB310;

LAB311:    xsi_set_current_line(284, ng0);

LAB314:    xsi_set_current_line(285, ng0);
    t82 = ((char*)((ng5)));
    t87 = (t1 + 7128);
    xsi_vlogvar_assign_value(t87, t82, 0, 0, 1);
    xsi_set_current_line(286, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(287, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB313;

LAB317:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB318;

LAB319:    xsi_set_current_line(292, ng0);

LAB322:    xsi_set_current_line(293, ng0);
    t32 = (t1 + 9368);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t40));
    t41 = (t17 + 4);
    *((int *)t41) = 0;
    t47 = (t1 + 9688);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 32);
    xsi_set_current_line(294, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng31)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB326;

LAB323:    if (t23 != 0)
        goto LAB325;

LAB324:    *((unsigned int *)t7) = 1;

LAB326:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB327;

LAB328:    xsi_set_current_line(318, ng0);

LAB405:    xsi_set_current_line(319, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(320, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(321, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(322, ng0);
    goto LAB102;

LAB325:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB326;

LAB327:    xsi_set_current_line(295, ng0);

LAB330:    xsi_set_current_line(297, ng0);
    t32 = (t1 + 9368);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t40));
    t41 = (t17 + 4);
    *((int *)t41) = 0;
    t47 = (t1 + 9688);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 32);
    xsi_set_current_line(299, ng0);

LAB331:    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng24)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB333;

LAB332:    if (t23 != 0)
        goto LAB334;

LAB335:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB336;

LAB337:    if (*((unsigned int *)t19) != 0)
        goto LAB338;

LAB339:    t34 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t34);
    t36 = (t31 || t35);
    if (t36 > 0)
        goto LAB340;

LAB341:    memcpy(t59, t17, 8);

LAB342:    t88 = (t59 + 4);
    t100 = *((unsigned int *)t88);
    t101 = (~(t100));
    t103 = *((unsigned int *)t59);
    t104 = (t103 & t101);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB354;

LAB355:    xsi_set_current_line(305, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng24)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB360;

LAB357:    if (t23 != 0)
        goto LAB359;

LAB358:    *((unsigned int *)t7) = 1;

LAB360:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB361;

LAB362:    if (*((unsigned int *)t19) != 0)
        goto LAB363;

LAB364:    t34 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = (!(t31));
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB365;

LAB366:    memcpy(t59, t17, 8);

LAB367:    t88 = (t59 + 4);
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t96);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB379;

LAB380:
LAB381:
LAB329:    goto LAB321;

LAB333:    *((unsigned int *)t7) = 1;
    goto LAB335;

LAB334:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB335;

LAB336:    *((unsigned int *)t17) = 1;
    goto LAB339;

LAB338:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB339;

LAB340:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng25)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    t50 = (t48 + 4);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t48);
    t39 = (t37 ^ t38);
    t42 = *((unsigned int *)t49);
    t43 = *((unsigned int *)t50);
    t44 = (t42 ^ t43);
    t45 = (t39 | t44);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t45 & t55);
    if (t56 != 0)
        goto LAB344;

LAB343:    if (t54 != 0)
        goto LAB345;

LAB346:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t57 = *((unsigned int *)t58);
    t62 = (~(t57));
    t63 = *((unsigned int *)t33);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB347;

LAB348:    if (*((unsigned int *)t58) != 0)
        goto LAB349;

LAB350:    t66 = *((unsigned int *)t17);
    t67 = *((unsigned int *)t46);
    t68 = (t66 & t67);
    *((unsigned int *)t59) = t68;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t69 = *((unsigned int *)t61);
    t70 = *((unsigned int *)t74);
    t71 = (t69 | t70);
    *((unsigned int *)t76) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB351;

LAB352:
LAB353:    goto LAB342;

LAB344:    *((unsigned int *)t33) = 1;
    goto LAB346;

LAB345:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB346;

LAB347:    *((unsigned int *)t46) = 1;
    goto LAB350;

LAB349:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB350;

LAB351:    t77 = *((unsigned int *)t59);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t77 | t78);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t79 = *((unsigned int *)t17);
    t80 = (~(t79));
    t81 = *((unsigned int *)t82);
    t84 = (~(t81));
    t85 = *((unsigned int *)t46);
    t86 = (~(t85));
    t90 = *((unsigned int *)t87);
    t91 = (~(t90));
    t102 = (t80 & t84);
    t106 = (t86 & t91);
    t92 = (~(t102));
    t93 = (~(t106));
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t95 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t95 & t93);
    t96 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t96 & t92);
    t99 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t99 & t93);
    goto LAB353;

LAB354:    xsi_set_current_line(300, ng0);

LAB356:    xsi_set_current_line(301, ng0);
    t89 = (t1 + 9368);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    *((int *)t75) = xsi_vlogfile_fgetc(*((unsigned int *)t98));
    t111 = (t75 + 4);
    *((int *)t111) = 0;
    t117 = (t1 + 9688);
    xsi_vlogvar_assign_value(t117, t75, 0, 0, 32);
    goto LAB331;

LAB359:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB360;

LAB361:    *((unsigned int *)t17) = 1;
    goto LAB364;

LAB363:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB364;

LAB365:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng25)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    t50 = (t48 + 4);
    t38 = *((unsigned int *)t47);
    t39 = *((unsigned int *)t48);
    t42 = (t38 ^ t39);
    t43 = *((unsigned int *)t49);
    t44 = *((unsigned int *)t50);
    t45 = (t43 ^ t44);
    t52 = (t42 | t45);
    t53 = *((unsigned int *)t49);
    t54 = *((unsigned int *)t50);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB371;

LAB368:    if (t55 != 0)
        goto LAB370;

LAB369:    *((unsigned int *)t33) = 1;

LAB371:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB372;

LAB373:    if (*((unsigned int *)t58) != 0)
        goto LAB374;

LAB375:    t67 = *((unsigned int *)t17);
    t68 = *((unsigned int *)t46);
    t69 = (t67 | t68);
    *((unsigned int *)t59) = t69;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t74);
    t72 = (t70 | t71);
    *((unsigned int *)t76) = t72;
    t73 = *((unsigned int *)t76);
    t77 = (t73 != 0);
    if (t77 == 1)
        goto LAB376;

LAB377:
LAB378:    goto LAB367;

LAB370:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB371;

LAB372:    *((unsigned int *)t46) = 1;
    goto LAB375;

LAB374:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB375;

LAB376:    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t78 | t79);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t80 = *((unsigned int *)t82);
    t81 = (~(t80));
    t84 = *((unsigned int *)t17);
    t102 = (t84 & t81);
    t85 = *((unsigned int *)t87);
    t86 = (~(t85));
    t90 = *((unsigned int *)t46);
    t106 = (t90 & t86);
    t91 = (~(t102));
    t92 = (~(t106));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t91);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    goto LAB378;

LAB379:    xsi_set_current_line(306, ng0);

LAB382:    xsi_set_current_line(307, ng0);
    t89 = (t1 + 12568);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng5)));
    memset(t75, 0, 8);
    xsi_vlog_signed_add(t75, 32, t98, 32, t111, 32);
    t117 = (t1 + 12568);
    xsi_vlogvar_assign_value(t117, t75, 0, 0, 32);
    xsi_set_current_line(309, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng26)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    memset(t7, 0, 8);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB383;

LAB384:    if (*((unsigned int *)t9) != 0)
        goto LAB385;

LAB386:    t18 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t18);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB387;

LAB388:    memcpy(t46, t7, 8);

LAB389:    t76 = (t46 + 4);
    t81 = *((unsigned int *)t76);
    t84 = (~(t81));
    t85 = *((unsigned int *)t46);
    t86 = (t85 & t84);
    t90 = (t86 != 0);
    if (t90 > 0)
        goto LAB401;

LAB402:
LAB403:    goto LAB381;

LAB383:    *((unsigned int *)t7) = 1;
    goto LAB386;

LAB385:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB386;

LAB387:    t19 = (t1 + 7128);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t41 = (t34 + 4);
    t47 = (t40 + 4);
    t22 = *((unsigned int *)t34);
    t23 = *((unsigned int *)t40);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t41);
    t26 = *((unsigned int *)t47);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t41);
    t30 = *((unsigned int *)t47);
    t31 = (t29 | t30);
    t35 = (~(t31));
    t36 = (t28 & t35);
    if (t36 != 0)
        goto LAB393;

LAB390:    if (t31 != 0)
        goto LAB392;

LAB391:    *((unsigned int *)t17) = 1;

LAB393:    memset(t33, 0, 8);
    t49 = (t17 + 4);
    t37 = *((unsigned int *)t49);
    t38 = (~(t37));
    t39 = *((unsigned int *)t17);
    t42 = (t39 & t38);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB394;

LAB395:    if (*((unsigned int *)t49) != 0)
        goto LAB396;

LAB397:    t44 = *((unsigned int *)t7);
    t45 = *((unsigned int *)t33);
    t52 = (t44 & t45);
    *((unsigned int *)t46) = t52;
    t51 = (t7 + 4);
    t58 = (t33 + 4);
    t60 = (t46 + 4);
    t53 = *((unsigned int *)t51);
    t54 = *((unsigned int *)t58);
    t55 = (t53 | t54);
    *((unsigned int *)t60) = t55;
    t56 = *((unsigned int *)t60);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB398;

LAB399:
LAB400:    goto LAB389;

LAB392:    t48 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB393;

LAB394:    *((unsigned int *)t33) = 1;
    goto LAB397;

LAB396:    t50 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB397;

LAB398:    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t60);
    *((unsigned int *)t46) = (t62 | t63);
    t61 = (t7 + 4);
    t74 = (t33 + 4);
    t64 = *((unsigned int *)t7);
    t65 = (~(t64));
    t66 = *((unsigned int *)t61);
    t67 = (~(t66));
    t68 = *((unsigned int *)t33);
    t69 = (~(t68));
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t102 = (t65 & t67);
    t106 = (t69 & t71);
    t72 = (~(t102));
    t73 = (~(t106));
    t77 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t77 & t72);
    t78 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t78 & t73);
    t79 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t79 & t72);
    t80 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t80 & t73);
    goto LAB400;

LAB401:    xsi_set_current_line(310, ng0);

LAB404:    xsi_set_current_line(311, ng0);
    t82 = ((char*)((ng5)));
    t87 = (t1 + 7128);
    xsi_vlogvar_assign_value(t87, t82, 0, 0, 1);
    xsi_set_current_line(312, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(313, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB403;

LAB406:    goto LAB329;

LAB409:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB410;

LAB411:    xsi_set_current_line(326, ng0);

LAB414:    xsi_set_current_line(327, ng0);
    t32 = (t1 + 4568);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng33)));
    xsi_vlog_unsigned_equal(t145, 2048, t40, 2048, t41, 2048);
    t47 = (t145 + 4);
    t31 = *((unsigned int *)t47);
    t35 = (~(t31));
    t36 = *((unsigned int *)t145);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB415;

LAB416:    xsi_set_current_line(340, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng35)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB428;

LAB429:    xsi_set_current_line(345, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng36)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB432;

LAB433:    xsi_set_current_line(350, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng37)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB436;

LAB437:    xsi_set_current_line(356, ng0);

LAB440:    xsi_set_current_line(357, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(358, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 4568);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    t34 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng38, 4, t34, (char)118, t6, 2048, (char)119, t16, 32, (char)118, t32, 2048);

LAB438:
LAB434:
LAB430:
LAB417:    goto LAB413;

LAB415:    xsi_set_current_line(328, ng0);

LAB418:    xsi_set_current_line(329, ng0);
    t48 = (t1 + 6488);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t58 = (t50 + 4);
    t60 = (t51 + 4);
    t39 = *((unsigned int *)t50);
    t42 = *((unsigned int *)t51);
    t43 = (t39 ^ t42);
    t44 = *((unsigned int *)t58);
    t45 = *((unsigned int *)t60);
    t52 = (t44 ^ t45);
    t53 = (t43 | t52);
    t54 = *((unsigned int *)t58);
    t55 = *((unsigned int *)t60);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t62 = (t53 & t57);
    if (t62 != 0)
        goto LAB422;

LAB419:    if (t56 != 0)
        goto LAB421;

LAB420:    *((unsigned int *)t17) = 1;

LAB422:    t74 = (t17 + 4);
    t63 = *((unsigned int *)t74);
    t64 = (~(t63));
    t65 = *((unsigned int *)t17);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB423;

LAB424:    xsi_set_current_line(335, ng0);

LAB427:    xsi_set_current_line(336, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(337, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng34, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);

LAB425:    goto LAB417;

LAB421:    t61 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB422;

LAB423:    xsi_set_current_line(330, ng0);

LAB426:    xsi_set_current_line(331, ng0);
    t76 = ((char*)((ng5)));
    t82 = (t1 + 5848);
    xsi_vlogvar_assign_value(t82, t76, 0, 0, 1);
    xsi_set_current_line(332, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB425;

LAB428:    xsi_set_current_line(341, ng0);

LAB431:    xsi_set_current_line(342, ng0);
    t16 = ((char*)((ng5)));
    t18 = (t1 + 6008);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 1);
    xsi_set_current_line(343, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB430;

LAB432:    xsi_set_current_line(346, ng0);

LAB435:    xsi_set_current_line(347, ng0);
    t16 = ((char*)((ng5)));
    t18 = (t1 + 6168);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 1);
    xsi_set_current_line(348, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB434;

LAB436:    xsi_set_current_line(351, ng0);

LAB439:    xsi_set_current_line(352, ng0);
    t16 = ((char*)((ng5)));
    t18 = (t1 + 6328);
    xsi_vlogvar_assign_value(t18, t16, 0, 0, 1);
    xsi_set_current_line(353, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB438;

LAB443:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB444;

LAB445:    xsi_set_current_line(362, ng0);

LAB448:    xsi_set_current_line(363, ng0);
    t32 = (t1 + 7128);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    memset(t17, 0, 8);
    t41 = (t40 + 4);
    t31 = *((unsigned int *)t41);
    t35 = (~(t31));
    t36 = *((unsigned int *)t40);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB452;

LAB450:    if (*((unsigned int *)t41) == 0)
        goto LAB449;

LAB451:    t47 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t47) = 1;

LAB452:    t48 = (t17 + 4);
    t39 = *((unsigned int *)t48);
    t42 = (~(t39));
    t43 = *((unsigned int *)t17);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB453;

LAB454:    xsi_set_current_line(368, ng0);
    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB460;

LAB457:    if (t23 != 0)
        goto LAB459;

LAB458:    *((unsigned int *)t7) = 1;

LAB460:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB461;

LAB462:
LAB463:
LAB455:    xsi_set_current_line(373, ng0);

LAB465:    xsi_set_current_line(374, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(375, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(376, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB447;

LAB449:    *((unsigned int *)t17) = 1;
    goto LAB452;

LAB453:    xsi_set_current_line(364, ng0);

LAB456:    xsi_set_current_line(365, ng0);
    t49 = ((char*)((ng5)));
    t50 = (t1 + 8408);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 1);
    xsi_set_current_line(366, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    goto LAB455;

LAB459:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB460;

LAB461:    xsi_set_current_line(369, ng0);

LAB464:    xsi_set_current_line(370, ng0);
    t32 = ((char*)((ng5)));
    t34 = (t1 + 8408);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    xsi_set_current_line(371, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    goto LAB463;

LAB468:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB469;

LAB470:    xsi_set_current_line(380, ng0);

LAB473:    xsi_set_current_line(381, ng0);
    t32 = (t1 + 9368);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t40));
    t41 = (t17 + 4);
    *((int *)t41) = 0;
    t47 = (t1 + 9688);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 32);
    xsi_set_current_line(382, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng41)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB477;

LAB474:    if (t23 != 0)
        goto LAB476;

LAB475:    *((unsigned int *)t7) = 1;

LAB477:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB478;

LAB479:    xsi_set_current_line(400, ng0);

LAB492:    xsi_set_current_line(401, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(402, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(403, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(404, ng0);
    goto LAB102;

LAB476:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB477;

LAB478:    xsi_set_current_line(383, ng0);

LAB481:    xsi_set_current_line(384, ng0);
    t32 = (t1 + 7928);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    t48 = (t41 + 4);
    t31 = *((unsigned int *)t40);
    t35 = *((unsigned int *)t41);
    t36 = (t31 ^ t35);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t48);
    t39 = (t37 ^ t38);
    t42 = (t36 | t39);
    t43 = *((unsigned int *)t47);
    t44 = *((unsigned int *)t48);
    t45 = (t43 | t44);
    t52 = (~(t45));
    t53 = (t42 & t52);
    if (t53 != 0)
        goto LAB485;

LAB482:    if (t45 != 0)
        goto LAB484;

LAB483:    *((unsigned int *)t17) = 1;

LAB485:    t50 = (t17 + 4);
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t17);
    t57 = (t56 & t55);
    t62 = (t57 != 0);
    if (t62 > 0)
        goto LAB486;

LAB487:    xsi_set_current_line(392, ng0);

LAB490:    xsi_set_current_line(393, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(394, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(395, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(396, ng0);
    goto LAB102;

LAB480:    goto LAB472;

LAB484:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB485;

LAB486:    xsi_set_current_line(385, ng0);

LAB489:    xsi_set_current_line(386, ng0);
    t51 = (t1 + 11128);
    t58 = (t51 + 56U);
    t60 = *((char **)t58);
    t61 = (t1 + 12248);
    xsi_vlogvar_assign_value(t61, t60, 0, 0, 32);
    xsi_set_current_line(387, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(388, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(389, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB488:    goto LAB480;

LAB491:    goto LAB488;

LAB493:    goto LAB480;

LAB496:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB497;

LAB498:    xsi_set_current_line(408, ng0);

LAB501:    xsi_set_current_line(409, ng0);
    t32 = ((char*)((ng5)));
    t34 = (t1 + 7928);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    goto LAB500;

LAB504:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB505;

LAB506:    xsi_set_current_line(412, ng0);

LAB509:    xsi_set_current_line(413, ng0);
    t32 = (t1 + 8088);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    t48 = (t41 + 4);
    t31 = *((unsigned int *)t40);
    t35 = *((unsigned int *)t41);
    t36 = (t31 ^ t35);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t48);
    t39 = (t37 ^ t38);
    t42 = (t36 | t39);
    t43 = *((unsigned int *)t47);
    t44 = *((unsigned int *)t48);
    t45 = (t43 | t44);
    t52 = (~(t45));
    t53 = (t42 & t52);
    if (t53 != 0)
        goto LAB513;

LAB510:    if (t45 != 0)
        goto LAB512;

LAB511:    *((unsigned int *)t17) = 1;

LAB513:    t50 = (t17 + 4);
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t17);
    t57 = (t56 & t55);
    t62 = (t57 != 0);
    if (t62 > 0)
        goto LAB514;

LAB515:    xsi_set_current_line(420, ng0);

LAB518:    xsi_set_current_line(421, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(422, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(423, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(424, ng0);
    goto LAB102;

LAB512:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB513;

LAB514:    xsi_set_current_line(414, ng0);

LAB517:    xsi_set_current_line(415, ng0);
    t51 = (t1 + 11128);
    t58 = (t51 + 56U);
    t60 = *((char **)t58);
    t61 = (t1 + 12408);
    xsi_vlogvar_assign_value(t61, t60, 0, 0, 32);
    xsi_set_current_line(416, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(417, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB516:    goto LAB508;

LAB519:    goto LAB516;

LAB522:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB523;

LAB524:    xsi_set_current_line(428, ng0);

LAB527:    xsi_set_current_line(429, ng0);
    t32 = (t1 + 5848);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    t48 = (t41 + 4);
    t31 = *((unsigned int *)t40);
    t35 = *((unsigned int *)t41);
    t36 = (t31 ^ t35);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t48);
    t39 = (t37 ^ t38);
    t42 = (t36 | t39);
    t43 = *((unsigned int *)t47);
    t44 = *((unsigned int *)t48);
    t45 = (t43 | t44);
    t52 = (~(t45));
    t53 = (t42 & t52);
    if (t53 != 0)
        goto LAB531;

LAB528:    if (t45 != 0)
        goto LAB530;

LAB529:    *((unsigned int *)t17) = 1;

LAB531:    t50 = (t17 + 4);
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t17);
    t57 = (t56 & t55);
    t62 = (t57 != 0);
    if (t62 > 0)
        goto LAB532;

LAB533:    xsi_set_current_line(436, ng0);
    t4 = (t1 + 6008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB539;

LAB536:    if (t23 != 0)
        goto LAB538;

LAB537:    *((unsigned int *)t7) = 1;

LAB539:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB540;

LAB541:    xsi_set_current_line(443, ng0);
    t4 = (t1 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB547;

LAB544:    if (t23 != 0)
        goto LAB546;

LAB545:    *((unsigned int *)t7) = 1;

LAB547:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB548;

LAB549:    xsi_set_current_line(460, ng0);
    t4 = (t1 + 6328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB616;

LAB613:    if (t23 != 0)
        goto LAB615;

LAB614:    *((unsigned int *)t7) = 1;

LAB616:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB617;

LAB618:    xsi_set_current_line(477, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng52)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB682;

LAB683:    xsi_set_current_line(490, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB698;

LAB695:    if (t23 != 0)
        goto LAB697;

LAB696:    *((unsigned int *)t7) = 1;

LAB698:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB699;

LAB700:    xsi_set_current_line(548, ng0);

LAB740:    xsi_set_current_line(549, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(550, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng57, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);

LAB701:
LAB684:
LAB619:
LAB550:
LAB542:
LAB534:    goto LAB526;

LAB530:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB531;

LAB532:    xsi_set_current_line(430, ng0);

LAB535:    xsi_set_current_line(431, ng0);
    t51 = ((char*)((ng5)));
    t58 = (t1 + 6488);
    xsi_vlogvar_assign_value(t58, t51, 0, 0, 1);
    xsi_set_current_line(432, ng0);
    t4 = (t1 + 9208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 8888);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(433, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(434, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB534;

LAB538:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB539;

LAB540:    xsi_set_current_line(437, ng0);

LAB543:    xsi_set_current_line(438, ng0);
    t32 = ((char*)((ng5)));
    t34 = (t1 + 6648);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    xsi_set_current_line(439, ng0);
    t4 = (t1 + 9208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 9048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(440, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(441, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB542;

LAB546:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB547;

LAB548:    xsi_set_current_line(444, ng0);

LAB551:    xsi_set_current_line(445, ng0);
    t32 = ((char*)((ng5)));
    t34 = (t1 + 6808);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    xsi_set_current_line(446, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(448, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng45)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    memset(t7, 0, 8);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB552;

LAB553:    if (*((unsigned int *)t9) != 0)
        goto LAB554;

LAB555:    t18 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t20 = (!(t15));
    t21 = *((unsigned int *)t18);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB556;

LAB557:    memcpy(t33, t7, 8);

LAB558:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (~(t63));
    t65 = *((unsigned int *)t33);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB566;

LAB567:    if (*((unsigned int *)t60) != 0)
        goto LAB568;

LAB569:    t74 = (t46 + 4);
    t68 = *((unsigned int *)t46);
    t69 = (!(t68));
    t70 = *((unsigned int *)t74);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB570;

LAB571:    memcpy(t75, t46, 8);

LAB572:    memset(t83, 0, 8);
    t120 = (t75 + 4);
    t109 = *((unsigned int *)t120);
    t110 = (~(t109));
    t112 = *((unsigned int *)t75);
    t113 = (t112 & t110);
    t114 = (t113 & 1U);
    if (t114 != 0)
        goto LAB580;

LAB581:    if (*((unsigned int *)t120) != 0)
        goto LAB582;

LAB583:    t125 = (t83 + 4);
    t115 = *((unsigned int *)t83);
    t116 = (!(t115));
    t128 = *((unsigned int *)t125);
    t131 = (t116 || t128);
    if (t131 > 0)
        goto LAB584;

LAB585:    memcpy(t122, t83, 8);

LAB586:    memset(t123, 0, 8);
    t184 = (t122 + 4);
    t174 = *((unsigned int *)t184);
    t175 = (~(t174));
    t176 = *((unsigned int *)t122);
    t177 = (t176 & t175);
    t178 = (t177 & 1U);
    if (t178 != 0)
        goto LAB594;

LAB595:    if (*((unsigned int *)t184) != 0)
        goto LAB596;

LAB597:    t191 = (t123 + 4);
    t179 = *((unsigned int *)t123);
    t180 = (!(t179));
    t181 = *((unsigned int *)t191);
    t182 = (t180 || t181);
    if (t182 > 0)
        goto LAB598;

LAB599:    memcpy(t203, t123, 8);

LAB600:    t228 = (t203 + 4);
    t229 = *((unsigned int *)t228);
    t230 = (~(t229));
    t231 = *((unsigned int *)t203);
    t232 = (t231 & t230);
    t233 = (t232 != 0);
    if (t233 > 0)
        goto LAB608;

LAB609:    xsi_set_current_line(454, ng0);

LAB612:    xsi_set_current_line(455, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(456, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 4568);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    t34 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng50, 4, t34, (char)118, t6, 2048, (char)119, t16, 32, (char)118, t32, 2048);

LAB610:    xsi_set_current_line(458, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB550;

LAB552:    *((unsigned int *)t7) = 1;
    goto LAB555;

LAB554:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB555;

LAB556:    t19 = (t1 + 4568);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = ((char*)((ng46)));
    xsi_vlog_unsigned_equal(t192, 2048, t34, 2048, t40, 2048);
    memset(t17, 0, 8);
    t41 = (t192 + 4);
    t23 = *((unsigned int *)t41);
    t24 = (~(t23));
    t25 = *((unsigned int *)t192);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB559;

LAB560:    if (*((unsigned int *)t41) != 0)
        goto LAB561;

LAB562:    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t17);
    t30 = (t28 | t29);
    *((unsigned int *)t33) = t30;
    t48 = (t7 + 4);
    t49 = (t17 + 4);
    t50 = (t33 + 4);
    t31 = *((unsigned int *)t48);
    t35 = *((unsigned int *)t49);
    t36 = (t31 | t35);
    *((unsigned int *)t50) = t36;
    t37 = *((unsigned int *)t50);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB563;

LAB564:
LAB565:    goto LAB558;

LAB559:    *((unsigned int *)t17) = 1;
    goto LAB562;

LAB561:    t47 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB562;

LAB563:    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t50);
    *((unsigned int *)t33) = (t39 | t42);
    t51 = (t7 + 4);
    t58 = (t17 + 4);
    t43 = *((unsigned int *)t51);
    t44 = (~(t43));
    t45 = *((unsigned int *)t7);
    t102 = (t45 & t44);
    t52 = *((unsigned int *)t58);
    t53 = (~(t52));
    t54 = *((unsigned int *)t17);
    t106 = (t54 & t53);
    t55 = (~(t102));
    t56 = (~(t106));
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & t55);
    t62 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t62 & t56);
    goto LAB565;

LAB566:    *((unsigned int *)t46) = 1;
    goto LAB569;

LAB568:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB569;

LAB570:    t76 = (t1 + 4568);
    t82 = (t76 + 56U);
    t87 = *((char **)t82);
    t88 = ((char*)((ng47)));
    xsi_vlog_unsigned_equal(t193, 2048, t87, 2048, t88, 2048);
    memset(t59, 0, 8);
    t89 = (t193 + 4);
    t72 = *((unsigned int *)t89);
    t73 = (~(t72));
    t77 = *((unsigned int *)t193);
    t78 = (t77 & t73);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB573;

LAB574:    if (*((unsigned int *)t89) != 0)
        goto LAB575;

LAB576:    t80 = *((unsigned int *)t46);
    t81 = *((unsigned int *)t59);
    t84 = (t80 | t81);
    *((unsigned int *)t75) = t84;
    t98 = (t46 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t85 = *((unsigned int *)t98);
    t86 = *((unsigned int *)t111);
    t90 = (t85 | t86);
    *((unsigned int *)t117) = t90;
    t91 = *((unsigned int *)t117);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB577;

LAB578:
LAB579:    goto LAB572;

LAB573:    *((unsigned int *)t59) = 1;
    goto LAB576;

LAB575:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB576;

LAB577:    t93 = *((unsigned int *)t75);
    t94 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t93 | t94);
    t118 = (t46 + 4);
    t119 = (t59 + 4);
    t95 = *((unsigned int *)t118);
    t96 = (~(t95));
    t99 = *((unsigned int *)t46);
    t129 = (t99 & t96);
    t100 = *((unsigned int *)t119);
    t101 = (~(t100));
    t103 = *((unsigned int *)t59);
    t132 = (t103 & t101);
    t104 = (~(t129));
    t105 = (~(t132));
    t107 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t107 & t104);
    t108 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t108 & t105);
    goto LAB579;

LAB580:    *((unsigned int *)t83) = 1;
    goto LAB583;

LAB582:    t124 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB583;

LAB584:    t126 = (t1 + 4568);
    t127 = (t126 + 56U);
    t130 = *((char **)t127);
    t134 = ((char*)((ng48)));
    xsi_vlog_unsigned_equal(t194, 2048, t130, 2048, t134, 2048);
    memset(t121, 0, 8);
    t148 = (t194 + 4);
    t135 = *((unsigned int *)t148);
    t138 = (~(t135));
    t140 = *((unsigned int *)t194);
    t141 = (t140 & t138);
    t146 = (t141 & 1U);
    if (t146 != 0)
        goto LAB587;

LAB588:    if (*((unsigned int *)t148) != 0)
        goto LAB589;

LAB590:    t147 = *((unsigned int *)t83);
    t149 = *((unsigned int *)t121);
    t150 = (t147 | t149);
    *((unsigned int *)t122) = t150;
    t158 = (t83 + 4);
    t159 = (t121 + 4);
    t160 = (t122 + 4);
    t151 = *((unsigned int *)t158);
    t152 = *((unsigned int *)t159);
    t153 = (t151 | t152);
    *((unsigned int *)t160) = t153;
    t155 = *((unsigned int *)t160);
    t156 = (t155 != 0);
    if (t156 == 1)
        goto LAB591;

LAB592:
LAB593:    goto LAB586;

LAB587:    *((unsigned int *)t121) = 1;
    goto LAB590;

LAB589:    t154 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB590;

LAB591:    t157 = *((unsigned int *)t122);
    t161 = *((unsigned int *)t160);
    *((unsigned int *)t122) = (t157 | t161);
    t168 = (t83 + 4);
    t169 = (t121 + 4);
    t162 = *((unsigned int *)t168);
    t163 = (~(t162));
    t164 = *((unsigned int *)t83);
    t133 = (t164 & t163);
    t165 = *((unsigned int *)t169);
    t166 = (~(t165));
    t167 = *((unsigned int *)t121);
    t136 = (t167 & t166);
    t170 = (~(t133));
    t171 = (~(t136));
    t172 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t172 & t170);
    t173 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t173 & t171);
    goto LAB593;

LAB594:    *((unsigned int *)t123) = 1;
    goto LAB597;

LAB596:    t190 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB597;

LAB598:    t195 = (t1 + 4568);
    t196 = (t195 + 56U);
    t197 = *((char **)t196);
    t198 = ((char*)((ng49)));
    xsi_vlog_unsigned_equal(t199, 2048, t197, 2048, t198, 2048);
    memset(t200, 0, 8);
    t201 = (t199 + 4);
    t183 = *((unsigned int *)t201);
    t185 = (~(t183));
    t186 = *((unsigned int *)t199);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB601;

LAB602:    if (*((unsigned int *)t201) != 0)
        goto LAB603;

LAB604:    t189 = *((unsigned int *)t123);
    t204 = *((unsigned int *)t200);
    t205 = (t189 | t204);
    *((unsigned int *)t203) = t205;
    t206 = (t123 + 4);
    t207 = (t200 + 4);
    t208 = (t203 + 4);
    t209 = *((unsigned int *)t206);
    t210 = *((unsigned int *)t207);
    t211 = (t209 | t210);
    *((unsigned int *)t208) = t211;
    t212 = *((unsigned int *)t208);
    t213 = (t212 != 0);
    if (t213 == 1)
        goto LAB605;

LAB606:
LAB607:    goto LAB600;

LAB601:    *((unsigned int *)t200) = 1;
    goto LAB604;

LAB603:    t202 = (t200 + 4);
    *((unsigned int *)t200) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB604;

LAB605:    t214 = *((unsigned int *)t203);
    t215 = *((unsigned int *)t208);
    *((unsigned int *)t203) = (t214 | t215);
    t216 = (t123 + 4);
    t217 = (t200 + 4);
    t218 = *((unsigned int *)t216);
    t219 = (~(t218));
    t220 = *((unsigned int *)t123);
    t137 = (t220 & t219);
    t221 = *((unsigned int *)t217);
    t222 = (~(t221));
    t223 = *((unsigned int *)t200);
    t139 = (t223 & t222);
    t224 = (~(t137));
    t225 = (~(t139));
    t226 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t226 & t224);
    t227 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t227 & t225);
    goto LAB607;

LAB608:    xsi_set_current_line(450, ng0);

LAB611:    xsi_set_current_line(451, ng0);
    t235 = (t1 + 4568);
    t236 = (t235 + 56U);
    t237 = *((char **)t236);
    memset(t234, 0, 8);
    t238 = (t234 + 4);
    t239 = (t237 + 4);
    t240 = *((unsigned int *)t237);
    t241 = (t240 >> 0);
    *((unsigned int *)t234) = t241;
    t242 = *((unsigned int *)t239);
    t243 = (t242 >> 0);
    *((unsigned int *)t238) = t243;
    t244 = *((unsigned int *)t234);
    *((unsigned int *)t234) = (t244 & 16777215U);
    t245 = *((unsigned int *)t238);
    *((unsigned int *)t238) = (t245 & 16777215U);
    t246 = (t1 + 5688);
    xsi_vlogvar_assign_value(t246, t234, 0, 0, 24);
    goto LAB610;

LAB615:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB616;

LAB617:    xsi_set_current_line(461, ng0);

LAB620:    xsi_set_current_line(462, ng0);
    t32 = ((char*)((ng5)));
    t34 = (t1 + 6968);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    xsi_set_current_line(463, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(465, ng0);
    t4 = (t1 + 4568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng45)));
    xsi_vlog_unsigned_equal(t145, 2048, t6, 2048, t8, 2048);
    memset(t7, 0, 8);
    t9 = (t145 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t145);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB621;

LAB622:    if (*((unsigned int *)t9) != 0)
        goto LAB623;

LAB624:    t18 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t20 = (!(t15));
    t21 = *((unsigned int *)t18);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB625;

LAB626:    memcpy(t33, t7, 8);

LAB627:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (~(t63));
    t65 = *((unsigned int *)t33);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB635;

LAB636:    if (*((unsigned int *)t60) != 0)
        goto LAB637;

LAB638:    t74 = (t46 + 4);
    t68 = *((unsigned int *)t46);
    t69 = (!(t68));
    t70 = *((unsigned int *)t74);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB639;

LAB640:    memcpy(t75, t46, 8);

LAB641:    memset(t83, 0, 8);
    t120 = (t75 + 4);
    t109 = *((unsigned int *)t120);
    t110 = (~(t109));
    t112 = *((unsigned int *)t75);
    t113 = (t112 & t110);
    t114 = (t113 & 1U);
    if (t114 != 0)
        goto LAB649;

LAB650:    if (*((unsigned int *)t120) != 0)
        goto LAB651;

LAB652:    t125 = (t83 + 4);
    t115 = *((unsigned int *)t83);
    t116 = (!(t115));
    t128 = *((unsigned int *)t125);
    t131 = (t116 || t128);
    if (t131 > 0)
        goto LAB653;

LAB654:    memcpy(t122, t83, 8);

LAB655:    memset(t123, 0, 8);
    t184 = (t122 + 4);
    t174 = *((unsigned int *)t184);
    t175 = (~(t174));
    t176 = *((unsigned int *)t122);
    t177 = (t176 & t175);
    t178 = (t177 & 1U);
    if (t178 != 0)
        goto LAB663;

LAB664:    if (*((unsigned int *)t184) != 0)
        goto LAB665;

LAB666:    t191 = (t123 + 4);
    t179 = *((unsigned int *)t123);
    t180 = (!(t179));
    t181 = *((unsigned int *)t191);
    t182 = (t180 || t181);
    if (t182 > 0)
        goto LAB667;

LAB668:    memcpy(t203, t123, 8);

LAB669:    t228 = (t203 + 4);
    t229 = *((unsigned int *)t228);
    t230 = (~(t229));
    t231 = *((unsigned int *)t203);
    t232 = (t231 & t230);
    t233 = (t232 != 0);
    if (t233 > 0)
        goto LAB677;

LAB678:    xsi_set_current_line(471, ng0);

LAB681:    xsi_set_current_line(472, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(473, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 4568);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    t34 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng51, 4, t34, (char)118, t6, 2048, (char)119, t16, 32, (char)118, t32, 2048);

LAB679:    xsi_set_current_line(475, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB619;

LAB621:    *((unsigned int *)t7) = 1;
    goto LAB624;

LAB623:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB624;

LAB625:    t19 = (t1 + 4568);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = ((char*)((ng46)));
    xsi_vlog_unsigned_equal(t192, 2048, t34, 2048, t40, 2048);
    memset(t17, 0, 8);
    t41 = (t192 + 4);
    t23 = *((unsigned int *)t41);
    t24 = (~(t23));
    t25 = *((unsigned int *)t192);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB628;

LAB629:    if (*((unsigned int *)t41) != 0)
        goto LAB630;

LAB631:    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t17);
    t30 = (t28 | t29);
    *((unsigned int *)t33) = t30;
    t48 = (t7 + 4);
    t49 = (t17 + 4);
    t50 = (t33 + 4);
    t31 = *((unsigned int *)t48);
    t35 = *((unsigned int *)t49);
    t36 = (t31 | t35);
    *((unsigned int *)t50) = t36;
    t37 = *((unsigned int *)t50);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB632;

LAB633:
LAB634:    goto LAB627;

LAB628:    *((unsigned int *)t17) = 1;
    goto LAB631;

LAB630:    t47 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB631;

LAB632:    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t50);
    *((unsigned int *)t33) = (t39 | t42);
    t51 = (t7 + 4);
    t58 = (t17 + 4);
    t43 = *((unsigned int *)t51);
    t44 = (~(t43));
    t45 = *((unsigned int *)t7);
    t102 = (t45 & t44);
    t52 = *((unsigned int *)t58);
    t53 = (~(t52));
    t54 = *((unsigned int *)t17);
    t106 = (t54 & t53);
    t55 = (~(t102));
    t56 = (~(t106));
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & t55);
    t62 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t62 & t56);
    goto LAB634;

LAB635:    *((unsigned int *)t46) = 1;
    goto LAB638;

LAB637:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB638;

LAB639:    t76 = (t1 + 4568);
    t82 = (t76 + 56U);
    t87 = *((char **)t82);
    t88 = ((char*)((ng47)));
    xsi_vlog_unsigned_equal(t193, 2048, t87, 2048, t88, 2048);
    memset(t59, 0, 8);
    t89 = (t193 + 4);
    t72 = *((unsigned int *)t89);
    t73 = (~(t72));
    t77 = *((unsigned int *)t193);
    t78 = (t77 & t73);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB642;

LAB643:    if (*((unsigned int *)t89) != 0)
        goto LAB644;

LAB645:    t80 = *((unsigned int *)t46);
    t81 = *((unsigned int *)t59);
    t84 = (t80 | t81);
    *((unsigned int *)t75) = t84;
    t98 = (t46 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t85 = *((unsigned int *)t98);
    t86 = *((unsigned int *)t111);
    t90 = (t85 | t86);
    *((unsigned int *)t117) = t90;
    t91 = *((unsigned int *)t117);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB646;

LAB647:
LAB648:    goto LAB641;

LAB642:    *((unsigned int *)t59) = 1;
    goto LAB645;

LAB644:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB645;

LAB646:    t93 = *((unsigned int *)t75);
    t94 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t93 | t94);
    t118 = (t46 + 4);
    t119 = (t59 + 4);
    t95 = *((unsigned int *)t118);
    t96 = (~(t95));
    t99 = *((unsigned int *)t46);
    t129 = (t99 & t96);
    t100 = *((unsigned int *)t119);
    t101 = (~(t100));
    t103 = *((unsigned int *)t59);
    t132 = (t103 & t101);
    t104 = (~(t129));
    t105 = (~(t132));
    t107 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t107 & t104);
    t108 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t108 & t105);
    goto LAB648;

LAB649:    *((unsigned int *)t83) = 1;
    goto LAB652;

LAB651:    t124 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB652;

LAB653:    t126 = (t1 + 4568);
    t127 = (t126 + 56U);
    t130 = *((char **)t127);
    t134 = ((char*)((ng48)));
    xsi_vlog_unsigned_equal(t194, 2048, t130, 2048, t134, 2048);
    memset(t121, 0, 8);
    t148 = (t194 + 4);
    t135 = *((unsigned int *)t148);
    t138 = (~(t135));
    t140 = *((unsigned int *)t194);
    t141 = (t140 & t138);
    t146 = (t141 & 1U);
    if (t146 != 0)
        goto LAB656;

LAB657:    if (*((unsigned int *)t148) != 0)
        goto LAB658;

LAB659:    t147 = *((unsigned int *)t83);
    t149 = *((unsigned int *)t121);
    t150 = (t147 | t149);
    *((unsigned int *)t122) = t150;
    t158 = (t83 + 4);
    t159 = (t121 + 4);
    t160 = (t122 + 4);
    t151 = *((unsigned int *)t158);
    t152 = *((unsigned int *)t159);
    t153 = (t151 | t152);
    *((unsigned int *)t160) = t153;
    t155 = *((unsigned int *)t160);
    t156 = (t155 != 0);
    if (t156 == 1)
        goto LAB660;

LAB661:
LAB662:    goto LAB655;

LAB656:    *((unsigned int *)t121) = 1;
    goto LAB659;

LAB658:    t154 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB659;

LAB660:    t157 = *((unsigned int *)t122);
    t161 = *((unsigned int *)t160);
    *((unsigned int *)t122) = (t157 | t161);
    t168 = (t83 + 4);
    t169 = (t121 + 4);
    t162 = *((unsigned int *)t168);
    t163 = (~(t162));
    t164 = *((unsigned int *)t83);
    t133 = (t164 & t163);
    t165 = *((unsigned int *)t169);
    t166 = (~(t165));
    t167 = *((unsigned int *)t121);
    t136 = (t167 & t166);
    t170 = (~(t133));
    t171 = (~(t136));
    t172 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t172 & t170);
    t173 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t173 & t171);
    goto LAB662;

LAB663:    *((unsigned int *)t123) = 1;
    goto LAB666;

LAB665:    t190 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB666;

LAB667:    t195 = (t1 + 4568);
    t196 = (t195 + 56U);
    t197 = *((char **)t196);
    t198 = ((char*)((ng49)));
    xsi_vlog_unsigned_equal(t199, 2048, t197, 2048, t198, 2048);
    memset(t200, 0, 8);
    t201 = (t199 + 4);
    t183 = *((unsigned int *)t201);
    t185 = (~(t183));
    t186 = *((unsigned int *)t199);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB670;

LAB671:    if (*((unsigned int *)t201) != 0)
        goto LAB672;

LAB673:    t189 = *((unsigned int *)t123);
    t204 = *((unsigned int *)t200);
    t205 = (t189 | t204);
    *((unsigned int *)t203) = t205;
    t206 = (t123 + 4);
    t207 = (t200 + 4);
    t208 = (t203 + 4);
    t209 = *((unsigned int *)t206);
    t210 = *((unsigned int *)t207);
    t211 = (t209 | t210);
    *((unsigned int *)t208) = t211;
    t212 = *((unsigned int *)t208);
    t213 = (t212 != 0);
    if (t213 == 1)
        goto LAB674;

LAB675:
LAB676:    goto LAB669;

LAB670:    *((unsigned int *)t200) = 1;
    goto LAB673;

LAB672:    t202 = (t200 + 4);
    *((unsigned int *)t200) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB673;

LAB674:    t214 = *((unsigned int *)t203);
    t215 = *((unsigned int *)t208);
    *((unsigned int *)t203) = (t214 | t215);
    t216 = (t123 + 4);
    t217 = (t200 + 4);
    t218 = *((unsigned int *)t216);
    t219 = (~(t218));
    t220 = *((unsigned int *)t123);
    t137 = (t220 & t219);
    t221 = *((unsigned int *)t217);
    t222 = (~(t221));
    t223 = *((unsigned int *)t200);
    t139 = (t223 & t222);
    t224 = (~(t137));
    t225 = (~(t139));
    t226 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t226 & t224);
    t227 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t227 & t225);
    goto LAB676;

LAB677:    xsi_set_current_line(467, ng0);

LAB680:    xsi_set_current_line(468, ng0);
    t235 = (t1 + 4568);
    t236 = (t235 + 56U);
    t237 = *((char **)t236);
    memset(t234, 0, 8);
    t238 = (t234 + 4);
    t239 = (t237 + 4);
    t240 = *((unsigned int *)t237);
    t241 = (t240 >> 0);
    *((unsigned int *)t234) = t241;
    t242 = *((unsigned int *)t239);
    t243 = (t242 >> 0);
    *((unsigned int *)t238) = t243;
    t244 = *((unsigned int *)t234);
    *((unsigned int *)t234) = (t244 & 16777215U);
    t245 = *((unsigned int *)t238);
    *((unsigned int *)t238) = (t245 & 16777215U);
    t246 = (t1 + 5528);
    xsi_vlogvar_assign_value(t246, t234, 0, 0, 24);
    goto LAB679;

LAB682:    xsi_set_current_line(478, ng0);

LAB685:    xsi_set_current_line(479, ng0);
    t16 = (t1 + 7128);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t32 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t34 = (t19 + 4);
    t40 = (t32 + 4);
    t15 = *((unsigned int *)t19);
    t20 = *((unsigned int *)t32);
    t21 = (t15 ^ t20);
    t22 = *((unsigned int *)t34);
    t23 = *((unsigned int *)t40);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t34);
    t27 = *((unsigned int *)t40);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB689;

LAB686:    if (t28 != 0)
        goto LAB688;

LAB687:    *((unsigned int *)t7) = 1;

LAB689:    t47 = (t7 + 4);
    t31 = *((unsigned int *)t47);
    t35 = (~(t31));
    t36 = *((unsigned int *)t7);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB690;

LAB691:    xsi_set_current_line(485, ng0);

LAB694:    xsi_set_current_line(486, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(487, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);

LAB692:    goto LAB684;

LAB688:    t41 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB689;

LAB690:    xsi_set_current_line(480, ng0);

LAB693:    xsi_set_current_line(481, ng0);
    t48 = ((char*)((ng5)));
    t49 = (t1 + 8728);
    xsi_vlogvar_assign_value(t49, t48, 0, 0, 1);
    xsi_set_current_line(482, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    goto LAB692;

LAB697:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB698;

LAB699:    xsi_set_current_line(491, ng0);

LAB702:    xsi_set_current_line(492, ng0);
    t32 = ((char*)((ng5)));
    t34 = (t1 + 7288);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    xsi_set_current_line(493, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(494, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2048);
    xsi_set_current_line(495, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(497, ng0);
    t4 = (t1 + 12248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12408);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    memset(t7, 0, 8);
    xsi_vlog_signed_not_equal(t7, 32, t6, 32, t16, 32);
    t18 = (t7 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB703;

LAB704:    xsi_set_current_line(523, ng0);

LAB721:    xsi_set_current_line(524, ng0);
    t4 = (t1 + 7608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB725;

LAB722:    if (t23 != 0)
        goto LAB724;

LAB723:    *((unsigned int *)t7) = 1;

LAB725:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB726;

LAB727:
LAB728:    xsi_set_current_line(530, ng0);
    xsi_set_current_line(530, ng0);
    t4 = (t1 + 8888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 10008);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);

LAB730:    t4 = (t1 + 10008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB731;

LAB732:    xsi_set_current_line(541, ng0);
    t4 = (t1 + 9528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 280);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng56, 1, t8);
    xsi_set_current_line(542, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(543, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(544, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 4728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 257);

LAB705:    goto LAB701;

LAB703:    xsi_set_current_line(498, ng0);

LAB706:    xsi_set_current_line(499, ng0);
    xsi_set_current_line(499, ng0);
    t19 = (t1 + 12248);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = (t1 + 11128);
    xsi_vlogvar_assign_value(t40, t34, 0, 0, 32);

LAB707:    t4 = (t1 + 11128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12408);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    memset(t7, 0, 8);
    xsi_vlog_signed_leq(t7, 32, t6, 32, t16, 32);
    t18 = (t7 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB708;

LAB709:    xsi_set_current_line(516, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(517, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(518, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(519, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(520, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 4728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 257);
    goto LAB705;

LAB708:    xsi_set_current_line(500, ng0);

LAB710:    xsi_set_current_line(501, ng0);
    t19 = (t1 + 9528);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = (t1 + 11128);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = (t1 + 280);
    xsi_vlogfile_fwrite(*((unsigned int *)t34), 1, 0, 0, ng53, 2, t48, (char)119, t47, 32);
    xsi_set_current_line(503, ng0);
    xsi_set_current_line(503, ng0);
    t4 = (t1 + 8888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 10008);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);

LAB711:    t4 = (t1 + 10008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB712;

LAB713:    xsi_set_current_line(514, ng0);
    t4 = (t1 + 9528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 280);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng56, 1, t8);
    xsi_set_current_line(499, ng0);
    t4 = (t1 + 11128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 11128);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB707;

LAB712:    xsi_set_current_line(504, ng0);

LAB714:    xsi_set_current_line(505, ng0);
    t16 = (t1 + 4728);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t32 = (t1 + 4728);
    t34 = (t32 + 72U);
    t40 = *((char **)t34);
    t41 = (t1 + 10008);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_get_index_select_value(t17, 1, t19, t40, 2, t48, 32, 1);
    t49 = (t1 + 5208);
    t50 = (t1 + 5208);
    t51 = (t50 + 72U);
    t58 = *((char **)t51);
    t60 = (t1 + 10008);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng54)));
    memset(t46, 0, 8);
    xsi_vlog_signed_mod(t46, 32, t74, 32, t76, 32);
    xsi_vlog_generic_convert_bit_index(t33, t58, 2, t46, 32, 1);
    t82 = (t33 + 4);
    t15 = *((unsigned int *)t82);
    t102 = (!(t15));
    if (t102 == 1)
        goto LAB715;

LAB716:    xsi_set_current_line(507, ng0);
    t4 = (t1 + 10008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng54)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t6, 32, t8, 32);
    t9 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t7, 32, t9, 32);
    t16 = (t17 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB717;

LAB718:
LAB719:    xsi_set_current_line(503, ng0);
    t4 = (t1 + 10008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 10008);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB711;

LAB715:    xsi_vlogvar_assign_value(t49, t17, 0, *((unsigned int *)t33), 1);
    goto LAB716;

LAB717:    xsi_set_current_line(508, ng0);

LAB720:    xsi_set_current_line(509, ng0);
    t18 = (t1 + 9528);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    t34 = (t1 + 5208);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    t47 = (t1 + 280);
    xsi_vlogfile_fwrite(*((unsigned int *)t32), 0, 0, 1, ng55, 2, t47, (char)118, t41, 4);
    xsi_set_current_line(510, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB719;

LAB724:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB725;

LAB726:    xsi_set_current_line(525, ng0);

LAB729:    xsi_set_current_line(526, ng0);
    t32 = (t1 + 9528);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = (t1 + 11128);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = (t1 + 280);
    xsi_vlogfile_fwrite(*((unsigned int *)t40), 1, 0, 0, ng53, 2, t49, (char)119, t48, 32);
    xsi_set_current_line(527, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB728;

LAB731:    xsi_set_current_line(531, ng0);

LAB733:    xsi_set_current_line(532, ng0);
    t16 = (t1 + 4728);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t32 = (t1 + 4728);
    t34 = (t32 + 72U);
    t40 = *((char **)t34);
    t41 = (t1 + 10008);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_get_index_select_value(t17, 1, t19, t40, 2, t48, 32, 1);
    t49 = (t1 + 5208);
    t50 = (t1 + 5208);
    t51 = (t50 + 72U);
    t58 = *((char **)t51);
    t60 = (t1 + 10008);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng54)));
    memset(t46, 0, 8);
    xsi_vlog_signed_mod(t46, 32, t74, 32, t76, 32);
    xsi_vlog_generic_convert_bit_index(t33, t58, 2, t46, 32, 1);
    t82 = (t33 + 4);
    t15 = *((unsigned int *)t82);
    t102 = (!(t15));
    if (t102 == 1)
        goto LAB734;

LAB735:    xsi_set_current_line(534, ng0);
    t4 = (t1 + 10008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng54)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t6, 32, t8, 32);
    t9 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t7, 32, t9, 32);
    t16 = (t17 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB736;

LAB737:
LAB738:    xsi_set_current_line(530, ng0);
    t4 = (t1 + 10008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 10008);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB730;

LAB734:    xsi_vlogvar_assign_value(t49, t17, 0, *((unsigned int *)t33), 1);
    goto LAB735;

LAB736:    xsi_set_current_line(535, ng0);

LAB739:    xsi_set_current_line(536, ng0);
    t18 = (t1 + 9528);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    t34 = (t1 + 5208);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    t47 = (t1 + 280);
    xsi_vlogfile_fwrite(*((unsigned int *)t32), 0, 0, 1, ng55, 2, t47, (char)118, t41, 4);
    xsi_set_current_line(537, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 5208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB738;

LAB743:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB744;

LAB745:    *((unsigned int *)t17) = 1;
    goto LAB748;

LAB747:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB748;

LAB749:    t40 = (t1 + 6008);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng5)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    t50 = (t48 + 4);
    t38 = *((unsigned int *)t47);
    t39 = *((unsigned int *)t48);
    t42 = (t38 ^ t39);
    t43 = *((unsigned int *)t49);
    t44 = *((unsigned int *)t50);
    t45 = (t43 ^ t44);
    t52 = (t42 | t45);
    t53 = *((unsigned int *)t49);
    t54 = *((unsigned int *)t50);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB755;

LAB752:    if (t55 != 0)
        goto LAB754;

LAB753:    *((unsigned int *)t33) = 1;

LAB755:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB756;

LAB757:    if (*((unsigned int *)t58) != 0)
        goto LAB758;

LAB759:    t67 = *((unsigned int *)t17);
    t68 = *((unsigned int *)t46);
    t69 = (t67 | t68);
    *((unsigned int *)t59) = t69;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t74);
    t72 = (t70 | t71);
    *((unsigned int *)t76) = t72;
    t73 = *((unsigned int *)t76);
    t77 = (t73 != 0);
    if (t77 == 1)
        goto LAB760;

LAB761:
LAB762:    goto LAB751;

LAB754:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB755;

LAB756:    *((unsigned int *)t46) = 1;
    goto LAB759;

LAB758:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB759;

LAB760:    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t78 | t79);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t80 = *((unsigned int *)t82);
    t81 = (~(t80));
    t84 = *((unsigned int *)t17);
    t102 = (t84 & t81);
    t85 = *((unsigned int *)t87);
    t86 = (~(t85));
    t90 = *((unsigned int *)t46);
    t106 = (t90 & t86);
    t91 = (~(t102));
    t92 = (~(t106));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t91);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    goto LAB762;

LAB763:    xsi_set_current_line(554, ng0);

LAB766:    xsi_set_current_line(555, ng0);
    t89 = (t1 + 9688);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng58)));
    memset(t75, 0, 8);
    t117 = (t98 + 4);
    if (*((unsigned int *)t117) != 0)
        goto LAB768;

LAB767:    t118 = (t111 + 4);
    if (*((unsigned int *)t118) != 0)
        goto LAB768;

LAB771:    if (*((unsigned int *)t98) < *((unsigned int *)t111))
        goto LAB770;

LAB769:    *((unsigned int *)t75) = 1;

LAB770:    memset(t83, 0, 8);
    t120 = (t75 + 4);
    t103 = *((unsigned int *)t120);
    t104 = (~(t103));
    t105 = *((unsigned int *)t75);
    t107 = (t105 & t104);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB772;

LAB773:    if (*((unsigned int *)t120) != 0)
        goto LAB774;

LAB775:    t125 = (t83 + 4);
    t109 = *((unsigned int *)t83);
    t110 = *((unsigned int *)t125);
    t112 = (t109 || t110);
    if (t112 > 0)
        goto LAB776;

LAB777:    memcpy(t123, t83, 8);

LAB778:    t195 = (t123 + 4);
    t172 = *((unsigned int *)t195);
    t173 = (~(t172));
    t174 = *((unsigned int *)t123);
    t175 = (t174 & t173);
    t176 = (t175 != 0);
    if (t176 > 0)
        goto LAB791;

LAB792:    xsi_set_current_line(558, ng0);

LAB794:    xsi_set_current_line(559, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(560, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng61, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);

LAB793:    goto LAB765;

LAB768:    t119 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB770;

LAB772:    *((unsigned int *)t83) = 1;
    goto LAB775;

LAB774:    t124 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB775;

LAB776:    t126 = (t1 + 9688);
    t127 = (t126 + 56U);
    t130 = *((char **)t127);
    t134 = ((char*)((ng59)));
    memset(t121, 0, 8);
    t148 = (t130 + 4);
    if (*((unsigned int *)t148) != 0)
        goto LAB780;

LAB779:    t154 = (t134 + 4);
    if (*((unsigned int *)t154) != 0)
        goto LAB780;

LAB783:    if (*((unsigned int *)t130) > *((unsigned int *)t134))
        goto LAB782;

LAB781:    *((unsigned int *)t121) = 1;

LAB782:    memset(t122, 0, 8);
    t159 = (t121 + 4);
    t113 = *((unsigned int *)t159);
    t114 = (~(t113));
    t115 = *((unsigned int *)t121);
    t116 = (t115 & t114);
    t128 = (t116 & 1U);
    if (t128 != 0)
        goto LAB784;

LAB785:    if (*((unsigned int *)t159) != 0)
        goto LAB786;

LAB787:    t131 = *((unsigned int *)t83);
    t135 = *((unsigned int *)t122);
    t138 = (t131 & t135);
    *((unsigned int *)t123) = t138;
    t168 = (t83 + 4);
    t169 = (t122 + 4);
    t184 = (t123 + 4);
    t140 = *((unsigned int *)t168);
    t141 = *((unsigned int *)t169);
    t146 = (t140 | t141);
    *((unsigned int *)t184) = t146;
    t147 = *((unsigned int *)t184);
    t149 = (t147 != 0);
    if (t149 == 1)
        goto LAB788;

LAB789:
LAB790:    goto LAB778;

LAB780:    t158 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB782;

LAB784:    *((unsigned int *)t122) = 1;
    goto LAB787;

LAB786:    t160 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB787;

LAB788:    t150 = *((unsigned int *)t123);
    t151 = *((unsigned int *)t184);
    *((unsigned int *)t123) = (t150 | t151);
    t190 = (t83 + 4);
    t191 = (t122 + 4);
    t152 = *((unsigned int *)t83);
    t153 = (~(t152));
    t155 = *((unsigned int *)t190);
    t156 = (~(t155));
    t157 = *((unsigned int *)t122);
    t161 = (~(t157));
    t162 = *((unsigned int *)t191);
    t163 = (~(t162));
    t129 = (t153 & t156);
    t132 = (t161 & t163);
    t164 = (~(t129));
    t165 = (~(t132));
    t166 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t166 & t164);
    t167 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t167 & t165);
    t170 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t170 & t164);
    t171 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t171 & t165);
    goto LAB790;

LAB791:    xsi_set_current_line(556, ng0);
    t196 = (t1 + 9208);
    t197 = (t196 + 56U);
    t198 = *((char **)t197);
    t201 = ((char*)((ng24)));
    memset(t200, 0, 8);
    xsi_vlog_unsigned_multiply(t200, 32, t198, 32, t201, 32);
    t202 = (t1 + 9688);
    t206 = (t202 + 56U);
    t207 = *((char **)t206);
    t208 = ((char*)((ng60)));
    memset(t203, 0, 8);
    xsi_vlog_unsigned_minus(t203, 32, t207, 32, t208, 32);
    memset(t234, 0, 8);
    xsi_vlog_unsigned_add(t234, 32, t200, 32, t203, 32);
    t216 = (t1 + 9208);
    xsi_vlogvar_assign_value(t216, t234, 0, 0, 32);
    goto LAB793;

LAB797:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB798;

LAB799:    xsi_set_current_line(564, ng0);

LAB802:    xsi_set_current_line(565, ng0);
    t32 = (t1 + 5528);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng8)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    t48 = (t41 + 4);
    t31 = *((unsigned int *)t40);
    t35 = *((unsigned int *)t41);
    t36 = (t31 ^ t35);
    t37 = *((unsigned int *)t47);
    t38 = *((unsigned int *)t48);
    t39 = (t37 ^ t38);
    t42 = (t36 | t39);
    t43 = *((unsigned int *)t47);
    t44 = *((unsigned int *)t48);
    t45 = (t43 | t44);
    t52 = (~(t45));
    t53 = (t42 & t52);
    if (t53 != 0)
        goto LAB806;

LAB803:    if (t45 != 0)
        goto LAB805;

LAB804:    *((unsigned int *)t17) = 1;

LAB806:    t50 = (t17 + 4);
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t17);
    t57 = (t56 & t55);
    t62 = (t57 != 0);
    if (t62 > 0)
        goto LAB807;

LAB808:    xsi_set_current_line(580, ng0);
    t4 = (t1 + 5528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng68)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB896;

LAB893:    if (t23 != 0)
        goto LAB895;

LAB894:    *((unsigned int *)t7) = 1;

LAB896:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB897;

LAB898:    xsi_set_current_line(591, ng0);
    t4 = (t1 + 5528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng69)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB932;

LAB929:    if (t23 != 0)
        goto LAB931;

LAB930:    *((unsigned int *)t7) = 1;

LAB932:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB933;

LAB934:    xsi_set_current_line(602, ng0);
    t4 = (t1 + 5528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng70)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB968;

LAB965:    if (t23 != 0)
        goto LAB967;

LAB966:    *((unsigned int *)t7) = 1;

LAB968:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB969;

LAB970:    xsi_set_current_line(613, ng0);
    t4 = (t1 + 5528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng73)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1004;

LAB1001:    if (t23 != 0)
        goto LAB1003;

LAB1002:    *((unsigned int *)t7) = 1;

LAB1004:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB1005;

LAB1006:
LAB1007:
LAB971:
LAB935:
LAB899:
LAB809:    xsi_set_current_line(625, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t6, 32, t8, 32);
    memset(t17, 0, 8);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB1037;

LAB1038:    if (*((unsigned int *)t9) != 0)
        goto LAB1039;

LAB1040:    t18 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t18);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB1041;

LAB1042:    memcpy(t59, t17, 8);

LAB1043:    t60 = (t59 + 4);
    t66 = *((unsigned int *)t60);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB1051;

LAB1052:    xsi_set_current_line(628, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 5048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);

LAB1053:    xsi_set_current_line(630, ng0);
    t4 = (t1 + 5048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 4568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    xsi_vlogtype_concat(t247, 2056, 2056, 2U, t16, 2048, t6, 8);
    t18 = (t1 + 4568);
    xsi_vlogvar_assign_value(t18, t247, 0, 0, 2048);
    t19 = (t1 + 5368);
    xsi_vlogvar_assign_value(t19, t247, 2048, 0, 4);
    goto LAB801;

LAB805:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB806;

LAB807:    xsi_set_current_line(566, ng0);

LAB810:    xsi_set_current_line(567, ng0);
    t51 = (t1 + 9688);
    t58 = (t51 + 56U);
    t60 = *((char **)t58);
    t61 = ((char*)((ng58)));
    memset(t33, 0, 8);
    t74 = (t60 + 4);
    if (*((unsigned int *)t74) != 0)
        goto LAB812;

LAB811:    t76 = (t61 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB812;

LAB815:    if (*((unsigned int *)t60) < *((unsigned int *)t61))
        goto LAB814;

LAB813:    *((unsigned int *)t33) = 1;

LAB814:    memset(t46, 0, 8);
    t87 = (t33 + 4);
    t63 = *((unsigned int *)t87);
    t64 = (~(t63));
    t65 = *((unsigned int *)t33);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB816;

LAB817:    if (*((unsigned int *)t87) != 0)
        goto LAB818;

LAB819:    t89 = (t46 + 4);
    t68 = *((unsigned int *)t46);
    t69 = *((unsigned int *)t89);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB820;

LAB821:    memcpy(t83, t46, 8);

LAB822:    t154 = (t83 + 4);
    t113 = *((unsigned int *)t154);
    t114 = (~(t113));
    t115 = *((unsigned int *)t83);
    t116 = (t115 & t114);
    t128 = (t116 != 0);
    if (t128 > 0)
        goto LAB835;

LAB836:    xsi_set_current_line(569, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB839;

LAB838:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB839;

LAB842:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB841;

LAB840:    *((unsigned int *)t7) = 1;

LAB841:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB843;

LAB844:    if (*((unsigned int *)t19) != 0)
        goto LAB845;

LAB846:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB847;

LAB848:    memcpy(t59, t17, 8);

LAB849:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB862;

LAB863:    xsi_set_current_line(571, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB866;

LAB865:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB866;

LAB869:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB868;

LAB867:    *((unsigned int *)t7) = 1;

LAB868:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB870;

LAB871:    if (*((unsigned int *)t19) != 0)
        goto LAB872;

LAB873:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB874;

LAB875:    memcpy(t59, t17, 8);

LAB876:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB889;

LAB890:    xsi_set_current_line(574, ng0);

LAB892:    xsi_set_current_line(575, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB891:
LAB864:
LAB837:    xsi_set_current_line(578, ng0);
    t4 = (t1 + 11128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng67)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t7, 32, t18, 32);
    t19 = (t1 + 11128);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB809;

LAB812:    t82 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB814;

LAB816:    *((unsigned int *)t46) = 1;
    goto LAB819;

LAB818:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB819;

LAB820:    t97 = (t1 + 9688);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng59)));
    memset(t59, 0, 8);
    t118 = (t111 + 4);
    if (*((unsigned int *)t118) != 0)
        goto LAB824;

LAB823:    t119 = (t117 + 4);
    if (*((unsigned int *)t119) != 0)
        goto LAB824;

LAB827:    if (*((unsigned int *)t111) > *((unsigned int *)t117))
        goto LAB826;

LAB825:    *((unsigned int *)t59) = 1;

LAB826:    memset(t75, 0, 8);
    t124 = (t59 + 4);
    t71 = *((unsigned int *)t124);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (t73 & t72);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB828;

LAB829:    if (*((unsigned int *)t124) != 0)
        goto LAB830;

LAB831:    t79 = *((unsigned int *)t46);
    t80 = *((unsigned int *)t75);
    t81 = (t79 & t80);
    *((unsigned int *)t83) = t81;
    t126 = (t46 + 4);
    t127 = (t75 + 4);
    t130 = (t83 + 4);
    t84 = *((unsigned int *)t126);
    t85 = *((unsigned int *)t127);
    t86 = (t84 | t85);
    *((unsigned int *)t130) = t86;
    t90 = *((unsigned int *)t130);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB832;

LAB833:
LAB834:    goto LAB822;

LAB824:    t120 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB826;

LAB828:    *((unsigned int *)t75) = 1;
    goto LAB831;

LAB830:    t125 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB831;

LAB832:    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t130);
    *((unsigned int *)t83) = (t92 | t93);
    t134 = (t46 + 4);
    t148 = (t75 + 4);
    t94 = *((unsigned int *)t46);
    t95 = (~(t94));
    t96 = *((unsigned int *)t134);
    t99 = (~(t96));
    t100 = *((unsigned int *)t75);
    t101 = (~(t100));
    t103 = *((unsigned int *)t148);
    t104 = (~(t103));
    t102 = (t95 & t99);
    t106 = (t101 & t104);
    t105 = (~(t102));
    t107 = (~(t106));
    t108 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t108 & t105);
    t109 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t109 & t107);
    t110 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t110 & t105);
    t112 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t112 & t107);
    goto LAB834;

LAB835:    xsi_set_current_line(568, ng0);
    t158 = (t1 + 9688);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    t168 = ((char*)((ng60)));
    memset(t121, 0, 8);
    xsi_vlog_unsigned_minus(t121, 32, t160, 32, t168, 32);
    t169 = (t1 + 9208);
    xsi_vlogvar_assign_value(t169, t121, 0, 0, 32);
    goto LAB837;

LAB839:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB841;

LAB843:    *((unsigned int *)t17) = 1;
    goto LAB846;

LAB845:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB846;

LAB847:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB851;

LAB850:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB851;

LAB854:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB853;

LAB852:    *((unsigned int *)t33) = 1;

LAB853:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB855;

LAB856:    if (*((unsigned int *)t58) != 0)
        goto LAB857;

LAB858:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB859;

LAB860:
LAB861:    goto LAB849;

LAB851:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB853;

LAB855:    *((unsigned int *)t46) = 1;
    goto LAB858;

LAB857:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB858;

LAB859:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB861;

LAB862:    xsi_set_current_line(570, ng0);
    t89 = ((char*)((ng24)));
    t97 = (t1 + 9688);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng63)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t89, 32, t75, 32);
    t118 = (t1 + 9208);
    xsi_vlogvar_assign_value(t118, t83, 0, 0, 32);
    goto LAB864;

LAB866:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB868;

LAB870:    *((unsigned int *)t17) = 1;
    goto LAB873;

LAB872:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB873;

LAB874:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB878;

LAB877:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB878;

LAB881:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB880;

LAB879:    *((unsigned int *)t33) = 1;

LAB880:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB882;

LAB883:    if (*((unsigned int *)t58) != 0)
        goto LAB884;

LAB885:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB886;

LAB887:
LAB888:    goto LAB876;

LAB878:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB880;

LAB882:    *((unsigned int *)t46) = 1;
    goto LAB885;

LAB884:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB885;

LAB886:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB888;

LAB889:    xsi_set_current_line(572, ng0);
    t89 = ((char*)((ng24)));
    t97 = (t1 + 9688);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng66)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t89, 32, t75, 32);
    t118 = (t1 + 9208);
    xsi_vlogvar_assign_value(t118, t83, 0, 0, 32);
    goto LAB891;

LAB895:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB896;

LAB897:    xsi_set_current_line(581, ng0);

LAB900:    xsi_set_current_line(582, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB902;

LAB901:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB902;

LAB905:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB904;

LAB903:    *((unsigned int *)t17) = 1;

LAB904:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB906;

LAB907:    if (*((unsigned int *)t50) != 0)
        goto LAB908;

LAB909:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB910;

LAB911:    memcpy(t75, t33, 8);

LAB912:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB925;

LAB926:    xsi_set_current_line(585, ng0);

LAB928:    xsi_set_current_line(586, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB927:    xsi_set_current_line(589, ng0);
    t4 = (t1 + 11128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng24)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t7, 32, t18, 32);
    t19 = (t1 + 11128);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB899;

LAB902:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB904;

LAB906:    *((unsigned int *)t33) = 1;
    goto LAB909;

LAB908:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB909;

LAB910:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng59)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB914;

LAB913:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB914;

LAB917:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB916;

LAB915:    *((unsigned int *)t46) = 1;

LAB916:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB918;

LAB919:    if (*((unsigned int *)t89) != 0)
        goto LAB920;

LAB921:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB922;

LAB923:
LAB924:    goto LAB912;

LAB914:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB916;

LAB918:    *((unsigned int *)t59) = 1;
    goto LAB921;

LAB920:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB921;

LAB922:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB924;

LAB925:    xsi_set_current_line(583, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);
    goto LAB927;

LAB931:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB932;

LAB933:    xsi_set_current_line(592, ng0);

LAB936:    xsi_set_current_line(593, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB938;

LAB937:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB938;

LAB941:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB940;

LAB939:    *((unsigned int *)t17) = 1;

LAB940:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB942;

LAB943:    if (*((unsigned int *)t50) != 0)
        goto LAB944;

LAB945:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB946;

LAB947:    memcpy(t75, t33, 8);

LAB948:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB961;

LAB962:    xsi_set_current_line(596, ng0);

LAB964:    xsi_set_current_line(597, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB963:    xsi_set_current_line(600, ng0);
    t4 = (t1 + 11128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng24)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t7, 32, t18, 32);
    t19 = (t1 + 11128);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB935;

LAB938:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB940;

LAB942:    *((unsigned int *)t33) = 1;
    goto LAB945;

LAB944:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB945;

LAB946:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng59)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB950;

LAB949:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB950;

LAB953:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB952;

LAB951:    *((unsigned int *)t46) = 1;

LAB952:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB954;

LAB955:    if (*((unsigned int *)t89) != 0)
        goto LAB956;

LAB957:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB958;

LAB959:
LAB960:    goto LAB948;

LAB950:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB952;

LAB954:    *((unsigned int *)t59) = 1;
    goto LAB957;

LAB956:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB957;

LAB958:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB960;

LAB961:    xsi_set_current_line(594, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);
    goto LAB963;

LAB967:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB968;

LAB969:    xsi_set_current_line(603, ng0);

LAB972:    xsi_set_current_line(604, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB974;

LAB973:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB974;

LAB977:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB976;

LAB975:    *((unsigned int *)t17) = 1;

LAB976:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB978;

LAB979:    if (*((unsigned int *)t50) != 0)
        goto LAB980;

LAB981:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB982;

LAB983:    memcpy(t75, t33, 8);

LAB984:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB997;

LAB998:    xsi_set_current_line(607, ng0);

LAB1000:    xsi_set_current_line(608, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB999:    xsi_set_current_line(611, ng0);
    t4 = (t1 + 11128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t7, 32, t18, 32);
    t19 = (t1 + 11128);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB971;

LAB974:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB976;

LAB978:    *((unsigned int *)t33) = 1;
    goto LAB981;

LAB980:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB981;

LAB982:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng71)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB986;

LAB985:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB986;

LAB989:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB988;

LAB987:    *((unsigned int *)t46) = 1;

LAB988:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB990;

LAB991:    if (*((unsigned int *)t89) != 0)
        goto LAB992;

LAB993:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB994;

LAB995:
LAB996:    goto LAB984;

LAB986:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB988;

LAB990:    *((unsigned int *)t59) = 1;
    goto LAB993;

LAB992:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB993;

LAB994:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB996;

LAB997:    xsi_set_current_line(605, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);
    goto LAB999;

LAB1003:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1004;

LAB1005:    xsi_set_current_line(614, ng0);

LAB1008:    xsi_set_current_line(615, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB1010;

LAB1009:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB1010;

LAB1013:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB1012;

LAB1011:    *((unsigned int *)t17) = 1;

LAB1012:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB1014;

LAB1015:    if (*((unsigned int *)t50) != 0)
        goto LAB1016;

LAB1017:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB1018;

LAB1019:    memcpy(t75, t33, 8);

LAB1020:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB1033;

LAB1034:    xsi_set_current_line(618, ng0);

LAB1036:    xsi_set_current_line(619, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB1035:    xsi_set_current_line(622, ng0);
    t4 = (t1 + 11128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng75)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t7, 32, t18, 32);
    t19 = (t1 + 11128);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    goto LAB1007;

LAB1010:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB1012;

LAB1014:    *((unsigned int *)t33) = 1;
    goto LAB1017;

LAB1016:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB1017;

LAB1018:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng74)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB1022;

LAB1021:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB1022;

LAB1025:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB1024;

LAB1023:    *((unsigned int *)t46) = 1;

LAB1024:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB1026;

LAB1027:    if (*((unsigned int *)t89) != 0)
        goto LAB1028;

LAB1029:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB1030;

LAB1031:
LAB1032:    goto LAB1020;

LAB1022:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB1024;

LAB1026:    *((unsigned int *)t59) = 1;
    goto LAB1029;

LAB1028:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB1029;

LAB1030:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB1032;

LAB1033:    xsi_set_current_line(616, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);
    goto LAB1035;

LAB1037:    *((unsigned int *)t17) = 1;
    goto LAB1040;

LAB1039:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB1040;

LAB1041:    t19 = (t1 + 9688);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = ((char*)((ng2)));
    memset(t33, 0, 8);
    xsi_vlog_signed_leq(t33, 32, t34, 32, t40, 32);
    memset(t46, 0, 8);
    t41 = (t33 + 4);
    t22 = *((unsigned int *)t41);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB1044;

LAB1045:    if (*((unsigned int *)t41) != 0)
        goto LAB1046;

LAB1047:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t48 = (t17 + 4);
    t49 = (t46 + 4);
    t50 = (t59 + 4);
    t30 = *((unsigned int *)t48);
    t31 = *((unsigned int *)t49);
    t35 = (t30 | t31);
    *((unsigned int *)t50) = t35;
    t36 = *((unsigned int *)t50);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB1048;

LAB1049:
LAB1050:    goto LAB1043;

LAB1044:    *((unsigned int *)t46) = 1;
    goto LAB1047;

LAB1046:    t47 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB1047;

LAB1048:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t50);
    *((unsigned int *)t59) = (t38 | t39);
    t51 = (t17 + 4);
    t58 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t51);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t58);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t62 & t56);
    t63 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB1050;

LAB1051:    xsi_set_current_line(626, ng0);
    t61 = (t1 + 9688);
    t74 = (t61 + 56U);
    t76 = *((char **)t74);
    t82 = (t2 + 56U);
    t87 = *((char **)t82);
    t88 = (t1 + 1440);
    t89 = xsi_create_subprogram_invocation(t87, 0, t1, t88, 0, t2);
    t97 = (t1 + 3768);
    xsi_vlogvar_assign_value(t97, t76, 0, 0, 8);

LAB1054:    t98 = (t2 + 64U);
    t111 = *((char **)t98);
    t117 = (t111 + 80U);
    t118 = *((char **)t117);
    t119 = (t118 + 272U);
    t120 = *((char **)t119);
    t124 = (t120 + 0U);
    t125 = *((char **)t124);
    t129 = ((int  (*)(char *, char *))t125)(t1, t111);
    if (t129 != 0)
        goto LAB1056;

LAB1055:    t111 = (t2 + 64U);
    t126 = *((char **)t111);
    t111 = (t1 + 3608);
    t127 = (t111 + 56U);
    t130 = *((char **)t127);
    memcpy(t75, t130, 8);
    t134 = (t1 + 1440);
    t148 = (t2 + 56U);
    t154 = *((char **)t148);
    xsi_delete_subprogram_invocation(t134, t126, t1, t154, t2);
    t158 = (t1 + 5048);
    xsi_vlogvar_assign_value(t158, t75, 0, 0, 8);
    goto LAB1053;

LAB1056:    t98 = (t2 + 48U);
    *((char **)t98) = &&LAB1054;
    goto LAB1;

LAB1059:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1060;

LAB1061:    xsi_set_current_line(633, ng0);

LAB1064:    xsi_set_current_line(634, ng0);
    t32 = (t1 + 12728);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t40, 32, t41, 32);
    t47 = (t1 + 12728);
    xsi_vlogvar_assign_value(t47, t17, 0, 0, 32);
    xsi_set_current_line(636, ng0);
    t4 = (t1 + 5688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1068;

LAB1065:    if (t23 != 0)
        goto LAB1067;

LAB1066:    *((unsigned int *)t7) = 1;

LAB1068:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB1069;

LAB1070:    xsi_set_current_line(654, ng0);
    t4 = (t1 + 5688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng68)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1159;

LAB1156:    if (t23 != 0)
        goto LAB1158;

LAB1157:    *((unsigned int *)t7) = 1;

LAB1159:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB1160;

LAB1161:    xsi_set_current_line(668, ng0);
    t4 = (t1 + 5688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng69)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1196;

LAB1193:    if (t23 != 0)
        goto LAB1195;

LAB1194:    *((unsigned int *)t7) = 1;

LAB1196:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB1197;

LAB1198:    xsi_set_current_line(682, ng0);
    t4 = (t1 + 5688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng70)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1233;

LAB1230:    if (t23 != 0)
        goto LAB1232;

LAB1231:    *((unsigned int *)t7) = 1;

LAB1233:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB1234;

LAB1235:    xsi_set_current_line(696, ng0);
    t4 = (t1 + 5688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng73)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1270;

LAB1267:    if (t23 != 0)
        goto LAB1269;

LAB1268:    *((unsigned int *)t7) = 1;

LAB1270:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB1271;

LAB1272:
LAB1273:
LAB1236:
LAB1199:
LAB1162:
LAB1071:    goto LAB1063;

LAB1067:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1068;

LAB1069:    xsi_set_current_line(637, ng0);

LAB1072:    xsi_set_current_line(638, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB1074;

LAB1073:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB1074;

LAB1077:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB1076;

LAB1075:    *((unsigned int *)t17) = 1;

LAB1076:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB1078;

LAB1079:    if (*((unsigned int *)t50) != 0)
        goto LAB1080;

LAB1081:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB1082;

LAB1083:    memcpy(t75, t33, 8);

LAB1084:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB1097;

LAB1098:    xsi_set_current_line(640, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB1101;

LAB1100:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB1101;

LAB1104:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB1103;

LAB1102:    *((unsigned int *)t7) = 1;

LAB1103:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB1105;

LAB1106:    if (*((unsigned int *)t19) != 0)
        goto LAB1107;

LAB1108:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB1109;

LAB1110:    memcpy(t59, t17, 8);

LAB1111:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB1124;

LAB1125:    xsi_set_current_line(642, ng0);
    t4 = (t1 + 9688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB1128;

LAB1127:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB1128;

LAB1131:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB1130;

LAB1129:    *((unsigned int *)t7) = 1;

LAB1130:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB1132;

LAB1133:    if (*((unsigned int *)t19) != 0)
        goto LAB1134;

LAB1135:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB1136;

LAB1137:    memcpy(t59, t17, 8);

LAB1138:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB1151;

LAB1152:    xsi_set_current_line(645, ng0);

LAB1154:    xsi_set_current_line(646, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(647, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(648, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(649, ng0);
    goto LAB102;

LAB1074:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB1076;

LAB1078:    *((unsigned int *)t33) = 1;
    goto LAB1081;

LAB1080:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB1081;

LAB1082:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng59)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB1086;

LAB1085:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB1086;

LAB1089:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB1088;

LAB1087:    *((unsigned int *)t46) = 1;

LAB1088:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB1090;

LAB1091:    if (*((unsigned int *)t89) != 0)
        goto LAB1092;

LAB1093:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB1094;

LAB1095:
LAB1096:    goto LAB1084;

LAB1086:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB1088;

LAB1090:    *((unsigned int *)t59) = 1;
    goto LAB1093;

LAB1092:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB1093;

LAB1094:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB1096;

LAB1097:    xsi_set_current_line(639, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);

LAB1099:    xsi_set_current_line(652, ng0);
    t4 = (t1 + 4728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng76)));
    xsi_vlog_unsigned_multiply(t248, 257, t6, 257, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    xsi_vlog_unsigned_add(t249, 257, t248, 257, t18, 32);
    t19 = (t1 + 4728);
    xsi_vlogvar_assign_value(t19, t249, 0, 0, 257);
    goto LAB1071;

LAB1101:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1103;

LAB1105:    *((unsigned int *)t17) = 1;
    goto LAB1108;

LAB1107:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB1108;

LAB1109:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB1113;

LAB1112:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB1113;

LAB1116:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB1115;

LAB1114:    *((unsigned int *)t33) = 1;

LAB1115:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB1117;

LAB1118:    if (*((unsigned int *)t58) != 0)
        goto LAB1119;

LAB1120:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB1121;

LAB1122:
LAB1123:    goto LAB1111;

LAB1113:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB1115;

LAB1117:    *((unsigned int *)t46) = 1;
    goto LAB1120;

LAB1119:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB1120;

LAB1121:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB1123;

LAB1124:    xsi_set_current_line(641, ng0);
    t89 = ((char*)((ng24)));
    t97 = (t1 + 9688);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng63)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t89, 32, t75, 32);
    t118 = (t1 + 9208);
    xsi_vlogvar_assign_value(t118, t83, 0, 0, 32);

LAB1126:    goto LAB1099;

LAB1128:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1130;

LAB1132:    *((unsigned int *)t17) = 1;
    goto LAB1135;

LAB1134:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB1135;

LAB1136:    t40 = (t1 + 9688);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB1140;

LAB1139:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB1140;

LAB1143:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB1142;

LAB1141:    *((unsigned int *)t33) = 1;

LAB1142:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB1144;

LAB1145:    if (*((unsigned int *)t58) != 0)
        goto LAB1146;

LAB1147:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB1148;

LAB1149:
LAB1150:    goto LAB1138;

LAB1140:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB1142;

LAB1144:    *((unsigned int *)t46) = 1;
    goto LAB1147;

LAB1146:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB1147;

LAB1148:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB1150;

LAB1151:    xsi_set_current_line(643, ng0);
    t89 = ((char*)((ng24)));
    t97 = (t1 + 9688);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng66)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t89, 32, t75, 32);
    t118 = (t1 + 9208);
    xsi_vlogvar_assign_value(t118, t83, 0, 0, 32);

LAB1153:    goto LAB1126;

LAB1155:    goto LAB1153;

LAB1158:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1159;

LAB1160:    xsi_set_current_line(655, ng0);

LAB1163:    xsi_set_current_line(656, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB1165;

LAB1164:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB1165;

LAB1168:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB1167;

LAB1166:    *((unsigned int *)t17) = 1;

LAB1167:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB1169;

LAB1170:    if (*((unsigned int *)t50) != 0)
        goto LAB1171;

LAB1172:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB1173;

LAB1174:    memcpy(t75, t33, 8);

LAB1175:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB1188;

LAB1189:    xsi_set_current_line(659, ng0);

LAB1191:    xsi_set_current_line(660, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(661, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(662, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(663, ng0);
    goto LAB102;

LAB1165:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB1167;

LAB1169:    *((unsigned int *)t33) = 1;
    goto LAB1172;

LAB1171:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB1172;

LAB1173:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng59)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB1177;

LAB1176:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB1177;

LAB1180:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB1179;

LAB1178:    *((unsigned int *)t46) = 1;

LAB1179:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB1181;

LAB1182:    if (*((unsigned int *)t89) != 0)
        goto LAB1183;

LAB1184:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB1185;

LAB1186:
LAB1187:    goto LAB1175;

LAB1177:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB1179;

LAB1181:    *((unsigned int *)t59) = 1;
    goto LAB1184;

LAB1183:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB1184;

LAB1185:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB1187;

LAB1188:    xsi_set_current_line(657, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);

LAB1190:    xsi_set_current_line(666, ng0);
    t4 = (t1 + 4728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng77)));
    xsi_vlog_unsigned_multiply(t248, 257, t6, 257, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    xsi_vlog_unsigned_add(t249, 257, t248, 257, t18, 32);
    t19 = (t1 + 4728);
    xsi_vlogvar_assign_value(t19, t249, 0, 0, 257);
    goto LAB1162;

LAB1192:    goto LAB1190;

LAB1195:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1196;

LAB1197:    xsi_set_current_line(669, ng0);

LAB1200:    xsi_set_current_line(670, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB1202;

LAB1201:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB1202;

LAB1205:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB1204;

LAB1203:    *((unsigned int *)t17) = 1;

LAB1204:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB1206;

LAB1207:    if (*((unsigned int *)t50) != 0)
        goto LAB1208;

LAB1209:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB1210;

LAB1211:    memcpy(t75, t33, 8);

LAB1212:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB1225;

LAB1226:    xsi_set_current_line(673, ng0);

LAB1228:    xsi_set_current_line(674, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(675, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(676, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(677, ng0);
    goto LAB102;

LAB1202:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB1204;

LAB1206:    *((unsigned int *)t33) = 1;
    goto LAB1209;

LAB1208:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB1209;

LAB1210:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng59)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB1214;

LAB1213:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB1214;

LAB1217:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB1216;

LAB1215:    *((unsigned int *)t46) = 1;

LAB1216:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB1218;

LAB1219:    if (*((unsigned int *)t89) != 0)
        goto LAB1220;

LAB1221:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB1222;

LAB1223:
LAB1224:    goto LAB1212;

LAB1214:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB1216;

LAB1218:    *((unsigned int *)t59) = 1;
    goto LAB1221;

LAB1220:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB1221;

LAB1222:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB1224;

LAB1225:    xsi_set_current_line(671, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);

LAB1227:    xsi_set_current_line(680, ng0);
    t4 = (t1 + 4728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng77)));
    xsi_vlog_unsigned_multiply(t248, 257, t6, 257, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    xsi_vlog_unsigned_add(t249, 257, t248, 257, t18, 32);
    t19 = (t1 + 4728);
    xsi_vlogvar_assign_value(t19, t249, 0, 0, 257);
    goto LAB1199;

LAB1229:    goto LAB1227;

LAB1232:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1233;

LAB1234:    xsi_set_current_line(683, ng0);

LAB1237:    xsi_set_current_line(684, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB1239;

LAB1238:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB1239;

LAB1242:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB1241;

LAB1240:    *((unsigned int *)t17) = 1;

LAB1241:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB1243;

LAB1244:    if (*((unsigned int *)t50) != 0)
        goto LAB1245;

LAB1246:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB1247;

LAB1248:    memcpy(t75, t33, 8);

LAB1249:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB1262;

LAB1263:    xsi_set_current_line(687, ng0);

LAB1265:    xsi_set_current_line(688, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(689, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(690, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(691, ng0);
    goto LAB102;

LAB1239:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB1241;

LAB1243:    *((unsigned int *)t33) = 1;
    goto LAB1246;

LAB1245:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB1246;

LAB1247:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng71)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB1251;

LAB1250:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB1251;

LAB1254:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB1253;

LAB1252:    *((unsigned int *)t46) = 1;

LAB1253:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB1255;

LAB1256:    if (*((unsigned int *)t89) != 0)
        goto LAB1257;

LAB1258:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB1259;

LAB1260:
LAB1261:    goto LAB1249;

LAB1251:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB1253;

LAB1255:    *((unsigned int *)t59) = 1;
    goto LAB1258;

LAB1257:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB1258;

LAB1259:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB1261;

LAB1262:    xsi_set_current_line(685, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);

LAB1264:    xsi_set_current_line(694, ng0);
    t4 = (t1 + 4728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng78)));
    xsi_vlog_unsigned_multiply(t248, 257, t6, 257, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    xsi_vlog_unsigned_add(t249, 257, t248, 257, t18, 32);
    t19 = (t1 + 4728);
    xsi_vlogvar_assign_value(t19, t249, 0, 0, 257);
    goto LAB1236;

LAB1266:    goto LAB1264;

LAB1269:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB1270;

LAB1271:    xsi_set_current_line(697, ng0);

LAB1274:    xsi_set_current_line(698, ng0);
    t32 = (t1 + 9688);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = ((char*)((ng58)));
    memset(t17, 0, 8);
    t47 = (t40 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB1276;

LAB1275:    t48 = (t41 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB1276;

LAB1279:    if (*((unsigned int *)t40) < *((unsigned int *)t41))
        goto LAB1278;

LAB1277:    *((unsigned int *)t17) = 1;

LAB1278:    memset(t33, 0, 8);
    t50 = (t17 + 4);
    t31 = *((unsigned int *)t50);
    t35 = (~(t31));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB1280;

LAB1281:    if (*((unsigned int *)t50) != 0)
        goto LAB1282;

LAB1283:    t58 = (t33 + 4);
    t39 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t58);
    t43 = (t39 || t42);
    if (t43 > 0)
        goto LAB1284;

LAB1285:    memcpy(t75, t33, 8);

LAB1286:    t120 = (t75 + 4);
    t91 = *((unsigned int *)t120);
    t92 = (~(t91));
    t93 = *((unsigned int *)t75);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB1299;

LAB1300:    xsi_set_current_line(701, ng0);

LAB1302:    xsi_set_current_line(702, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(703, ng0);
    t4 = (t1 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 12568);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 280);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(704, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(705, ng0);
    goto LAB102;

LAB1276:    t49 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB1278;

LAB1280:    *((unsigned int *)t33) = 1;
    goto LAB1283;

LAB1282:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB1283;

LAB1284:    t60 = (t1 + 9688);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = ((char*)((ng74)));
    memset(t46, 0, 8);
    t82 = (t74 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB1288;

LAB1287:    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB1288;

LAB1291:    if (*((unsigned int *)t74) > *((unsigned int *)t76))
        goto LAB1290;

LAB1289:    *((unsigned int *)t46) = 1;

LAB1290:    memset(t59, 0, 8);
    t89 = (t46 + 4);
    t44 = *((unsigned int *)t89);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t45);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB1292;

LAB1293:    if (*((unsigned int *)t89) != 0)
        goto LAB1294;

LAB1295:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t59);
    t57 = (t55 & t56);
    *((unsigned int *)t75) = t57;
    t98 = (t33 + 4);
    t111 = (t59 + 4);
    t117 = (t75 + 4);
    t62 = *((unsigned int *)t98);
    t63 = *((unsigned int *)t111);
    t64 = (t62 | t63);
    *((unsigned int *)t117) = t64;
    t65 = *((unsigned int *)t117);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB1296;

LAB1297:
LAB1298:    goto LAB1286;

LAB1288:    t88 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB1290;

LAB1292:    *((unsigned int *)t59) = 1;
    goto LAB1295;

LAB1294:    t97 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB1295;

LAB1296:    t67 = *((unsigned int *)t75);
    t68 = *((unsigned int *)t117);
    *((unsigned int *)t75) = (t67 | t68);
    t118 = (t33 + 4);
    t119 = (t59 + 4);
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t118);
    t72 = (~(t71));
    t73 = *((unsigned int *)t59);
    t77 = (~(t73));
    t78 = *((unsigned int *)t119);
    t79 = (~(t78));
    t102 = (t70 & t72);
    t106 = (t77 & t79);
    t80 = (~(t102));
    t81 = (~(t106));
    t84 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t84 & t80);
    t85 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t85 & t81);
    t86 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t86 & t80);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t81);
    goto LAB1298;

LAB1299:    xsi_set_current_line(699, ng0);
    t124 = (t1 + 9688);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t126, 32, t127, 32);
    t130 = (t1 + 9208);
    xsi_vlogvar_assign_value(t130, t83, 0, 0, 32);

LAB1301:    xsi_set_current_line(708, ng0);
    t4 = (t1 + 4728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng79)));
    xsi_vlog_unsigned_multiply(t248, 257, t6, 257, t8, 32);
    t9 = (t1 + 9208);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    xsi_vlog_unsigned_add(t249, 257, t248, 257, t18, 32);
    t19 = (t1 + 4728);
    xsi_vlogvar_assign_value(t19, t249, 0, 0, 257);
    goto LAB1273;

LAB1303:    goto LAB1301;

LAB1305:    *((unsigned int *)t17) = 1;
    goto LAB1308;

LAB1307:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB1308;

LAB1309:    t19 = (t1 + 9688);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = ((char*)((ng2)));
    memset(t33, 0, 8);
    xsi_vlog_signed_leq(t33, 32, t34, 32, t40, 32);
    memset(t46, 0, 8);
    t41 = (t33 + 4);
    t22 = *((unsigned int *)t41);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB1312;

LAB1313:    if (*((unsigned int *)t41) != 0)
        goto LAB1314;

LAB1315:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t48 = (t17 + 4);
    t49 = (t46 + 4);
    t50 = (t59 + 4);
    t30 = *((unsigned int *)t48);
    t31 = *((unsigned int *)t49);
    t35 = (t30 | t31);
    *((unsigned int *)t50) = t35;
    t36 = *((unsigned int *)t50);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB1316;

LAB1317:
LAB1318:    goto LAB1311;

LAB1312:    *((unsigned int *)t46) = 1;
    goto LAB1315;

LAB1314:    t47 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB1315;

LAB1316:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t50);
    *((unsigned int *)t59) = (t38 | t39);
    t51 = (t17 + 4);
    t58 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t51);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t58);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t62 & t56);
    t63 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB1318;

LAB1319:    xsi_set_current_line(716, ng0);
    t61 = (t1 + 9688);
    t74 = (t61 + 56U);
    t76 = *((char **)t74);
    t82 = (t2 + 56U);
    t87 = *((char **)t82);
    t88 = (t1 + 1440);
    t89 = xsi_create_subprogram_invocation(t87, 0, t1, t88, 0, t2);
    t97 = (t1 + 3768);
    xsi_vlogvar_assign_value(t97, t76, 0, 0, 8);

LAB1322:    t98 = (t2 + 64U);
    t111 = *((char **)t98);
    t117 = (t111 + 80U);
    t118 = *((char **)t117);
    t119 = (t118 + 272U);
    t120 = *((char **)t119);
    t124 = (t120 + 0U);
    t125 = *((char **)t124);
    t129 = ((int  (*)(char *, char *))t125)(t1, t111);
    if (t129 != 0)
        goto LAB1324;

LAB1323:    t111 = (t2 + 64U);
    t126 = *((char **)t111);
    t111 = (t1 + 3608);
    t127 = (t111 + 56U);
    t130 = *((char **)t127);
    memcpy(t75, t130, 8);
    t134 = (t1 + 1440);
    t148 = (t2 + 56U);
    t154 = *((char **)t148);
    xsi_delete_subprogram_invocation(t134, t126, t1, t154, t2);
    t158 = (t1 + 5048);
    xsi_vlogvar_assign_value(t158, t75, 0, 0, 8);
    goto LAB1321;

LAB1324:    t98 = (t2 + 48U);
    *((char **)t98) = &&LAB1322;
    goto LAB1;

}

static int sp_convert_hex2ver(char *t1, char *t2)
{
    char t7[8];
    char t17[8];
    char t33[8];
    char t46[8];
    char t59[8];
    char t75[8];
    char t83[8];
    char t121[8];
    char t122[8];
    char t123[8];
    char t144[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    int t129;
    char *t130;
    unsigned int t131;
    int t132;
    int t133;
    char *t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    int t142;
    int t143;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2304);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(756, ng0);

LAB5:    xsi_set_current_line(757, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 14168);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(758, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(759, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 14488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(760, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 14648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(761, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(762, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 14968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(763, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 16568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(764, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 16728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(765, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 16888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(766, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(767, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(768, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(769, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(770, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(771, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(772, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 18008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(773, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 18168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(774, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 13688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(775, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 13848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(776, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 18328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(778, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294967295U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4294967295U);
    t16 = ((char*)((ng9)));
    memset(t17, 0, 8);
    t18 = (t7 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB9;

LAB6:    if (t29 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t17) = 1;

LAB9:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t34) != 0)
        goto LAB12;

LAB13:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = (!(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB14;

LAB15:    memcpy(t83, t33, 8);

LAB16:    t111 = (t83 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t83);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(781, ng0);

LAB31:    xsi_set_current_line(782, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t7) = xsi_vlogfile_file_open_of_valname_ctype(t6, 2048, ng11);
    t8 = (t7 + 4);
    *((int *)t8) = 0;
    t9 = (t1 + 15128);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(783, ng0);
    t4 = (t1 + 15128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(789, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 13528);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 2048);
    xsi_set_current_line(791, ng0);
    t4 = (t1 + 13528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 4294967295U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4294967295U);
    t16 = ((char*)((ng80)));
    memset(t17, 0, 8);
    t18 = (t7 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB39;

LAB36:    if (t29 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t17) = 1;

LAB39:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t34) != 0)
        goto LAB42;

LAB43:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = (!(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB44;

LAB45:    memcpy(t83, t33, 8);

LAB46:    t111 = (t83 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t83);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(794, ng0);

LAB63:    xsi_set_current_line(795, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 2304);
    xsi_vlogfile_write(1, 0, 0, ng82, 2, t8, (char)118, t6, 2048);
    xsi_set_current_line(796, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB60:    xsi_set_current_line(799, ng0);
    t4 = (t1 + 14168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t8) == 0)
        goto LAB64;

LAB66:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;

LAB67:    t16 = (t7 + 4);
    t15 = *((unsigned int *)t16);
    t20 = (~(t15));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB68;

LAB69:
LAB70:    xsi_set_current_line(809, ng0);

LAB76:    t4 = (t1 + 14168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB80;

LAB78:    if (*((unsigned int *)t8) == 0)
        goto LAB77;

LAB79:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;

LAB80:    memset(t17, 0, 8);
    t16 = (t7 + 4);
    t15 = *((unsigned int *)t16);
    t20 = (~(t15));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t16) != 0)
        goto LAB83;

LAB84:    t19 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    t25 = *((unsigned int *)t19);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB85;

LAB86:    memcpy(t59, t17, 8);

LAB87:    t74 = (t59 + 4);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t59);
    t84 = (t81 & t80);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(1176, ng0);
    t4 = (t1 + 15128);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t8));
    xsi_set_current_line(1177, ng0);
    t4 = (t1 + 15288);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t8));

LAB30:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t33) = 1;
    goto LAB13;

LAB12:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB13;

LAB14:    t47 = (t1 + 13208);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t46, 0, 8);
    t50 = (t46 + 4);
    t51 = (t49 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t56 & 4294967295U);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 4294967295U);
    t58 = ((char*)((ng10)));
    memset(t59, 0, 8);
    t60 = (t46 + 4);
    t61 = (t58 + 4);
    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = *((unsigned int *)t60);
    t66 = *((unsigned int *)t61);
    t67 = (t65 ^ t66);
    t68 = (t64 | t67);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t61);
    t71 = (t69 | t70);
    t72 = (~(t71));
    t73 = (t68 & t72);
    if (t73 != 0)
        goto LAB20;

LAB17:    if (t71 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t59) = 1;

LAB20:    memset(t75, 0, 8);
    t76 = (t59 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t59);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t76) != 0)
        goto LAB23;

LAB24:    t84 = *((unsigned int *)t33);
    t85 = *((unsigned int *)t75);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = (t33 + 4);
    t88 = (t75 + 4);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t87);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t74 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t75) = 1;
    goto LAB24;

LAB23:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB24;

LAB25:    t95 = *((unsigned int *)t83);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t83) = (t95 | t96);
    t97 = (t33 + 4);
    t98 = (t75 + 4);
    t99 = *((unsigned int *)t97);
    t100 = (~(t99));
    t101 = *((unsigned int *)t33);
    t102 = (t101 & t100);
    t103 = *((unsigned int *)t98);
    t104 = (~(t103));
    t105 = *((unsigned int *)t75);
    t106 = (t105 & t104);
    t107 = (~(t102));
    t108 = (~(t106));
    t109 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t109 & t107);
    t110 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t110 & t108);
    goto LAB27;

LAB28:    xsi_set_current_line(779, ng0);
    t117 = (t1 + 13208);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t1 + 13528);
    xsi_vlogvar_assign_value(t120, t119, 0, 0, 2048);
    goto LAB30;

LAB32:    xsi_set_current_line(784, ng0);

LAB35:    xsi_set_current_line(785, ng0);
    t16 = (t1 + 13208);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t32 = (t1 + 2304);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t32, (char)118, t19, 2048);
    xsi_set_current_line(786, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB34;

LAB38:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t33) = 1;
    goto LAB43;

LAB42:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB43;

LAB44:    t47 = (t1 + 13528);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t46, 0, 8);
    t50 = (t46 + 4);
    t51 = (t49 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t56 & 4294967295U);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 4294967295U);
    t58 = ((char*)((ng81)));
    memset(t59, 0, 8);
    t60 = (t46 + 4);
    t61 = (t58 + 4);
    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = *((unsigned int *)t60);
    t66 = *((unsigned int *)t61);
    t67 = (t65 ^ t66);
    t68 = (t64 | t67);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t61);
    t71 = (t69 | t70);
    t72 = (~(t71));
    t73 = (t68 & t72);
    if (t73 != 0)
        goto LAB50;

LAB47:    if (t71 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t59) = 1;

LAB50:    memset(t75, 0, 8);
    t76 = (t59 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t59);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t76) != 0)
        goto LAB53;

LAB54:    t84 = *((unsigned int *)t33);
    t85 = *((unsigned int *)t75);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = (t33 + 4);
    t88 = (t75 + 4);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t87);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB49:    t74 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t75) = 1;
    goto LAB54;

LAB53:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB54;

LAB55:    t95 = *((unsigned int *)t83);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t83) = (t95 | t96);
    t97 = (t33 + 4);
    t98 = (t75 + 4);
    t99 = *((unsigned int *)t97);
    t100 = (~(t99));
    t101 = *((unsigned int *)t33);
    t102 = (t101 & t100);
    t103 = *((unsigned int *)t98);
    t104 = (~(t103));
    t105 = *((unsigned int *)t75);
    t106 = (t105 & t104);
    t107 = (~(t102));
    t108 = (~(t106));
    t109 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t109 & t107);
    t110 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t110 & t108);
    goto LAB57;

LAB58:    xsi_set_current_line(792, ng0);
    t117 = ((char*)((ng15)));
    t118 = (t1 + 13528);
    t119 = (t1 + 13528);
    t120 = (t119 + 72U);
    t124 = *((char **)t120);
    t125 = ((char*)((ng16)));
    t126 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t121, t122, t123, ((int*)(t124)), 2, t125, 32, 1, t126, 32, 1);
    t127 = (t121 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (!(t128));
    t130 = (t122 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (!(t131));
    t133 = (t129 && t132);
    t134 = (t123 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (!(t135));
    t137 = (t133 && t136);
    if (t137 == 1)
        goto LAB61;

LAB62:    goto LAB60;

LAB61:    t138 = *((unsigned int *)t123);
    t139 = (t138 + 0);
    t140 = *((unsigned int *)t121);
    t141 = *((unsigned int *)t122);
    t142 = (t140 - t141);
    t143 = (t142 + 1);
    xsi_vlogvar_assign_value(t118, t117, t139, *((unsigned int *)t122), t143);
    goto LAB62;

LAB64:    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(800, ng0);

LAB71:    xsi_set_current_line(801, ng0);
    t18 = (t1 + 13528);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    *((int *)t17) = xsi_vlogfile_file_open_of_valname_ctype(t32, 2048, ng18);
    t34 = (t17 + 4);
    *((int *)t34) = 0;
    t40 = (t1 + 15288);
    xsi_vlogvar_assign_value(t40, t17, 0, 0, 32);
    xsi_set_current_line(802, ng0);
    t4 = (t1 + 15288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB72;

LAB73:
LAB74:    goto LAB70;

LAB72:    xsi_set_current_line(803, ng0);

LAB75:    xsi_set_current_line(804, ng0);
    t16 = (t1 + 13528);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t32 = (t1 + 2304);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t32, (char)118, t19, 2048);
    xsi_set_current_line(805, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB74;

LAB77:    *((unsigned int *)t7) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t17) = 1;
    goto LAB84;

LAB83:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB84;

LAB85:    t32 = (t1 + 14328);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    memset(t33, 0, 8);
    t41 = (t40 + 4);
    t27 = *((unsigned int *)t41);
    t28 = (~(t27));
    t29 = *((unsigned int *)t40);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t41) == 0)
        goto LAB88;

LAB90:    t47 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t47) = 1;

LAB91:    memset(t46, 0, 8);
    t48 = (t33 + 4);
    t35 = *((unsigned int *)t48);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t48) != 0)
        goto LAB94;

LAB95:    t42 = *((unsigned int *)t17);
    t43 = *((unsigned int *)t46);
    t44 = (t42 & t43);
    *((unsigned int *)t59) = t44;
    t50 = (t17 + 4);
    t51 = (t46 + 4);
    t58 = (t59 + 4);
    t45 = *((unsigned int *)t50);
    t52 = *((unsigned int *)t51);
    t53 = (t45 | t52);
    *((unsigned int *)t58) = t53;
    t54 = *((unsigned int *)t58);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB88:    *((unsigned int *)t33) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t46) = 1;
    goto LAB95;

LAB94:    t49 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB95;

LAB96:    t56 = *((unsigned int *)t59);
    t57 = *((unsigned int *)t58);
    *((unsigned int *)t59) = (t56 | t57);
    t60 = (t17 + 4);
    t61 = (t46 + 4);
    t62 = *((unsigned int *)t17);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t46);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t102 = (t63 & t65);
    t106 = (t67 & t69);
    t70 = (~(t102));
    t71 = (~(t106));
    t72 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t72 & t70);
    t73 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t73 & t71);
    t77 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t77 & t70);
    t78 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t78 & t71);
    goto LAB98;

LAB99:    xsi_set_current_line(810, ng0);

LAB101:    t76 = (t1 + 576);
    xsi_vlog_namedbase_setdisablestate(t76, &&LAB102);
    xsi_vlog_namedbase_pushprocess(t76, t2);

LAB103:    xsi_set_current_line(812, ng0);
    t82 = (t1 + 15128);
    t87 = (t82 + 56U);
    t88 = *((char **)t87);
    *((int *)t75) = xsi_vlogfile_fgetc(*((unsigned int *)t88));
    t89 = (t75 + 4);
    *((int *)t89) = 0;
    t97 = (t1 + 15448);
    xsi_vlogvar_assign_value(t97, t75, 0, 0, 32);
    xsi_set_current_line(814, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t8, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t6, 32, t7, 32);
    t9 = (t17 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(828, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng39)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t16);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB127;

LAB124:    if (t23 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t7) = 1;

LAB127:    t19 = (t7 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(1161, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng24)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t9);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t16);
    t14 = *((unsigned int *)t18);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1062;

LAB1059:    if (t23 != 0)
        goto LAB1061;

LAB1060:    *((unsigned int *)t7) = 1;

LAB1062:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB1063;

LAB1064:    if (*((unsigned int *)t32) != 0)
        goto LAB1065;

LAB1066:    t40 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = (!(t31));
    t36 = *((unsigned int *)t40);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB1067;

LAB1068:    memcpy(t59, t17, 8);

LAB1069:    t89 = (t59 + 4);
    t95 = *((unsigned int *)t89);
    t96 = (~(t95));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t96);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB1081;

LAB1082:    xsi_set_current_line(1165, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t9);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t16);
    t14 = *((unsigned int *)t18);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB1088;

LAB1085:    if (t23 != 0)
        goto LAB1087;

LAB1086:    *((unsigned int *)t7) = 1;

LAB1088:    t32 = (t7 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB1089;

LAB1090:    xsi_set_current_line(1170, ng0);

LAB1093:    xsi_set_current_line(1171, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1172, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng99, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);
    xsi_set_current_line(1173, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB1091:
LAB1083:
LAB130:
LAB106:    t4 = (t1 + 576);
    xsi_vlog_namedbase_popprocess(t4);

LAB102:    goto LAB76;

LAB104:    xsi_set_current_line(815, ng0);

LAB107:    xsi_set_current_line(816, ng0);
    t16 = (t1 + 14488);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t33, 0, 8);
    t32 = (t19 + 4);
    t15 = *((unsigned int *)t32);
    t20 = (~(t15));
    t21 = *((unsigned int *)t19);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB111;

LAB109:    if (*((unsigned int *)t32) == 0)
        goto LAB108;

LAB110:    t34 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t34) = 1;

LAB111:    t40 = (t33 + 4);
    t24 = *((unsigned int *)t40);
    t25 = (~(t24));
    t26 = *((unsigned int *)t33);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(822, ng0);
    t4 = (t1 + 14648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB119;

LAB117:    if (*((unsigned int *)t8) == 0)
        goto LAB116;

LAB118:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;

LAB119:    t16 = (t7 + 4);
    t15 = *((unsigned int *)t16);
    t20 = (~(t15));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB120;

LAB121:
LAB122:
LAB114:    goto LAB106;

LAB108:    *((unsigned int *)t33) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(817, ng0);

LAB115:    xsi_set_current_line(818, ng0);
    t41 = ((char*)((ng5)));
    t47 = (t1 + 14328);
    xsi_vlogvar_assign_value(t47, t41, 0, 0, 1);
    xsi_set_current_line(819, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t8, (char)118, t6, 2048);
    xsi_set_current_line(820, ng0);
    t4 = xsi_vlog_time(t144, 1.0000000000000000, 1.0000000000000000);
    t5 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t5, (char)118, t144, 64);
    goto LAB114;

LAB116:    *((unsigned int *)t7) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(823, ng0);

LAB123:    xsi_set_current_line(824, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t1 + 14328);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(825, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 18168);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng83, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    goto LAB122;

LAB126:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(829, ng0);

LAB131:    xsi_set_current_line(830, ng0);
    t32 = ((char*)((ng5)));
    t34 = (t1 + 14488);
    xsi_vlogvar_assign_value(t34, t32, 0, 0, 1);
    xsi_set_current_line(831, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 16728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(832, ng0);
    t4 = (t1 + 16888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 17048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(833, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 16888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(834, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(835, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(836, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(837, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(838, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(839, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 18008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(842, ng0);
    xsi_set_current_line(842, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 15768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB132:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(862, ng0);
    xsi_set_current_line(862, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 15768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB219:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng54)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB220;

LAB221:    xsi_set_current_line(889, ng0);
    xsi_set_current_line(889, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 15768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB309:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB310;

LAB311:    xsi_set_current_line(908, ng0);
    t4 = (t1 + 17208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t8, 32);
    memset(t17, 0, 8);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB396;

LAB397:    if (*((unsigned int *)t9) != 0)
        goto LAB398;

LAB399:    t18 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t18);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB400;

LAB401:    memcpy(t59, t17, 8);

LAB402:    t60 = (t59 + 4);
    t66 = *((unsigned int *)t60);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB410;

LAB411:    xsi_set_current_line(914, ng0);

LAB414:    xsi_set_current_line(917, ng0);
    t4 = (t1 + 16728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 17528);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t16, 32);
    t18 = (t1 + 17688);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t7, 32, t32, 32);
    t34 = (t1 + 17208);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t17, 32, t41, 32);
    t47 = (t1 + 18008);
    xsi_vlogvar_assign_value(t47, t33, 0, 0, 32);
    xsi_set_current_line(920, ng0);
    t4 = (t1 + 17208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB415:    t8 = ((char*)((ng85)));
    t102 = xsi_vlog_unsigned_case_compare(t6, 32, t8, 32);
    if (t102 == 1)
        goto LAB416;

LAB417:    t4 = ((char*)((ng89)));
    t102 = xsi_vlog_unsigned_case_compare(t6, 32, t4, 32);
    if (t102 == 1)
        goto LAB418;

LAB419:    t4 = ((char*)((ng90)));
    t102 = xsi_vlog_unsigned_case_compare(t6, 32, t4, 32);
    if (t102 == 1)
        goto LAB420;

LAB421:    t4 = ((char*)((ng92)));
    t102 = xsi_vlog_unsigned_case_compare(t6, 32, t4, 32);
    if (t102 == 1)
        goto LAB422;

LAB423:    t4 = ((char*)((ng93)));
    t102 = xsi_vlog_unsigned_case_compare(t6, 32, t4, 32);
    if (t102 == 1)
        goto LAB424;

LAB425:    t4 = ((char*)((ng95)));
    t102 = xsi_vlog_unsigned_case_compare(t6, 32, t4, 32);
    if (t102 == 1)
        goto LAB426;

LAB427:
LAB429:
LAB428:    xsi_set_current_line(1127, ng0);

LAB958:    xsi_set_current_line(1128, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1129, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng96, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);

LAB430:    xsi_set_current_line(1134, ng0);
    xsi_set_current_line(1134, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 15768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB959:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t8, 32, t9, 32);
    t16 = (t7 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB960;

LAB961:    xsi_set_current_line(1154, ng0);
    t4 = (t1 + 18008);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    *((unsigned int *)t7) = t11;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB1047;

LAB1046:    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 4294967295U);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t21 & 4294967295U);
    t18 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t18, 32);
    t19 = ((char*)((ng97)));
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t19);
    t24 = (t22 & t23);
    *((unsigned int *)t33) = t24;
    t32 = (t17 + 4);
    t34 = (t19 + 4);
    t40 = (t33 + 4);
    t25 = *((unsigned int *)t32);
    t26 = *((unsigned int *)t34);
    t27 = (t25 | t26);
    *((unsigned int *)t40) = t27;
    t28 = *((unsigned int *)t40);
    t29 = (t28 != 0);
    if (t29 == 1)
        goto LAB1048;

LAB1049:
LAB1050:    t48 = (t1 + 17368);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t46, 0, 8);
    t51 = (t33 + 4);
    t58 = (t50 + 4);
    t57 = *((unsigned int *)t33);
    t62 = *((unsigned int *)t50);
    t63 = (t57 ^ t62);
    t64 = *((unsigned int *)t51);
    t65 = *((unsigned int *)t58);
    t66 = (t64 ^ t65);
    t67 = (t63 | t66);
    t68 = *((unsigned int *)t51);
    t69 = *((unsigned int *)t58);
    t70 = (t68 | t69);
    t71 = (~(t70));
    t72 = (t67 & t71);
    if (t72 != 0)
        goto LAB1052;

LAB1051:    if (t70 != 0)
        goto LAB1053;

LAB1054:    t61 = (t46 + 4);
    t73 = *((unsigned int *)t61);
    t77 = (~(t73));
    t78 = *((unsigned int *)t46);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB1055;

LAB1056:
LAB1057:
LAB412:    goto LAB130;

LAB133:    xsi_set_current_line(843, ng0);

LAB135:    xsi_set_current_line(844, ng0);
    t16 = (t1 + 15128);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t19));
    t32 = (t17 + 4);
    *((int *)t32) = 0;
    t34 = (t1 + 15448);
    xsi_vlogvar_assign_value(t34, t17, 0, 0, 32);
    xsi_set_current_line(846, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB137;

LAB136:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB137;

LAB140:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB139;

LAB138:    *((unsigned int *)t7) = 1;

LAB139:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t19) != 0)
        goto LAB143;

LAB144:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB145;

LAB146:    memcpy(t59, t17, 8);

LAB147:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB160;

LAB161:    xsi_set_current_line(848, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB164;

LAB163:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB164;

LAB167:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB166;

LAB165:    *((unsigned int *)t7) = 1;

LAB166:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t19) != 0)
        goto LAB170;

LAB171:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB172;

LAB173:    memcpy(t59, t17, 8);

LAB174:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB187;

LAB188:    xsi_set_current_line(850, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB191;

LAB190:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB191;

LAB194:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB193;

LAB192:    *((unsigned int *)t7) = 1;

LAB193:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t19) != 0)
        goto LAB197;

LAB198:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB199;

LAB200:    memcpy(t59, t17, 8);

LAB201:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB214;

LAB215:    xsi_set_current_line(853, ng0);

LAB217:    xsi_set_current_line(854, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(855, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 18168);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(856, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(857, ng0);
    goto LAB102;

LAB137:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB139;

LAB141:    *((unsigned int *)t17) = 1;
    goto LAB144;

LAB143:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB144;

LAB145:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB149;

LAB148:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB149;

LAB152:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB151;

LAB150:    *((unsigned int *)t33) = 1;

LAB151:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t58) != 0)
        goto LAB155;

LAB156:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB157;

LAB158:
LAB159:    goto LAB147;

LAB149:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB151;

LAB153:    *((unsigned int *)t46) = 1;
    goto LAB156;

LAB155:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB156;

LAB157:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB159;

LAB160:    xsi_set_current_line(847, ng0);
    t89 = (t1 + 16728);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t98, 32, t111, 32);
    t117 = (t1 + 15448);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t119, 32, t120, 32);
    memset(t121, 0, 8);
    xsi_vlog_unsigned_add(t121, 32, t75, 32, t83, 32);
    t124 = (t1 + 16728);
    xsi_vlogvar_assign_value(t124, t121, 0, 0, 32);

LAB162:    xsi_set_current_line(842, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 15768);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB132;

LAB164:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB166;

LAB168:    *((unsigned int *)t17) = 1;
    goto LAB171;

LAB170:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB171;

LAB172:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB176;

LAB175:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB176;

LAB179:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB178;

LAB177:    *((unsigned int *)t33) = 1;

LAB178:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB180;

LAB181:    if (*((unsigned int *)t58) != 0)
        goto LAB182;

LAB183:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB184;

LAB185:
LAB186:    goto LAB174;

LAB176:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB178;

LAB180:    *((unsigned int *)t46) = 1;
    goto LAB183;

LAB182:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB183;

LAB184:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB186;

LAB187:    xsi_set_current_line(849, ng0);
    t89 = (t1 + 16728);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t98, 32, t111, 32);
    t117 = ((char*)((ng24)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t75, 32, t117, 32);
    t118 = (t1 + 15448);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t124 = ((char*)((ng63)));
    memset(t121, 0, 8);
    xsi_vlog_unsigned_minus(t121, 32, t120, 32, t124, 32);
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t83, 32, t121, 32);
    t125 = (t1 + 16728);
    xsi_vlogvar_assign_value(t125, t122, 0, 0, 32);

LAB189:    goto LAB162;

LAB191:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB193;

LAB195:    *((unsigned int *)t17) = 1;
    goto LAB198;

LAB197:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB198;

LAB199:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB203;

LAB202:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB203;

LAB206:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB205;

LAB204:    *((unsigned int *)t33) = 1;

LAB205:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t58) != 0)
        goto LAB209;

LAB210:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB211;

LAB212:
LAB213:    goto LAB201;

LAB203:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB205;

LAB207:    *((unsigned int *)t46) = 1;
    goto LAB210;

LAB209:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB210;

LAB211:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB213;

LAB214:    xsi_set_current_line(851, ng0);
    t89 = (t1 + 16728);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t98, 32, t111, 32);
    t117 = ((char*)((ng24)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t75, 32, t117, 32);
    t118 = (t1 + 15448);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t124 = ((char*)((ng66)));
    memset(t121, 0, 8);
    xsi_vlog_unsigned_minus(t121, 32, t120, 32, t124, 32);
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t83, 32, t121, 32);
    t125 = (t1 + 16728);
    xsi_vlogvar_assign_value(t125, t122, 0, 0, 32);

LAB216:    goto LAB189;

LAB218:    goto LAB216;

LAB220:    xsi_set_current_line(863, ng0);

LAB222:    xsi_set_current_line(864, ng0);
    t16 = (t1 + 15128);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t19));
    t32 = (t17 + 4);
    *((int *)t32) = 0;
    t34 = (t1 + 15448);
    xsi_vlogvar_assign_value(t34, t17, 0, 0, 32);
    xsi_set_current_line(866, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB224;

LAB223:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB224;

LAB227:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB226;

LAB225:    *((unsigned int *)t7) = 1;

LAB226:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB228;

LAB229:    if (*((unsigned int *)t19) != 0)
        goto LAB230;

LAB231:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB232;

LAB233:    memcpy(t59, t17, 8);

LAB234:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB247;

LAB248:    xsi_set_current_line(868, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB251;

LAB250:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB251;

LAB254:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB253;

LAB252:    *((unsigned int *)t7) = 1;

LAB253:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB255;

LAB256:    if (*((unsigned int *)t19) != 0)
        goto LAB257;

LAB258:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB259;

LAB260:    memcpy(t59, t17, 8);

LAB261:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB274;

LAB275:    xsi_set_current_line(870, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB278;

LAB277:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB278;

LAB281:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB280;

LAB279:    *((unsigned int *)t7) = 1;

LAB280:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB282;

LAB283:    if (*((unsigned int *)t19) != 0)
        goto LAB284;

LAB285:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB286;

LAB287:    memcpy(t59, t17, 8);

LAB288:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB301;

LAB302:    xsi_set_current_line(873, ng0);

LAB304:    xsi_set_current_line(874, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(875, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 18168);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(876, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(877, ng0);
    goto LAB102;

LAB224:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB226;

LAB228:    *((unsigned int *)t17) = 1;
    goto LAB231;

LAB230:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB231;

LAB232:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB236;

LAB235:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB236;

LAB239:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB238;

LAB237:    *((unsigned int *)t33) = 1;

LAB238:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB240;

LAB241:    if (*((unsigned int *)t58) != 0)
        goto LAB242;

LAB243:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB244;

LAB245:
LAB246:    goto LAB234;

LAB236:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB238;

LAB240:    *((unsigned int *)t46) = 1;
    goto LAB243;

LAB242:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB243;

LAB244:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB246;

LAB247:    xsi_set_current_line(867, ng0);
    t89 = (t1 + 15448);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng60)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t98, 32, t111, 32);
    t117 = (t1 + 13848);
    xsi_vlogvar_assign_value(t117, t75, 0, 0, 4);

LAB249:    xsi_set_current_line(880, ng0);
    t4 = (t1 + 16888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng67)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 13848);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t18, 4);
    t19 = (t1 + 16888);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);
    xsi_set_current_line(882, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB306;

LAB307:    xsi_set_current_line(885, ng0);
    t4 = (t1 + 17528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng67)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 13848);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t18, 4);
    t19 = (t1 + 17528);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 32);

LAB308:    xsi_set_current_line(862, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 15768);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB219;

LAB251:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB253;

LAB255:    *((unsigned int *)t17) = 1;
    goto LAB258;

LAB257:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB258;

LAB259:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB263;

LAB262:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB263;

LAB266:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB265;

LAB264:    *((unsigned int *)t33) = 1;

LAB265:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB267;

LAB268:    if (*((unsigned int *)t58) != 0)
        goto LAB269;

LAB270:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB271;

LAB272:
LAB273:    goto LAB261;

LAB263:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB265;

LAB267:    *((unsigned int *)t46) = 1;
    goto LAB270;

LAB269:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB270;

LAB271:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB273;

LAB274:    xsi_set_current_line(869, ng0);
    t89 = ((char*)((ng24)));
    t97 = (t1 + 15448);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng63)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t89, 32, t75, 32);
    t118 = (t1 + 13848);
    xsi_vlogvar_assign_value(t118, t83, 0, 0, 4);

LAB276:    goto LAB249;

LAB278:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB280;

LAB282:    *((unsigned int *)t17) = 1;
    goto LAB285;

LAB284:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB285;

LAB286:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB290;

LAB289:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB290;

LAB293:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB292;

LAB291:    *((unsigned int *)t33) = 1;

LAB292:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB294;

LAB295:    if (*((unsigned int *)t58) != 0)
        goto LAB296;

LAB297:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB298;

LAB299:
LAB300:    goto LAB288;

LAB290:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB292;

LAB294:    *((unsigned int *)t46) = 1;
    goto LAB297;

LAB296:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB297;

LAB298:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB300;

LAB301:    xsi_set_current_line(871, ng0);
    t89 = ((char*)((ng24)));
    t97 = (t1 + 15448);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng66)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t89, 32, t75, 32);
    t118 = (t1 + 13848);
    xsi_vlogvar_assign_value(t118, t83, 0, 0, 4);

LAB303:    goto LAB276;

LAB305:    goto LAB303;

LAB306:    xsi_set_current_line(883, ng0);
    t16 = (t1 + 17688);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t32 = ((char*)((ng67)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_multiply(t17, 32, t19, 32, t32, 32);
    t34 = (t1 + 13848);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t17, 32, t41, 4);
    t47 = (t1 + 17688);
    xsi_vlogvar_assign_value(t47, t33, 0, 0, 32);
    goto LAB308;

LAB310:    xsi_set_current_line(890, ng0);

LAB312:    xsi_set_current_line(891, ng0);
    t16 = (t1 + 15128);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t19));
    t32 = (t17 + 4);
    *((int *)t32) = 0;
    t34 = (t1 + 15448);
    xsi_vlogvar_assign_value(t34, t17, 0, 0, 32);
    xsi_set_current_line(893, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB314;

LAB313:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB314;

LAB317:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB316;

LAB315:    *((unsigned int *)t7) = 1;

LAB316:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB318;

LAB319:    if (*((unsigned int *)t19) != 0)
        goto LAB320;

LAB321:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB322;

LAB323:    memcpy(t59, t17, 8);

LAB324:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB337;

LAB338:    xsi_set_current_line(895, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB341;

LAB340:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB341;

LAB344:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB343;

LAB342:    *((unsigned int *)t7) = 1;

LAB343:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB345;

LAB346:    if (*((unsigned int *)t19) != 0)
        goto LAB347;

LAB348:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB349;

LAB350:    memcpy(t59, t17, 8);

LAB351:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB364;

LAB365:    xsi_set_current_line(897, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB368;

LAB367:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB368;

LAB371:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB370;

LAB369:    *((unsigned int *)t7) = 1;

LAB370:    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB372;

LAB373:    if (*((unsigned int *)t19) != 0)
        goto LAB374;

LAB375:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB376;

LAB377:    memcpy(t59, t17, 8);

LAB378:    t88 = (t59 + 4);
    t66 = *((unsigned int *)t88);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB391;

LAB392:    xsi_set_current_line(900, ng0);

LAB394:    xsi_set_current_line(901, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(902, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 18168);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    xsi_set_current_line(903, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(904, ng0);
    goto LAB102;

LAB314:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB316;

LAB318:    *((unsigned int *)t17) = 1;
    goto LAB321;

LAB320:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB321;

LAB322:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB326;

LAB325:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB326;

LAB329:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB328;

LAB327:    *((unsigned int *)t33) = 1;

LAB328:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB330;

LAB331:    if (*((unsigned int *)t58) != 0)
        goto LAB332;

LAB333:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB334;

LAB335:
LAB336:    goto LAB324;

LAB326:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB328;

LAB330:    *((unsigned int *)t46) = 1;
    goto LAB333;

LAB332:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB333;

LAB334:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB336;

LAB337:    xsi_set_current_line(894, ng0);
    t89 = (t1 + 17208);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t98, 32, t111, 32);
    t117 = (t1 + 15448);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t119, 32, t120, 32);
    memset(t121, 0, 8);
    xsi_vlog_unsigned_add(t121, 32, t75, 32, t83, 32);
    t124 = (t1 + 17208);
    xsi_vlogvar_assign_value(t124, t121, 0, 0, 32);

LAB339:    xsi_set_current_line(889, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 15768);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB309;

LAB341:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB343;

LAB345:    *((unsigned int *)t17) = 1;
    goto LAB348;

LAB347:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB348;

LAB349:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB353;

LAB352:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB353;

LAB356:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB355;

LAB354:    *((unsigned int *)t33) = 1;

LAB355:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB357;

LAB358:    if (*((unsigned int *)t58) != 0)
        goto LAB359;

LAB360:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB361;

LAB362:
LAB363:    goto LAB351;

LAB353:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB355;

LAB357:    *((unsigned int *)t46) = 1;
    goto LAB360;

LAB359:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB360;

LAB361:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB363;

LAB364:    xsi_set_current_line(896, ng0);
    t89 = (t1 + 17208);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t98, 32, t111, 32);
    t117 = ((char*)((ng24)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t75, 32, t117, 32);
    t118 = (t1 + 15448);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t124 = ((char*)((ng63)));
    memset(t121, 0, 8);
    xsi_vlog_unsigned_minus(t121, 32, t120, 32, t124, 32);
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t83, 32, t121, 32);
    t125 = (t1 + 17208);
    xsi_vlogvar_assign_value(t125, t122, 0, 0, 32);

LAB366:    goto LAB339;

LAB368:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB370;

LAB372:    *((unsigned int *)t17) = 1;
    goto LAB375;

LAB374:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB375;

LAB376:    t40 = (t1 + 15448);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB380;

LAB379:    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB380;

LAB383:    if (*((unsigned int *)t47) > *((unsigned int *)t48))
        goto LAB382;

LAB381:    *((unsigned int *)t33) = 1;

LAB382:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t22 = *((unsigned int *)t58);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB384;

LAB385:    if (*((unsigned int *)t58) != 0)
        goto LAB386;

LAB387:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t30 = *((unsigned int *)t61);
    t31 = *((unsigned int *)t74);
    t35 = (t30 | t31);
    *((unsigned int *)t76) = t35;
    t36 = *((unsigned int *)t76);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB388;

LAB389:
LAB390:    goto LAB378;

LAB380:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB382;

LAB384:    *((unsigned int *)t46) = 1;
    goto LAB387;

LAB386:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB387;

LAB388:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t38 | t39);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t82);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t87);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t62 & t56);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB390;

LAB391:    xsi_set_current_line(898, ng0);
    t89 = (t1 + 17208);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t98, 32, t111, 32);
    t117 = ((char*)((ng24)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t75, 32, t117, 32);
    t118 = (t1 + 15448);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t124 = ((char*)((ng66)));
    memset(t121, 0, 8);
    xsi_vlog_unsigned_minus(t121, 32, t120, 32, t124, 32);
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t83, 32, t121, 32);
    t125 = (t1 + 17208);
    xsi_vlogvar_assign_value(t125, t122, 0, 0, 32);

LAB393:    goto LAB366;

LAB395:    goto LAB393;

LAB396:    *((unsigned int *)t17) = 1;
    goto LAB399;

LAB398:    t16 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB399;

LAB400:    t19 = (t1 + 16728);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = ((char*)((ng72)));
    memset(t33, 0, 8);
    xsi_vlog_signed_not_equal(t33, 32, t34, 32, t40, 32);
    memset(t46, 0, 8);
    t41 = (t33 + 4);
    t22 = *((unsigned int *)t41);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB403;

LAB404:    if (*((unsigned int *)t41) != 0)
        goto LAB405;

LAB406:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t48 = (t17 + 4);
    t49 = (t46 + 4);
    t50 = (t59 + 4);
    t30 = *((unsigned int *)t48);
    t31 = *((unsigned int *)t49);
    t35 = (t30 | t31);
    *((unsigned int *)t50) = t35;
    t36 = *((unsigned int *)t50);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB407;

LAB408:
LAB409:    goto LAB402;

LAB403:    *((unsigned int *)t46) = 1;
    goto LAB406;

LAB405:    t47 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB406;

LAB407:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t50);
    *((unsigned int *)t59) = (t38 | t39);
    t51 = (t17 + 4);
    t58 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t51);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t58);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t62 & t56);
    t63 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB409;

LAB410:    xsi_set_current_line(909, ng0);

LAB413:    xsi_set_current_line(910, ng0);
    t61 = ((char*)((ng5)));
    t74 = (t1 + 14328);
    xsi_vlogvar_assign_value(t74, t61, 0, 0, 1);
    xsi_set_current_line(911, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 18168);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t18 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t18, (char)118, t6, 2048, (char)119, t16, 32);
    goto LAB412;

LAB416:    xsi_set_current_line(923, ng0);

LAB431:    xsi_set_current_line(924, ng0);
    t9 = ((char*)((ng5)));
    t16 = (t1 + 14488);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 1);
    xsi_set_current_line(925, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 15768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(926, ng0);
    t4 = (t1 + 13368);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng75)));
    memset(t7, 0, 8);
    xsi_vlog_signed_divide(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 16088);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    xsi_set_current_line(927, ng0);
    t4 = (t1 + 13368);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng75)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t8, 32, t9, 32);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_not_equal(t17, 32, t7, 32, t16, 32);
    t18 = (t17 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB432;

LAB433:
LAB434:    xsi_set_current_line(930, ng0);
    t4 = (t1 + 14808);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng4)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    t18 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = *((unsigned int *)t9);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t16);
    t14 = *((unsigned int *)t18);
    t15 = (t13 ^ t14);
    t20 = (t12 | t15);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB438;

LAB435:    if (t23 != 0)
        goto LAB437;

LAB436:    *((unsigned int *)t7) = 1;

LAB438:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB439;

LAB440:    if (*((unsigned int *)t32) != 0)
        goto LAB441;

LAB442:    t40 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t40);
    t36 = (t31 || t35);
    if (t36 > 0)
        goto LAB443;

LAB444:    memcpy(t59, t17, 8);

LAB445:    t88 = (t59 + 4);
    t81 = *((unsigned int *)t88);
    t84 = (~(t81));
    t85 = *((unsigned int *)t59);
    t86 = (t85 & t84);
    t90 = (t86 != 0);
    if (t90 > 0)
        goto LAB453;

LAB454:
LAB455:    xsi_set_current_line(933, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 14808);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(935, ng0);
    t4 = (t1 + 16888);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 16088);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t8, 32, t18, 32);
    memset(t17, 0, 8);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB456;

LAB457:    if (*((unsigned int *)t19) != 0)
        goto LAB458;

LAB459:    t34 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t34);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB460;

LAB461:    memcpy(t59, t17, 8);

LAB462:    t88 = (t59 + 4);
    t81 = *((unsigned int *)t88);
    t84 = (~(t81));
    t85 = *((unsigned int *)t59);
    t86 = (t85 & t84);
    t90 = (t86 != 0);
    if (t90 > 0)
        goto LAB474;

LAB475:
LAB476:    xsi_set_current_line(939, ng0);

LAB477:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 16728);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t8, 32, t18, 32);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB478;

LAB479:    goto LAB430;

LAB418:    xsi_set_current_line(994, ng0);

LAB591:    xsi_set_current_line(995, ng0);
    t5 = ((char*)((ng5)));
    t8 = (t1 + 14648);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(996, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB430;

LAB420:    xsi_set_current_line(1000, ng0);

LAB592:    xsi_set_current_line(1001, ng0);
    t5 = ((char*)((ng4)));
    t8 = (t1 + 16568);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    xsi_set_current_line(1004, ng0);
    xsi_set_current_line(1004, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 15768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB593:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 16728);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t18, 32, t19, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_leq(t17, 32, t8, 32, t7, 32);
    t32 = (t17 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB594;

LAB595:    xsi_set_current_line(1032, ng0);
    t4 = (t1 + 16568);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng91)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 16568);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB430;

LAB422:    xsi_set_current_line(1037, ng0);
    xsi_set_current_line(1037, ng0);
    t5 = ((char*)((ng5)));
    t8 = (t1 + 15768);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);

LAB684:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 16728);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t18, 32, t19, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_leq(t17, 32, t8, 32, t7, 32);
    t32 = (t17 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB685;

LAB686:    goto LAB430;

LAB424:    xsi_set_current_line(1064, ng0);

LAB775:    xsi_set_current_line(1065, ng0);
    t5 = ((char*)((ng4)));
    t8 = (t1 + 16568);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    xsi_set_current_line(1068, ng0);
    xsi_set_current_line(1068, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 15768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB776:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 16728);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t18, 32, t19, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_leq(t17, 32, t8, 32, t7, 32);
    t32 = (t17 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB777;

LAB778:    xsi_set_current_line(1096, ng0);
    t4 = (t1 + 16568);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng94)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 16568);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB430;

LAB426:    xsi_set_current_line(1101, ng0);
    xsi_set_current_line(1101, ng0);
    t5 = ((char*)((ng5)));
    t8 = (t1 + 15768);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);

LAB867:    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 16728);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t18, 32, t19, 32);
    memset(t17, 0, 8);
    xsi_vlog_signed_leq(t17, 32, t8, 32, t7, 32);
    t32 = (t17 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB868;

LAB869:    goto LAB430;

LAB432:    xsi_set_current_line(928, ng0);
    t19 = (t1 + 16088);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = ((char*)((ng5)));
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t34, 32, t40, 32);
    t41 = (t1 + 16088);
    xsi_vlogvar_assign_value(t41, t33, 0, 0, 32);
    goto LAB434;

LAB437:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB438;

LAB439:    *((unsigned int *)t17) = 1;
    goto LAB442;

LAB441:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB442;

LAB443:    t41 = (t1 + 16888);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = (t1 + 16088);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t33, 0, 8);
    xsi_vlog_signed_not_equal(t33, 32, t48, 32, t51, 32);
    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t37 = *((unsigned int *)t58);
    t38 = (~(t37));
    t39 = *((unsigned int *)t33);
    t42 = (t39 & t38);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB446;

LAB447:    if (*((unsigned int *)t58) != 0)
        goto LAB448;

LAB449:    t44 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t46);
    t52 = (t44 & t45);
    *((unsigned int *)t59) = t52;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t53 = *((unsigned int *)t61);
    t54 = *((unsigned int *)t74);
    t55 = (t53 | t54);
    *((unsigned int *)t76) = t55;
    t56 = *((unsigned int *)t76);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB450;

LAB451:
LAB452:    goto LAB445;

LAB446:    *((unsigned int *)t46) = 1;
    goto LAB449;

LAB448:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB449;

LAB450:    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t62 | t63);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t64 = *((unsigned int *)t17);
    t65 = (~(t64));
    t66 = *((unsigned int *)t82);
    t67 = (~(t66));
    t68 = *((unsigned int *)t46);
    t69 = (~(t68));
    t70 = *((unsigned int *)t87);
    t71 = (~(t70));
    t102 = (t65 & t67);
    t106 = (t69 & t71);
    t72 = (~(t102));
    t73 = (~(t106));
    t77 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t77 & t72);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t78 & t73);
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t72);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t73);
    goto LAB452;

LAB453:    xsi_set_current_line(931, ng0);
    t89 = ((char*)((ng5)));
    t97 = (t1 + 14968);
    xsi_vlogvar_assign_value(t97, t89, 0, 0, 1);
    goto LAB455;

LAB456:    *((unsigned int *)t17) = 1;
    goto LAB459;

LAB458:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB459;

LAB460:    t40 = (t1 + 14968);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    t48 = ((char*)((ng4)));
    memset(t33, 0, 8);
    t49 = (t47 + 4);
    t50 = (t48 + 4);
    t22 = *((unsigned int *)t47);
    t23 = *((unsigned int *)t48);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t49);
    t26 = *((unsigned int *)t50);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t49);
    t30 = *((unsigned int *)t50);
    t31 = (t29 | t30);
    t35 = (~(t31));
    t36 = (t28 & t35);
    if (t36 != 0)
        goto LAB466;

LAB463:    if (t31 != 0)
        goto LAB465;

LAB464:    *((unsigned int *)t33) = 1;

LAB466:    memset(t46, 0, 8);
    t58 = (t33 + 4);
    t37 = *((unsigned int *)t58);
    t38 = (~(t37));
    t39 = *((unsigned int *)t33);
    t42 = (t39 & t38);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB467;

LAB468:    if (*((unsigned int *)t58) != 0)
        goto LAB469;

LAB470:    t44 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t46);
    t52 = (t44 & t45);
    *((unsigned int *)t59) = t52;
    t61 = (t17 + 4);
    t74 = (t46 + 4);
    t76 = (t59 + 4);
    t53 = *((unsigned int *)t61);
    t54 = *((unsigned int *)t74);
    t55 = (t53 | t54);
    *((unsigned int *)t76) = t55;
    t56 = *((unsigned int *)t76);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB471;

LAB472:
LAB473:    goto LAB462;

LAB465:    t51 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB466;

LAB467:    *((unsigned int *)t46) = 1;
    goto LAB470;

LAB469:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB470;

LAB471:    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t76);
    *((unsigned int *)t59) = (t62 | t63);
    t82 = (t17 + 4);
    t87 = (t46 + 4);
    t64 = *((unsigned int *)t17);
    t65 = (~(t64));
    t66 = *((unsigned int *)t82);
    t67 = (~(t66));
    t68 = *((unsigned int *)t46);
    t69 = (~(t68));
    t70 = *((unsigned int *)t87);
    t71 = (~(t70));
    t102 = (t65 & t67);
    t106 = (t69 & t71);
    t72 = (~(t102));
    t73 = (~(t106));
    t77 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t77 & t72);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t78 & t73);
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t72);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t73);
    goto LAB473;

LAB474:    xsi_set_current_line(936, ng0);
    t89 = (t1 + 16088);
    t97 = (t89 + 56U);
    t98 = *((char **)t97);
    t111 = (t1 + 18328);
    xsi_vlogvar_assign_value(t111, t98, 0, 0, 32);
    goto LAB476;

LAB478:    xsi_set_current_line(940, ng0);

LAB480:    xsi_set_current_line(941, ng0);
    t32 = (t1 + 15288);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = (t1 + 16888);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = (t1 + 16568);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t48, 32, t51, 32);
    t58 = (t1 + 18328);
    t60 = (t58 + 56U);
    t61 = *((char **)t60);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t17, 32, t61, 32);
    t74 = (t1 + 576);
    xsi_vlogfile_fwrite(*((unsigned int *)t40), 1, 0, 0, ng53, 2, t74, (char)119, t33, 32);
    xsi_set_current_line(943, ng0);
    xsi_set_current_line(943, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 15928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB481:    t4 = (t1 + 15928);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 16088);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t7, 0, 8);
    xsi_vlog_signed_leq(t7, 32, t8, 32, t18, 32);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB482;

LAB483:    xsi_set_current_line(986, ng0);
    t4 = (t1 + 15288);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 576);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 0, 0, 1, ng56, 1, t9);
    xsi_set_current_line(988, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 16088);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t18, 32);
    t19 = (t1 + 15768);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 32);
    xsi_set_current_line(989, ng0);
    t4 = (t1 + 16888);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 16888);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB477;

LAB482:    xsi_set_current_line(944, ng0);

LAB484:    xsi_set_current_line(945, ng0);
    t32 = (t1 + 16088);
    t34 = (t32 + 56U);
    t40 = *((char **)t34);
    t41 = (t1 + 15928);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t40, 32, t48, 32);
    t49 = ((char*)((ng5)));
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t17, 32, t49, 32);
    t50 = (t1 + 16728);
    t51 = (t50 + 56U);
    t58 = *((char **)t51);
    memset(t46, 0, 8);
    xsi_vlog_signed_greater(t46, 32, t33, 32, t58, 32);
    t60 = (t46 + 4);
    t15 = *((unsigned int *)t60);
    t20 = (~(t15));
    t21 = *((unsigned int *)t46);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB485;

LAB486:    xsi_set_current_line(954, ng0);

LAB496:    xsi_set_current_line(956, ng0);
    xsi_set_current_line(956, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 16248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB497:    t4 = (t1 + 16248);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_leq(t7, 32, t8, 32, t9, 32);
    t16 = (t7 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB498;

LAB499:
LAB487:    xsi_set_current_line(943, ng0);
    t4 = (t1 + 15928);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 15928);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB481;

LAB485:    xsi_set_current_line(946, ng0);

LAB488:    xsi_set_current_line(947, ng0);
    xsi_set_current_line(947, ng0);
    t61 = ((char*)((ng5)));
    t74 = (t1 + 16248);
    xsi_vlogvar_assign_value(t74, t61, 0, 0, 32);

LAB489:    t4 = (t1 + 16248);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_leq(t7, 32, t8, 32, t9, 32);
    t16 = (t7 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB490;

LAB491:    goto LAB487;

LAB490:    xsi_set_current_line(948, ng0);

LAB492:    xsi_set_current_line(949, ng0);
    t18 = (t1 + 16088);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    t34 = (t1 + 15928);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t32, 32, t41, 32);
    t47 = ((char*)((ng75)));
    memset(t33, 0, 8);
    xsi_vlog_signed_multiply(t33, 32, t17, 32, t47, 32);
    t48 = ((char*)((ng86)));
    t49 = (t1 + 16248);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t46, 0, 8);
    xsi_vlog_signed_minus(t46, 32, t48, 32, t51, 32);
    t58 = ((char*)((ng54)));
    memset(t59, 0, 8);
    xsi_vlog_signed_multiply(t59, 32, t46, 32, t58, 32);
    memset(t75, 0, 8);
    xsi_vlog_signed_add(t75, 32, t33, 32, t59, 32);
    t60 = (t1 + 13368);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    memset(t83, 0, 8);
    xsi_vlog_signed_minus(t83, 32, t75, 32, t74, 32);
    t76 = ((char*)((ng54)));
    memset(t121, 0, 8);
    xsi_vlog_signed_less(t121, 32, t83, 32, t76, 32);
    t82 = (t121 + 4);
    t15 = *((unsigned int *)t82);
    t20 = (~(t15));
    t21 = *((unsigned int *)t121);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB493;

LAB494:
LAB495:    xsi_set_current_line(947, ng0);
    t4 = (t1 + 16248);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 16248);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB489;

LAB493:    xsi_set_current_line(950, ng0);
    t87 = (t1 + 15288);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t97 = (t1 + 576);
    xsi_vlogfile_fwrite(*((unsigned int *)t89), 0, 0, 1, ng87, 1, t97);
    goto LAB495;

LAB498:    xsi_set_current_line(957, ng0);

LAB500:    xsi_set_current_line(958, ng0);
    t18 = (t1 + 15128);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t32));
    t34 = (t17 + 4);
    *((int *)t34) = 0;
    t40 = (t1 + 15448);
    xsi_vlogvar_assign_value(t40, t17, 0, 0, 32);
    xsi_set_current_line(960, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB502;

LAB501:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB502;

LAB505:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB504;

LAB503:    *((unsigned int *)t7) = 1;

LAB504:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB506;

LAB507:    if (*((unsigned int *)t32) != 0)
        goto LAB508;

LAB509:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB510;

LAB511:    memcpy(t59, t17, 8);

LAB512:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB525;

LAB526:    xsi_set_current_line(962, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB529;

LAB528:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB529;

LAB532:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB531;

LAB530:    *((unsigned int *)t7) = 1;

LAB531:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB533;

LAB534:    if (*((unsigned int *)t32) != 0)
        goto LAB535;

LAB536:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB537;

LAB538:    memcpy(t59, t17, 8);

LAB539:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB552;

LAB553:    xsi_set_current_line(964, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB556;

LAB555:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB556;

LAB559:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB558;

LAB557:    *((unsigned int *)t7) = 1;

LAB558:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB560;

LAB561:    if (*((unsigned int *)t32) != 0)
        goto LAB562;

LAB563:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB564;

LAB565:    memcpy(t59, t17, 8);

LAB566:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB579;

LAB580:    xsi_set_current_line(967, ng0);

LAB582:    xsi_set_current_line(968, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(969, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);
    xsi_set_current_line(970, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(971, ng0);
    goto LAB102;

LAB502:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB504;

LAB506:    *((unsigned int *)t17) = 1;
    goto LAB509;

LAB508:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB509;

LAB510:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB514;

LAB513:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB514;

LAB517:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB516;

LAB515:    *((unsigned int *)t33) = 1;

LAB516:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB518;

LAB519:    if (*((unsigned int *)t60) != 0)
        goto LAB520;

LAB521:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB522;

LAB523:
LAB524:    goto LAB512;

LAB514:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB516;

LAB518:    *((unsigned int *)t46) = 1;
    goto LAB521;

LAB520:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB521;

LAB522:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB524;

LAB525:    xsi_set_current_line(961, ng0);
    t97 = (t1 + 15448);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng60)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    t118 = (t1 + 13848);
    xsi_vlogvar_assign_value(t118, t75, 0, 0, 4);

LAB527:    xsi_set_current_line(974, ng0);
    t4 = (t1 + 16088);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 15928);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t8, 32, t18, 32);
    t19 = ((char*)((ng75)));
    memset(t17, 0, 8);
    xsi_vlog_signed_multiply(t17, 32, t7, 32, t19, 32);
    t32 = ((char*)((ng86)));
    t34 = (t1 + 16248);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    memset(t33, 0, 8);
    xsi_vlog_signed_minus(t33, 32, t32, 32, t41, 32);
    t47 = ((char*)((ng54)));
    memset(t46, 0, 8);
    xsi_vlog_signed_multiply(t46, 32, t33, 32, t47, 32);
    memset(t59, 0, 8);
    xsi_vlog_signed_add(t59, 32, t17, 32, t46, 32);
    t48 = (t1 + 13368);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t75, 0, 8);
    xsi_vlog_signed_minus(t75, 32, t59, 32, t50, 32);
    t51 = ((char*)((ng54)));
    memset(t83, 0, 8);
    xsi_vlog_signed_less(t83, 32, t75, 32, t51, 32);
    t58 = (t83 + 4);
    t10 = *((unsigned int *)t58);
    t11 = (~(t10));
    t12 = *((unsigned int *)t83);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB584;

LAB585:
LAB586:    xsi_set_current_line(976, ng0);
    t4 = (t1 + 17848);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng67)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 13848);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t19, 4);
    t32 = (t1 + 17848);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 32);
    xsi_set_current_line(978, ng0);
    t4 = (t1 + 16248);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t8, 32, t9, 32);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t7, 32, t16, 32);
    t18 = (t17 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB587;

LAB588:
LAB589:    xsi_set_current_line(956, ng0);
    t4 = (t1 + 16248);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 16248);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB497;

LAB529:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB531;

LAB533:    *((unsigned int *)t17) = 1;
    goto LAB536;

LAB535:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB536;

LAB537:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB541;

LAB540:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB541;

LAB544:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB543;

LAB542:    *((unsigned int *)t33) = 1;

LAB543:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB545;

LAB546:    if (*((unsigned int *)t60) != 0)
        goto LAB547;

LAB548:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB549;

LAB550:
LAB551:    goto LAB539;

LAB541:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB543;

LAB545:    *((unsigned int *)t46) = 1;
    goto LAB548;

LAB547:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB548;

LAB549:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB551;

LAB552:    xsi_set_current_line(963, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng63)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB554:    goto LAB527;

LAB556:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB558;

LAB560:    *((unsigned int *)t17) = 1;
    goto LAB563;

LAB562:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB563;

LAB564:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB568;

LAB567:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB568;

LAB571:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB570;

LAB569:    *((unsigned int *)t33) = 1;

LAB570:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB572;

LAB573:    if (*((unsigned int *)t60) != 0)
        goto LAB574;

LAB575:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB576;

LAB577:
LAB578:    goto LAB566;

LAB568:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB570;

LAB572:    *((unsigned int *)t46) = 1;
    goto LAB575;

LAB574:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB575;

LAB576:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB578;

LAB579:    xsi_set_current_line(965, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng66)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB581:    goto LAB554;

LAB583:    goto LAB581;

LAB584:    xsi_set_current_line(975, ng0);
    t60 = (t1 + 15288);
    t61 = (t60 + 56U);
    t74 = *((char **)t61);
    t76 = (t1 + 13848);
    t82 = (t76 + 56U);
    t87 = *((char **)t82);
    t88 = (t1 + 576);
    xsi_vlogfile_fwrite(*((unsigned int *)t74), 0, 0, 1, ng88, 2, t88, (char)118, t87, 4);
    goto LAB586;

LAB587:    xsi_set_current_line(979, ng0);

LAB590:    xsi_set_current_line(980, ng0);
    t19 = (t1 + 18008);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = (t1 + 17848);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t34, 32, t47, 32);
    t48 = (t1 + 18008);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(981, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB589;

LAB594:    xsi_set_current_line(1005, ng0);

LAB596:    xsi_set_current_line(1006, ng0);
    t34 = (t1 + 15128);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    *((int *)t33) = xsi_vlogfile_fgetc(*((unsigned int *)t41));
    t47 = (t33 + 4);
    *((int *)t47) = 0;
    t48 = (t1 + 15448);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(1008, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB598;

LAB597:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB598;

LAB601:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB600;

LAB599:    *((unsigned int *)t7) = 1;

LAB600:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB602;

LAB603:    if (*((unsigned int *)t32) != 0)
        goto LAB604;

LAB605:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB606;

LAB607:    memcpy(t59, t17, 8);

LAB608:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB621;

LAB622:    xsi_set_current_line(1010, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB625;

LAB624:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB625;

LAB628:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB627;

LAB626:    *((unsigned int *)t7) = 1;

LAB627:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB629;

LAB630:    if (*((unsigned int *)t32) != 0)
        goto LAB631;

LAB632:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB633;

LAB634:    memcpy(t59, t17, 8);

LAB635:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB648;

LAB649:    xsi_set_current_line(1012, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB652;

LAB651:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB652;

LAB655:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB654;

LAB653:    *((unsigned int *)t7) = 1;

LAB654:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB656;

LAB657:    if (*((unsigned int *)t32) != 0)
        goto LAB658;

LAB659:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB660;

LAB661:    memcpy(t59, t17, 8);

LAB662:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB675;

LAB676:    xsi_set_current_line(1015, ng0);

LAB678:    xsi_set_current_line(1016, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1017, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);
    xsi_set_current_line(1018, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1019, ng0);
    goto LAB102;

LAB598:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB600;

LAB602:    *((unsigned int *)t17) = 1;
    goto LAB605;

LAB604:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB605;

LAB606:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB610;

LAB609:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB610;

LAB613:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB612;

LAB611:    *((unsigned int *)t33) = 1;

LAB612:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB614;

LAB615:    if (*((unsigned int *)t60) != 0)
        goto LAB616;

LAB617:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB618;

LAB619:
LAB620:    goto LAB608;

LAB610:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB612;

LAB614:    *((unsigned int *)t46) = 1;
    goto LAB617;

LAB616:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB617;

LAB618:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB620;

LAB621:    xsi_set_current_line(1009, ng0);
    t97 = (t1 + 15448);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng60)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    t118 = (t1 + 13848);
    xsi_vlogvar_assign_value(t118, t75, 0, 0, 4);

LAB623:    xsi_set_current_line(1022, ng0);
    t4 = (t1 + 16568);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng91)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 13848);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t19, 4);
    t32 = (t1 + 16568);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 32);
    xsi_set_current_line(1023, ng0);
    t4 = (t1 + 17848);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng67)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 13848);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t19, 4);
    t32 = (t1 + 17848);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 32);
    xsi_set_current_line(1025, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t8, 32, t9, 32);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t7, 32, t16, 32);
    t18 = (t17 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB680;

LAB681:
LAB682:    xsi_set_current_line(1004, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 15768);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB593;

LAB625:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB627;

LAB629:    *((unsigned int *)t17) = 1;
    goto LAB632;

LAB631:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB632;

LAB633:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB637;

LAB636:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB637;

LAB640:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB639;

LAB638:    *((unsigned int *)t33) = 1;

LAB639:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB641;

LAB642:    if (*((unsigned int *)t60) != 0)
        goto LAB643;

LAB644:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB645;

LAB646:
LAB647:    goto LAB635;

LAB637:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB639;

LAB641:    *((unsigned int *)t46) = 1;
    goto LAB644;

LAB643:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB644;

LAB645:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB647;

LAB648:    xsi_set_current_line(1011, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng63)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB650:    goto LAB623;

LAB652:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB654;

LAB656:    *((unsigned int *)t17) = 1;
    goto LAB659;

LAB658:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB659;

LAB660:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB664;

LAB663:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB664;

LAB667:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB666;

LAB665:    *((unsigned int *)t33) = 1;

LAB666:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB668;

LAB669:    if (*((unsigned int *)t60) != 0)
        goto LAB670;

LAB671:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB672;

LAB673:
LAB674:    goto LAB662;

LAB664:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB666;

LAB668:    *((unsigned int *)t46) = 1;
    goto LAB671;

LAB670:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB671;

LAB672:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB674;

LAB675:    xsi_set_current_line(1013, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng66)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB677:    goto LAB650;

LAB679:    goto LAB677;

LAB680:    xsi_set_current_line(1026, ng0);

LAB683:    xsi_set_current_line(1027, ng0);
    t19 = (t1 + 18008);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = (t1 + 17848);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t34, 32, t47, 32);
    t48 = (t1 + 18008);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(1028, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB682;

LAB685:    xsi_set_current_line(1038, ng0);

LAB687:    xsi_set_current_line(1039, ng0);
    t34 = (t1 + 15128);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    *((int *)t33) = xsi_vlogfile_fgetc(*((unsigned int *)t41));
    t47 = (t33 + 4);
    *((int *)t47) = 0;
    t48 = (t1 + 15448);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(1041, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB689;

LAB688:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB689;

LAB692:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB691;

LAB690:    *((unsigned int *)t7) = 1;

LAB691:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB693;

LAB694:    if (*((unsigned int *)t32) != 0)
        goto LAB695;

LAB696:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB697;

LAB698:    memcpy(t59, t17, 8);

LAB699:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB712;

LAB713:    xsi_set_current_line(1043, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB716;

LAB715:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB716;

LAB719:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB718;

LAB717:    *((unsigned int *)t7) = 1;

LAB718:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB720;

LAB721:    if (*((unsigned int *)t32) != 0)
        goto LAB722;

LAB723:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB724;

LAB725:    memcpy(t59, t17, 8);

LAB726:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB739;

LAB740:    xsi_set_current_line(1045, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB743;

LAB742:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB743;

LAB746:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB745;

LAB744:    *((unsigned int *)t7) = 1;

LAB745:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB747;

LAB748:    if (*((unsigned int *)t32) != 0)
        goto LAB749;

LAB750:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB751;

LAB752:    memcpy(t59, t17, 8);

LAB753:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB766;

LAB767:    xsi_set_current_line(1048, ng0);

LAB769:    xsi_set_current_line(1049, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1050, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);
    xsi_set_current_line(1051, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1052, ng0);
    goto LAB102;

LAB689:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB691;

LAB693:    *((unsigned int *)t17) = 1;
    goto LAB696;

LAB695:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB696;

LAB697:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB701;

LAB700:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB701;

LAB704:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB703;

LAB702:    *((unsigned int *)t33) = 1;

LAB703:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB705;

LAB706:    if (*((unsigned int *)t60) != 0)
        goto LAB707;

LAB708:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB709;

LAB710:
LAB711:    goto LAB699;

LAB701:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB703;

LAB705:    *((unsigned int *)t46) = 1;
    goto LAB708;

LAB707:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB708;

LAB709:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB711;

LAB712:    xsi_set_current_line(1042, ng0);
    t97 = (t1 + 15448);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng60)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    t118 = (t1 + 13848);
    xsi_vlogvar_assign_value(t118, t75, 0, 0, 4);

LAB714:    xsi_set_current_line(1054, ng0);
    t4 = (t1 + 17848);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng67)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 13848);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t19, 4);
    t32 = (t1 + 17848);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 32);
    xsi_set_current_line(1056, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t8, 32, t9, 32);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t7, 32, t16, 32);
    t18 = (t17 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB771;

LAB772:
LAB773:    xsi_set_current_line(1037, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 15768);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB684;

LAB716:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB718;

LAB720:    *((unsigned int *)t17) = 1;
    goto LAB723;

LAB722:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB723;

LAB724:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB728;

LAB727:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB728;

LAB731:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB730;

LAB729:    *((unsigned int *)t33) = 1;

LAB730:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB732;

LAB733:    if (*((unsigned int *)t60) != 0)
        goto LAB734;

LAB735:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB736;

LAB737:
LAB738:    goto LAB726;

LAB728:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB730;

LAB732:    *((unsigned int *)t46) = 1;
    goto LAB735;

LAB734:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB735;

LAB736:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB738;

LAB739:    xsi_set_current_line(1044, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng63)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB741:    goto LAB714;

LAB743:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB745;

LAB747:    *((unsigned int *)t17) = 1;
    goto LAB750;

LAB749:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB750;

LAB751:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB755;

LAB754:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB755;

LAB758:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB757;

LAB756:    *((unsigned int *)t33) = 1;

LAB757:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB759;

LAB760:    if (*((unsigned int *)t60) != 0)
        goto LAB761;

LAB762:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB763;

LAB764:
LAB765:    goto LAB753;

LAB755:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB757;

LAB759:    *((unsigned int *)t46) = 1;
    goto LAB762;

LAB761:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB762;

LAB763:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB765;

LAB766:    xsi_set_current_line(1046, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng66)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB768:    goto LAB741;

LAB770:    goto LAB768;

LAB771:    xsi_set_current_line(1057, ng0);

LAB774:    xsi_set_current_line(1058, ng0);
    t19 = (t1 + 18008);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = (t1 + 17848);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t34, 32, t47, 32);
    t48 = (t1 + 18008);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(1059, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB773;

LAB777:    xsi_set_current_line(1069, ng0);

LAB779:    xsi_set_current_line(1070, ng0);
    t34 = (t1 + 15128);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    *((int *)t33) = xsi_vlogfile_fgetc(*((unsigned int *)t41));
    t47 = (t33 + 4);
    *((int *)t47) = 0;
    t48 = (t1 + 15448);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(1072, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB781;

LAB780:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB781;

LAB784:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB783;

LAB782:    *((unsigned int *)t7) = 1;

LAB783:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB785;

LAB786:    if (*((unsigned int *)t32) != 0)
        goto LAB787;

LAB788:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB789;

LAB790:    memcpy(t59, t17, 8);

LAB791:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB804;

LAB805:    xsi_set_current_line(1074, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB808;

LAB807:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB808;

LAB811:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB810;

LAB809:    *((unsigned int *)t7) = 1;

LAB810:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB812;

LAB813:    if (*((unsigned int *)t32) != 0)
        goto LAB814;

LAB815:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB816;

LAB817:    memcpy(t59, t17, 8);

LAB818:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB831;

LAB832:    xsi_set_current_line(1076, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB835;

LAB834:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB835;

LAB838:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB837;

LAB836:    *((unsigned int *)t7) = 1;

LAB837:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB839;

LAB840:    if (*((unsigned int *)t32) != 0)
        goto LAB841;

LAB842:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB843;

LAB844:    memcpy(t59, t17, 8);

LAB845:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB858;

LAB859:    xsi_set_current_line(1079, ng0);

LAB861:    xsi_set_current_line(1080, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1081, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);
    xsi_set_current_line(1082, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1083, ng0);
    goto LAB102;

LAB781:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB783;

LAB785:    *((unsigned int *)t17) = 1;
    goto LAB788;

LAB787:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB788;

LAB789:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB793;

LAB792:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB793;

LAB796:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB795;

LAB794:    *((unsigned int *)t33) = 1;

LAB795:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB797;

LAB798:    if (*((unsigned int *)t60) != 0)
        goto LAB799;

LAB800:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB801;

LAB802:
LAB803:    goto LAB791;

LAB793:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB795;

LAB797:    *((unsigned int *)t46) = 1;
    goto LAB800;

LAB799:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB800;

LAB801:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB803;

LAB804:    xsi_set_current_line(1073, ng0);
    t97 = (t1 + 15448);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng60)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    t118 = (t1 + 13848);
    xsi_vlogvar_assign_value(t118, t75, 0, 0, 4);

LAB806:    xsi_set_current_line(1086, ng0);
    t4 = (t1 + 16568);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng91)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 13848);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t19, 4);
    t32 = (t1 + 16568);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 32);
    xsi_set_current_line(1087, ng0);
    t4 = (t1 + 17848);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng67)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 13848);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t19, 4);
    t32 = (t1 + 17848);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 32);
    xsi_set_current_line(1089, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t8, 32, t9, 32);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t7, 32, t16, 32);
    t18 = (t17 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB863;

LAB864:
LAB865:    xsi_set_current_line(1068, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 15768);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB776;

LAB808:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB810;

LAB812:    *((unsigned int *)t17) = 1;
    goto LAB815;

LAB814:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB815;

LAB816:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB820;

LAB819:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB820;

LAB823:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB822;

LAB821:    *((unsigned int *)t33) = 1;

LAB822:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB824;

LAB825:    if (*((unsigned int *)t60) != 0)
        goto LAB826;

LAB827:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB828;

LAB829:
LAB830:    goto LAB818;

LAB820:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB822;

LAB824:    *((unsigned int *)t46) = 1;
    goto LAB827;

LAB826:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB827;

LAB828:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB830;

LAB831:    xsi_set_current_line(1075, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng63)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB833:    goto LAB806;

LAB835:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB837;

LAB839:    *((unsigned int *)t17) = 1;
    goto LAB842;

LAB841:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB842;

LAB843:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB847;

LAB846:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB847;

LAB850:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB849;

LAB848:    *((unsigned int *)t33) = 1;

LAB849:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB851;

LAB852:    if (*((unsigned int *)t60) != 0)
        goto LAB853;

LAB854:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB855;

LAB856:
LAB857:    goto LAB845;

LAB847:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB849;

LAB851:    *((unsigned int *)t46) = 1;
    goto LAB854;

LAB853:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB854;

LAB855:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB857;

LAB858:    xsi_set_current_line(1077, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng66)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB860:    goto LAB833;

LAB862:    goto LAB860;

LAB863:    xsi_set_current_line(1090, ng0);

LAB866:    xsi_set_current_line(1091, ng0);
    t19 = (t1 + 18008);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = (t1 + 17848);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t34, 32, t47, 32);
    t48 = (t1 + 18008);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(1092, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB865;

LAB868:    xsi_set_current_line(1102, ng0);

LAB870:    xsi_set_current_line(1103, ng0);
    t34 = (t1 + 15128);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    *((int *)t33) = xsi_vlogfile_fgetc(*((unsigned int *)t41));
    t47 = (t33 + 4);
    *((int *)t47) = 0;
    t48 = (t1 + 15448);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(1105, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB872;

LAB871:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB872;

LAB875:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB874;

LAB873:    *((unsigned int *)t7) = 1;

LAB874:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB876;

LAB877:    if (*((unsigned int *)t32) != 0)
        goto LAB878;

LAB879:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB880;

LAB881:    memcpy(t59, t17, 8);

LAB882:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB895;

LAB896:    xsi_set_current_line(1107, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB899;

LAB898:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB899;

LAB902:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB901;

LAB900:    *((unsigned int *)t7) = 1;

LAB901:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB903;

LAB904:    if (*((unsigned int *)t32) != 0)
        goto LAB905;

LAB906:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB907;

LAB908:    memcpy(t59, t17, 8);

LAB909:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB922;

LAB923:    xsi_set_current_line(1109, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB926;

LAB925:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB926;

LAB929:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB928;

LAB927:    *((unsigned int *)t7) = 1;

LAB928:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB930;

LAB931:    if (*((unsigned int *)t32) != 0)
        goto LAB932;

LAB933:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB934;

LAB935:    memcpy(t59, t17, 8);

LAB936:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB949;

LAB950:    xsi_set_current_line(1112, ng0);

LAB952:    xsi_set_current_line(1113, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1114, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);
    xsi_set_current_line(1115, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1116, ng0);
    goto LAB102;

LAB872:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB874;

LAB876:    *((unsigned int *)t17) = 1;
    goto LAB879;

LAB878:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB879;

LAB880:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB884;

LAB883:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB884;

LAB887:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB886;

LAB885:    *((unsigned int *)t33) = 1;

LAB886:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB888;

LAB889:    if (*((unsigned int *)t60) != 0)
        goto LAB890;

LAB891:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB892;

LAB893:
LAB894:    goto LAB882;

LAB884:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB886;

LAB888:    *((unsigned int *)t46) = 1;
    goto LAB891;

LAB890:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB891;

LAB892:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB894;

LAB895:    xsi_set_current_line(1106, ng0);
    t97 = (t1 + 15448);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng60)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t111, 32, t117, 32);
    t118 = (t1 + 13848);
    xsi_vlogvar_assign_value(t118, t75, 0, 0, 4);

LAB897:    xsi_set_current_line(1118, ng0);
    t4 = (t1 + 17848);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng67)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 13848);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t7, 32, t19, 4);
    t32 = (t1 + 17848);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 32);
    xsi_set_current_line(1120, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng72)));
    memset(t7, 0, 8);
    xsi_vlog_signed_mod(t7, 32, t8, 32, t9, 32);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_equal(t17, 32, t7, 32, t16, 32);
    t18 = (t17 + 4);
    t10 = *((unsigned int *)t18);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB954;

LAB955:
LAB956:    xsi_set_current_line(1101, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 15768);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB867;

LAB899:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB901;

LAB903:    *((unsigned int *)t17) = 1;
    goto LAB906;

LAB905:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB906;

LAB907:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB911;

LAB910:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB911;

LAB914:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB913;

LAB912:    *((unsigned int *)t33) = 1;

LAB913:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB915;

LAB916:    if (*((unsigned int *)t60) != 0)
        goto LAB917;

LAB918:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB919;

LAB920:
LAB921:    goto LAB909;

LAB911:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB913;

LAB915:    *((unsigned int *)t46) = 1;
    goto LAB918;

LAB917:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB918;

LAB919:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB921;

LAB922:    xsi_set_current_line(1108, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng63)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB924:    goto LAB897;

LAB926:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB928;

LAB930:    *((unsigned int *)t17) = 1;
    goto LAB933;

LAB932:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB933;

LAB934:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB938;

LAB937:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB938;

LAB941:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB940;

LAB939:    *((unsigned int *)t33) = 1;

LAB940:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB942;

LAB943:    if (*((unsigned int *)t60) != 0)
        goto LAB944;

LAB945:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB946;

LAB947:
LAB948:    goto LAB936;

LAB938:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB940;

LAB942:    *((unsigned int *)t46) = 1;
    goto LAB945;

LAB944:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB945;

LAB946:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB948;

LAB949:    xsi_set_current_line(1110, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 15448);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng66)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 13848);
    xsi_vlogvar_assign_value(t119, t83, 0, 0, 4);

LAB951:    goto LAB924;

LAB953:    goto LAB951;

LAB954:    xsi_set_current_line(1121, ng0);

LAB957:    xsi_set_current_line(1122, ng0);
    t19 = (t1 + 18008);
    t32 = (t19 + 56U);
    t34 = *((char **)t32);
    t40 = (t1 + 17848);
    t41 = (t40 + 56U);
    t47 = *((char **)t41);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t34, 32, t47, 32);
    t48 = (t1 + 18008);
    xsi_vlogvar_assign_value(t48, t33, 0, 0, 32);
    xsi_set_current_line(1123, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 17848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB956;

LAB960:    xsi_set_current_line(1135, ng0);

LAB962:    xsi_set_current_line(1136, ng0);
    t18 = (t1 + 15128);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    *((int *)t17) = xsi_vlogfile_fgetc(*((unsigned int *)t32));
    t34 = (t17 + 4);
    *((int *)t34) = 0;
    t40 = (t1 + 15448);
    xsi_vlogvar_assign_value(t40, t17, 0, 0, 32);
    xsi_set_current_line(1138, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng58)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB964;

LAB963:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB964;

LAB967:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB966;

LAB965:    *((unsigned int *)t7) = 1;

LAB966:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB968;

LAB969:    if (*((unsigned int *)t32) != 0)
        goto LAB970;

LAB971:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB972;

LAB973:    memcpy(t59, t17, 8);

LAB974:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB987;

LAB988:    xsi_set_current_line(1140, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB991;

LAB990:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB991;

LAB994:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB993;

LAB992:    *((unsigned int *)t7) = 1;

LAB993:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB995;

LAB996:    if (*((unsigned int *)t32) != 0)
        goto LAB997;

LAB998:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB999;

LAB1000:    memcpy(t59, t17, 8);

LAB1001:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB1014;

LAB1015:    xsi_set_current_line(1142, ng0);
    t4 = (t1 + 15448);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng64)));
    memset(t7, 0, 8);
    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB1018;

LAB1017:    t18 = (t9 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB1018;

LAB1021:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB1020;

LAB1019:    *((unsigned int *)t7) = 1;

LAB1020:    memset(t17, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB1022;

LAB1023:    if (*((unsigned int *)t32) != 0)
        goto LAB1024;

LAB1025:    t40 = (t17 + 4);
    t15 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t40);
    t21 = (t15 || t20);
    if (t21 > 0)
        goto LAB1026;

LAB1027:    memcpy(t59, t17, 8);

LAB1028:    t89 = (t59 + 4);
    t66 = *((unsigned int *)t89);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB1041;

LAB1042:    xsi_set_current_line(1145, ng0);

LAB1044:    xsi_set_current_line(1146, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1147, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng84, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);
    xsi_set_current_line(1148, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 14168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(1149, ng0);
    goto LAB102;

LAB964:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB966;

LAB968:    *((unsigned int *)t17) = 1;
    goto LAB971;

LAB970:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB971;

LAB972:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng59)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB976;

LAB975:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB976;

LAB979:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB978;

LAB977:    *((unsigned int *)t33) = 1;

LAB978:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB980;

LAB981:    if (*((unsigned int *)t60) != 0)
        goto LAB982;

LAB983:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB984;

LAB985:
LAB986:    goto LAB974;

LAB976:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB978;

LAB980:    *((unsigned int *)t46) = 1;
    goto LAB983;

LAB982:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB983;

LAB984:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB986;

LAB987:    xsi_set_current_line(1139, ng0);
    t97 = (t1 + 17368);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t111, 32, t117, 32);
    t118 = (t1 + 15448);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t124 = ((char*)((ng60)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t120, 32, t124, 32);
    memset(t121, 0, 8);
    xsi_vlog_unsigned_add(t121, 32, t75, 32, t83, 32);
    t125 = (t1 + 17368);
    xsi_vlogvar_assign_value(t125, t121, 0, 0, 32);

LAB989:    xsi_set_current_line(1134, ng0);
    t4 = (t1 + 15768);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t8, 32, t9, 32);
    t16 = (t1 + 15768);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    goto LAB959;

LAB991:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB993;

LAB995:    *((unsigned int *)t17) = 1;
    goto LAB998;

LAB997:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB998;

LAB999:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng62)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB1003;

LAB1002:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB1003;

LAB1006:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB1005;

LAB1004:    *((unsigned int *)t33) = 1;

LAB1005:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB1007;

LAB1008:    if (*((unsigned int *)t60) != 0)
        goto LAB1009;

LAB1010:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB1011;

LAB1012:
LAB1013:    goto LAB1001;

LAB1003:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB1005;

LAB1007:    *((unsigned int *)t46) = 1;
    goto LAB1010;

LAB1009:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB1010;

LAB1011:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB1013;

LAB1014:    xsi_set_current_line(1141, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 17368);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 15448);
    t120 = (t119 + 56U);
    t124 = *((char **)t120);
    t125 = ((char*)((ng63)));
    memset(t121, 0, 8);
    xsi_vlog_unsigned_minus(t121, 32, t124, 32, t125, 32);
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t83, 32, t121, 32);
    t126 = (t1 + 17368);
    xsi_vlogvar_assign_value(t126, t122, 0, 0, 32);

LAB1016:    goto LAB989;

LAB1018:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB1020;

LAB1022:    *((unsigned int *)t17) = 1;
    goto LAB1025;

LAB1024:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB1025;

LAB1026:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng65)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB1030;

LAB1029:    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB1030;

LAB1033:    if (*((unsigned int *)t48) > *((unsigned int *)t49))
        goto LAB1032;

LAB1031:    *((unsigned int *)t33) = 1;

LAB1032:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t22 = *((unsigned int *)t60);
    t23 = (~(t22));
    t24 = *((unsigned int *)t33);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB1034;

LAB1035:    if (*((unsigned int *)t60) != 0)
        goto LAB1036;

LAB1037:    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t46);
    t29 = (t27 & t28);
    *((unsigned int *)t59) = t29;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t30 = *((unsigned int *)t74);
    t31 = *((unsigned int *)t76);
    t35 = (t30 | t31);
    *((unsigned int *)t82) = t35;
    t36 = *((unsigned int *)t82);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB1038;

LAB1039:
LAB1040:    goto LAB1028;

LAB1030:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB1032;

LAB1034:    *((unsigned int *)t46) = 1;
    goto LAB1037;

LAB1036:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB1037;

LAB1038:    t38 = *((unsigned int *)t59);
    t39 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t38 | t39);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t87);
    t45 = (~(t44));
    t52 = *((unsigned int *)t46);
    t53 = (~(t52));
    t54 = *((unsigned int *)t88);
    t55 = (~(t54));
    t102 = (t43 & t45);
    t106 = (t53 & t55);
    t56 = (~(t102));
    t57 = (~(t106));
    t62 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t62 & t56);
    t63 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t63 & t57);
    t64 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t64 & t56);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t65 & t57);
    goto LAB1040;

LAB1041:    xsi_set_current_line(1143, ng0);
    t97 = ((char*)((ng24)));
    t98 = (t1 + 17368);
    t111 = (t98 + 56U);
    t117 = *((char **)t111);
    t118 = ((char*)((ng67)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t117, 32, t118, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t97, 32, t75, 32);
    t119 = (t1 + 15448);
    t120 = (t119 + 56U);
    t124 = *((char **)t120);
    t125 = ((char*)((ng66)));
    memset(t121, 0, 8);
    xsi_vlog_unsigned_minus(t121, 32, t124, 32, t125, 32);
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t83, 32, t121, 32);
    t126 = (t1 + 17368);
    xsi_vlogvar_assign_value(t126, t122, 0, 0, 32);

LAB1043:    goto LAB1016;

LAB1045:    goto LAB1043;

LAB1047:    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t7) = (t12 | t13);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t16);
    *((unsigned int *)t9) = (t14 | t15);
    goto LAB1046;

LAB1048:    t30 = *((unsigned int *)t33);
    t31 = *((unsigned int *)t40);
    *((unsigned int *)t33) = (t30 | t31);
    t41 = (t17 + 4);
    t47 = (t19 + 4);
    t35 = *((unsigned int *)t17);
    t36 = (~(t35));
    t37 = *((unsigned int *)t41);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t42 = (~(t39));
    t43 = *((unsigned int *)t47);
    t44 = (~(t43));
    t102 = (t36 & t38);
    t106 = (t42 & t44);
    t45 = (~(t102));
    t52 = (~(t106));
    t53 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t53 & t45);
    t54 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t54 & t52);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t45);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t52);
    goto LAB1050;

LAB1052:    *((unsigned int *)t46) = 1;
    goto LAB1054;

LAB1053:    t60 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB1054;

LAB1055:    xsi_set_current_line(1155, ng0);

LAB1058:    xsi_set_current_line(1156, ng0);
    t74 = ((char*)((ng5)));
    t76 = (t1 + 14328);
    xsi_vlogvar_assign_value(t76, t74, 0, 0, 1);
    xsi_set_current_line(1157, ng0);
    t4 = (t1 + 13208);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t1 + 18168);
    t16 = (t9 + 56U);
    t18 = *((char **)t16);
    t19 = (t1 + 576);
    xsi_vlogfile_write(1, 0, 0, ng98, 3, t19, (char)118, t8, 2048, (char)119, t18, 32);
    goto LAB1057;

LAB1061:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB1062;

LAB1063:    *((unsigned int *)t17) = 1;
    goto LAB1066;

LAB1065:    t34 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB1066;

LAB1067:    t41 = (t1 + 15448);
    t47 = (t41 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng25)));
    memset(t33, 0, 8);
    t50 = (t48 + 4);
    t51 = (t49 + 4);
    t38 = *((unsigned int *)t48);
    t39 = *((unsigned int *)t49);
    t42 = (t38 ^ t39);
    t43 = *((unsigned int *)t50);
    t44 = *((unsigned int *)t51);
    t45 = (t43 ^ t44);
    t52 = (t42 | t45);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB1073;

LAB1070:    if (t55 != 0)
        goto LAB1072;

LAB1071:    *((unsigned int *)t33) = 1;

LAB1073:    memset(t46, 0, 8);
    t60 = (t33 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB1074;

LAB1075:    if (*((unsigned int *)t60) != 0)
        goto LAB1076;

LAB1077:    t67 = *((unsigned int *)t17);
    t68 = *((unsigned int *)t46);
    t69 = (t67 | t68);
    *((unsigned int *)t59) = t69;
    t74 = (t17 + 4);
    t76 = (t46 + 4);
    t82 = (t59 + 4);
    t70 = *((unsigned int *)t74);
    t71 = *((unsigned int *)t76);
    t72 = (t70 | t71);
    *((unsigned int *)t82) = t72;
    t73 = *((unsigned int *)t82);
    t77 = (t73 != 0);
    if (t77 == 1)
        goto LAB1078;

LAB1079:
LAB1080:    goto LAB1069;

LAB1072:    t58 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB1073;

LAB1074:    *((unsigned int *)t46) = 1;
    goto LAB1077;

LAB1076:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB1077;

LAB1078:    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t82);
    *((unsigned int *)t59) = (t78 | t79);
    t87 = (t17 + 4);
    t88 = (t46 + 4);
    t80 = *((unsigned int *)t87);
    t81 = (~(t80));
    t84 = *((unsigned int *)t17);
    t102 = (t84 & t81);
    t85 = *((unsigned int *)t88);
    t86 = (~(t85));
    t90 = *((unsigned int *)t46);
    t106 = (t90 & t86);
    t91 = (~(t102));
    t92 = (~(t106));
    t93 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t93 & t91);
    t94 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t94 & t92);
    goto LAB1080;

LAB1081:    xsi_set_current_line(1162, ng0);

LAB1084:    xsi_set_current_line(1163, ng0);
    t97 = (t1 + 18168);
    t98 = (t97 + 56U);
    t111 = *((char **)t98);
    t117 = ((char*)((ng5)));
    memset(t75, 0, 8);
    xsi_vlog_signed_add(t75, 32, t111, 32, t117, 32);
    t118 = (t1 + 18168);
    xsi_vlogvar_assign_value(t118, t75, 0, 0, 32);
    goto LAB1083;

LAB1087:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB1088;

LAB1089:    xsi_set_current_line(1166, ng0);

LAB1092:    goto LAB1091;

}

static int sp_convert_to_ver_file(char *t1, char *t2)
{
    char t5[8];
    char t18[8];
    char t34[8];
    char t47[8];
    char t60[8];
    char t76[8];
    char t84[8];
    char t112[8];
    char t125[8];
    char t138[8];
    char t154[8];
    char t162[8];
    char t190[8];
    char t203[8];
    char t216[8];
    char t232[8];
    char t240[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t204;
    char *t205;
    char *t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    char *t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    char *t275;
    char *t276;
    char *t277;
    char *t278;
    char *t279;
    char *t280;
    char *t281;
    char *t282;
    char *t283;
    char *t284;
    char *t285;
    char *t286;
    char *t287;
    char *t288;
    char *t289;
    char *t290;
    char *t291;
    char *t292;
    char *t293;
    char *t294;
    char *t295;
    char *t296;
    char *t297;
    int t298;
    char *t299;
    char *t300;
    char *t301;
    char *t302;
    char *t303;
    char *t304;
    char *t305;
    char *t306;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2736);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(1189, ng0);

LAB5:    xsi_set_current_line(1191, ng0);
    t6 = (t1 + 18488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 4294967295U);
    t17 = ((char*)((ng80)));
    memset(t18, 0, 8);
    t19 = (t5 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB9;

LAB6:    if (t30 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t18) = 1;

LAB9:    memset(t34, 0, 8);
    t35 = (t18 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t18);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t35) != 0)
        goto LAB12;

LAB13:    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = (!(t43));
    t45 = *((unsigned int *)t42);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB14;

LAB15:    memcpy(t84, t34, 8);

LAB16:    memset(t112, 0, 8);
    t113 = (t84 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t84);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t113) != 0)
        goto LAB30;

LAB31:    t120 = (t112 + 4);
    t121 = *((unsigned int *)t112);
    t122 = (!(t121));
    t123 = *((unsigned int *)t120);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB32;

LAB33:    memcpy(t162, t112, 8);

LAB34:    memset(t190, 0, 8);
    t191 = (t162 + 4);
    t192 = *((unsigned int *)t191);
    t193 = (~(t192));
    t194 = *((unsigned int *)t162);
    t195 = (t194 & t193);
    t196 = (t195 & 1U);
    if (t196 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t191) != 0)
        goto LAB48;

LAB49:    t198 = (t190 + 4);
    t199 = *((unsigned int *)t190);
    t200 = (!(t199));
    t201 = *((unsigned int *)t198);
    t202 = (t200 || t201);
    if (t202 > 0)
        goto LAB50;

LAB51:    memcpy(t240, t190, 8);

LAB52:    t268 = (t240 + 4);
    t269 = *((unsigned int *)t268);
    t270 = (~(t269));
    t271 = *((unsigned int *)t240);
    t272 = (t271 & t270);
    t273 = (t272 != 0);
    if (t273 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(1194, ng0);
    t4 = (t1 + 18488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t10 = ((char*)((ng13)));
    memset(t18, 0, 8);
    t17 = (t5 + 4);
    t19 = (t10 + 4);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t10);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t17);
    t25 = *((unsigned int *)t19);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t19);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB76;

LAB73:    if (t30 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t18) = 1;

LAB76:    memset(t34, 0, 8);
    t33 = (t18 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (~(t36));
    t38 = *((unsigned int *)t18);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t33) != 0)
        goto LAB79;

LAB80:    t41 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = (!(t43));
    t45 = *((unsigned int *)t41);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB81;

LAB82:    memcpy(t84, t34, 8);

LAB83:    t99 = (t84 + 4);
    t114 = *((unsigned int *)t99);
    t115 = (~(t114));
    t116 = *((unsigned int *)t84);
    t117 = (t116 & t115);
    t118 = (t117 != 0);
    if (t118 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(1197, ng0);
    t4 = (t1 + 18488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2736);
    xsi_vlogfile_write(1, 0, 0, ng100, 2, t8, (char)118, t7, 2048);

LAB97:
LAB66:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t34) = 1;
    goto LAB13;

LAB12:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB13;

LAB14:    t48 = (t1 + 18488);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t47, 0, 8);
    t51 = (t47 + 4);
    t52 = (t50 + 4);
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t47) = t54;
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 0);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t57 & 4294967295U);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t58 & 4294967295U);
    t59 = ((char*)((ng81)));
    memset(t60, 0, 8);
    t61 = (t47 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t47);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t61);
    t67 = *((unsigned int *)t62);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t62);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB20;

LAB17:    if (t72 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t60) = 1;

LAB20:    memset(t76, 0, 8);
    t77 = (t60 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t77) != 0)
        goto LAB23;

LAB24:    t85 = *((unsigned int *)t34);
    t86 = *((unsigned int *)t76);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = (t34 + 4);
    t89 = (t76 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t75 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t76) = 1;
    goto LAB24;

LAB23:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB24;

LAB25:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t34 + 4);
    t99 = (t76 + 4);
    t100 = *((unsigned int *)t98);
    t101 = (~(t100));
    t102 = *((unsigned int *)t34);
    t103 = (t102 & t101);
    t104 = *((unsigned int *)t99);
    t105 = (~(t104));
    t106 = *((unsigned int *)t76);
    t107 = (t106 & t105);
    t108 = (~(t103));
    t109 = (~(t107));
    t110 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t110 & t108);
    t111 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t111 & t109);
    goto LAB27;

LAB28:    *((unsigned int *)t112) = 1;
    goto LAB31;

LAB30:    t119 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB31;

LAB32:    t126 = (t1 + 18488);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memset(t125, 0, 8);
    t129 = (t125 + 4);
    t130 = (t128 + 4);
    t131 = *((unsigned int *)t128);
    t132 = (t131 >> 0);
    *((unsigned int *)t125) = t132;
    t133 = *((unsigned int *)t130);
    t134 = (t133 >> 0);
    *((unsigned int *)t129) = t134;
    t135 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t135 & 4294967295U);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 & 4294967295U);
    t137 = ((char*)((ng9)));
    memset(t138, 0, 8);
    t139 = (t125 + 4);
    t140 = (t137 + 4);
    t141 = *((unsigned int *)t125);
    t142 = *((unsigned int *)t137);
    t143 = (t141 ^ t142);
    t144 = *((unsigned int *)t139);
    t145 = *((unsigned int *)t140);
    t146 = (t144 ^ t145);
    t147 = (t143 | t146);
    t148 = *((unsigned int *)t139);
    t149 = *((unsigned int *)t140);
    t150 = (t148 | t149);
    t151 = (~(t150));
    t152 = (t147 & t151);
    if (t152 != 0)
        goto LAB38;

LAB35:    if (t150 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t138) = 1;

LAB38:    memset(t154, 0, 8);
    t155 = (t138 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t138);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t155) != 0)
        goto LAB41;

LAB42:    t163 = *((unsigned int *)t112);
    t164 = *((unsigned int *)t154);
    t165 = (t163 | t164);
    *((unsigned int *)t162) = t165;
    t166 = (t112 + 4);
    t167 = (t154 + 4);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t166);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB37:    t153 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t154) = 1;
    goto LAB42;

LAB41:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB42;

LAB43:    t174 = *((unsigned int *)t162);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t162) = (t174 | t175);
    t176 = (t112 + 4);
    t177 = (t154 + 4);
    t178 = *((unsigned int *)t176);
    t179 = (~(t178));
    t180 = *((unsigned int *)t112);
    t181 = (t180 & t179);
    t182 = *((unsigned int *)t177);
    t183 = (~(t182));
    t184 = *((unsigned int *)t154);
    t185 = (t184 & t183);
    t186 = (~(t181));
    t187 = (~(t185));
    t188 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t188 & t186);
    t189 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t189 & t187);
    goto LAB45;

LAB46:    *((unsigned int *)t190) = 1;
    goto LAB49;

LAB48:    t197 = (t190 + 4);
    *((unsigned int *)t190) = 1;
    *((unsigned int *)t197) = 1;
    goto LAB49;

LAB50:    t204 = (t1 + 18488);
    t205 = (t204 + 56U);
    t206 = *((char **)t205);
    memset(t203, 0, 8);
    t207 = (t203 + 4);
    t208 = (t206 + 4);
    t209 = *((unsigned int *)t206);
    t210 = (t209 >> 0);
    *((unsigned int *)t203) = t210;
    t211 = *((unsigned int *)t208);
    t212 = (t211 >> 0);
    *((unsigned int *)t207) = t212;
    t213 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t213 & 4294967295U);
    t214 = *((unsigned int *)t207);
    *((unsigned int *)t207) = (t214 & 4294967295U);
    t215 = ((char*)((ng10)));
    memset(t216, 0, 8);
    t217 = (t203 + 4);
    t218 = (t215 + 4);
    t219 = *((unsigned int *)t203);
    t220 = *((unsigned int *)t215);
    t221 = (t219 ^ t220);
    t222 = *((unsigned int *)t217);
    t223 = *((unsigned int *)t218);
    t224 = (t222 ^ t223);
    t225 = (t221 | t224);
    t226 = *((unsigned int *)t217);
    t227 = *((unsigned int *)t218);
    t228 = (t226 | t227);
    t229 = (~(t228));
    t230 = (t225 & t229);
    if (t230 != 0)
        goto LAB56;

LAB53:    if (t228 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t216) = 1;

LAB56:    memset(t232, 0, 8);
    t233 = (t216 + 4);
    t234 = *((unsigned int *)t233);
    t235 = (~(t234));
    t236 = *((unsigned int *)t216);
    t237 = (t236 & t235);
    t238 = (t237 & 1U);
    if (t238 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t233) != 0)
        goto LAB59;

LAB60:    t241 = *((unsigned int *)t190);
    t242 = *((unsigned int *)t232);
    t243 = (t241 | t242);
    *((unsigned int *)t240) = t243;
    t244 = (t190 + 4);
    t245 = (t232 + 4);
    t246 = (t240 + 4);
    t247 = *((unsigned int *)t244);
    t248 = *((unsigned int *)t245);
    t249 = (t247 | t248);
    *((unsigned int *)t246) = t249;
    t250 = *((unsigned int *)t246);
    t251 = (t250 != 0);
    if (t251 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    t231 = (t216 + 4);
    *((unsigned int *)t216) = 1;
    *((unsigned int *)t231) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t232) = 1;
    goto LAB60;

LAB59:    t239 = (t232 + 4);
    *((unsigned int *)t232) = 1;
    *((unsigned int *)t239) = 1;
    goto LAB60;

LAB61:    t252 = *((unsigned int *)t240);
    t253 = *((unsigned int *)t246);
    *((unsigned int *)t240) = (t252 | t253);
    t254 = (t190 + 4);
    t255 = (t232 + 4);
    t256 = *((unsigned int *)t254);
    t257 = (~(t256));
    t258 = *((unsigned int *)t190);
    t259 = (t258 & t257);
    t260 = *((unsigned int *)t255);
    t261 = (~(t260));
    t262 = *((unsigned int *)t232);
    t263 = (t262 & t261);
    t264 = (~(t259));
    t265 = (~(t263));
    t266 = *((unsigned int *)t246);
    *((unsigned int *)t246) = (t266 & t264);
    t267 = *((unsigned int *)t246);
    *((unsigned int *)t246) = (t267 & t265);
    goto LAB63;

LAB64:    xsi_set_current_line(1193, ng0);
    t274 = (t1 + 18488);
    t275 = (t274 + 56U);
    t276 = *((char **)t275);
    t277 = (t1 + 18648);
    t278 = (t277 + 56U);
    t279 = *((char **)t278);
    t280 = (t2 + 56U);
    t281 = *((char **)t280);
    t282 = (t2 + 56U);
    t283 = *((char **)t282);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t283, &&LAB67);
    t284 = (t2 + 56U);
    t285 = *((char **)t284);
    t286 = (t1 + 2304);
    t287 = xsi_create_subprogram_invocation(t285, 0, t1, t286, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t286, t287);
    t288 = (t1 + 13208);
    xsi_vlogvar_assign_value(t288, t276, 0, 0, 2048);
    t289 = (t1 + 13368);
    xsi_vlogvar_assign_value(t289, t279, 0, 0, 32);

LAB69:    t290 = (t2 + 64U);
    t291 = *((char **)t290);
    t292 = (t291 + 80U);
    t293 = *((char **)t292);
    t294 = (t293 + 272U);
    t295 = *((char **)t294);
    t296 = (t295 + 0U);
    t297 = *((char **)t296);
    t298 = ((int  (*)(char *, char *))t297)(t1, t291);
    if (t298 == -1)
        goto LAB70;

LAB71:    if (t298 != 0)
        goto LAB72;

LAB67:    t291 = (t1 + 2304);
    xsi_vlog_subprogram_popinvocation(t291);

LAB68:    t299 = (t2 + 64U);
    t300 = *((char **)t299);
    t299 = (t1 + 13528);
    t301 = (t299 + 56U);
    t302 = *((char **)t301);
    t303 = (t1 + 18808);
    xsi_vlogvar_assign_value(t303, t302, 0, 0, 2048);
    t304 = (t1 + 2304);
    t305 = (t2 + 56U);
    t306 = *((char **)t305);
    xsi_delete_subprogram_invocation(t304, t300, t1, t306, t2);
    goto LAB66;

LAB70:    t0 = -1;
    goto LAB1;

LAB72:    t290 = (t2 + 48U);
    *((char **)t290) = &&LAB69;
    goto LAB1;

LAB75:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t34) = 1;
    goto LAB80;

LAB79:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB80;

LAB81:    t42 = (t1 + 18488);
    t48 = (t42 + 56U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t50 = (t47 + 4);
    t51 = (t49 + 4);
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 0);
    *((unsigned int *)t47) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 0);
    *((unsigned int *)t50) = t56;
    t57 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t57 & 4294967295U);
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 4294967295U);
    t52 = ((char*)((ng14)));
    memset(t60, 0, 8);
    t59 = (t47 + 4);
    t61 = (t52 + 4);
    t63 = *((unsigned int *)t47);
    t64 = *((unsigned int *)t52);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t59);
    t67 = *((unsigned int *)t61);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t59);
    t71 = *((unsigned int *)t61);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB87;

LAB84:    if (t72 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t60) = 1;

LAB87:    memset(t76, 0, 8);
    t75 = (t60 + 4);
    t78 = *((unsigned int *)t75);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t75) != 0)
        goto LAB90;

LAB91:    t85 = *((unsigned int *)t34);
    t86 = *((unsigned int *)t76);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t83 = (t34 + 4);
    t88 = (t76 + 4);
    t89 = (t84 + 4);
    t91 = *((unsigned int *)t83);
    t92 = *((unsigned int *)t88);
    t93 = (t91 | t92);
    *((unsigned int *)t89) = t93;
    t94 = *((unsigned int *)t89);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB83;

LAB86:    t62 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t76) = 1;
    goto LAB91;

LAB90:    t77 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB91;

LAB92:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t89);
    *((unsigned int *)t84) = (t96 | t97);
    t90 = (t34 + 4);
    t98 = (t76 + 4);
    t100 = *((unsigned int *)t90);
    t101 = (~(t100));
    t102 = *((unsigned int *)t34);
    t103 = (t102 & t101);
    t104 = *((unsigned int *)t98);
    t105 = (~(t104));
    t106 = *((unsigned int *)t76);
    t107 = (t106 & t105);
    t108 = (~(t103));
    t109 = (~(t107));
    t110 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t110 & t108);
    t111 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t111 & t109);
    goto LAB94;

LAB95:    xsi_set_current_line(1195, ng0);
    t113 = (t1 + 18488);
    t119 = (t113 + 56U);
    t120 = *((char **)t119);
    t126 = (t1 + 18648);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    t129 = (t2 + 56U);
    t130 = *((char **)t129);
    t137 = (t2 + 56U);
    t139 = *((char **)t137);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t139, &&LAB98);
    t140 = (t2 + 56U);
    t153 = *((char **)t140);
    t155 = (t1 + 1872);
    t161 = xsi_create_subprogram_invocation(t153, 0, t1, t155, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t155, t161);
    t166 = (t1 + 4088);
    xsi_vlogvar_assign_value(t166, t120, 0, 0, 2048);
    t167 = (t1 + 4248);
    xsi_vlogvar_assign_value(t167, t128, 0, 0, 32);

LAB100:    t168 = (t2 + 64U);
    t176 = *((char **)t168);
    t177 = (t176 + 80U);
    t191 = *((char **)t177);
    t197 = (t191 + 272U);
    t198 = *((char **)t197);
    t204 = (t198 + 0U);
    t205 = *((char **)t204);
    t181 = ((int  (*)(char *, char *))t205)(t1, t176);
    if (t181 == -1)
        goto LAB101;

LAB102:    if (t181 != 0)
        goto LAB103;

LAB98:    t176 = (t1 + 1872);
    xsi_vlog_subprogram_popinvocation(t176);

LAB99:    t206 = (t2 + 64U);
    t207 = *((char **)t206);
    t206 = (t1 + 4408);
    t208 = (t206 + 56U);
    t215 = *((char **)t208);
    t217 = (t1 + 18808);
    xsi_vlogvar_assign_value(t217, t215, 0, 0, 2048);
    t218 = (t1 + 1872);
    t231 = (t2 + 56U);
    t233 = *((char **)t231);
    xsi_delete_subprogram_invocation(t218, t207, t1, t233, t2);
    goto LAB97;

LAB101:    t0 = -1;
    goto LAB1;

LAB103:    t168 = (t2 + 48U);
    *((char **)t168) = &&LAB100;
    goto LAB1;

}


extern void work_m_00000000002806491520_0502124244_init()
{
	static char *se[] = {(void *)sp_tolower,(void *)sp_convert_mif2ver,(void *)sp_convert_hex2ver,(void *)sp_convert_to_ver_file};
	xsi_register_didat("work_m_00000000002806491520_0502124244", "isim/stimulus_isim_beh.exe.sim/work/m_00000000002806491520_0502124244.didat");
	xsi_register_subprogram_executes(se);
}

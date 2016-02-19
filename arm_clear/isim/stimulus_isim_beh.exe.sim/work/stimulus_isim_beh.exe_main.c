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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001865854596_1700338143_init();
    work_m_00000000004188187428_0030831387_init();
    work_m_00000000002806491520_0502124244_init();
    work_m_00000000000979331672_2839739388_init();
    work_m_00000000000718434556_2032185554_init();
    work_m_00000000000979331672_0066966147_init();
    work_m_00000000002202943628_1151974483_init();
    work_m_00000000000309965515_0556555087_init();
    work_m_00000000002013452923_2073120511_init();


    xsi_register_tops("work_m_00000000000309965515_0556555087");
    xsi_register_tops("work_m_00000000002013452923_2073120511");


    return xsi_run_simulation(argc, argv);

}

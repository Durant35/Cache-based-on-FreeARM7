# Cache based on FreeARM7  

## 描述
　　本科二年级《计算机组成原理》上完成的一个课程项目，使用的开发环境是 **Xilinx ISE 12.3** 。基于 **FreeARM7** 开源项目提供的ARM内核构建32位处理器。通过ISE软件进行I-Cache和D-Cache的设计、实现、软件仿真与调试。并采用不同的 **Cache映射规则**、 **Cache替换策略**、 **D-Cache写策略**进行优化。  
　　本仓库仅用作代码保存与共享目的，想要了解本项目更多细节可以通过上述实验报告[<a href="12353022_陈胜杰_Cache.pdf">PDF</a>]获取。

## 目录介绍 
    . 
    ├── arm_clear		基于FreeARM7内核搭建的处理器(无Cache)ISE工程完整源代码  
    ├── arm_clear_cache		基于FreeARM7内核搭建的处理器(加入简单I-Cache)ISE工程完整源代码
    ├── Cache_v0 ………………………………………………………………………… 未进行优化的实现
    |   ├── D_Cache.v ……………………………………………………… D_Cache 模块.v 文件
    |   ├── dram_ctrl_sim.v ………………………………………………… dram controller 模块.v 文件
    |   ├── I_Cache.v ………………………………………………………… I_Cache 模块.v 文件
    |   ├── stimulus.v ………………………………………………………… 仿真测试文件
    ├── Cache_v1 ……………………………………………………………………… 进行优化的实现
    |   ├── D_Cache.v ……………………………………………………… D_Cache 模块.v 文件
    |   ├── dram_ctrl_sim.v ………………………………………………… dram controller 模块.v 文件
    |   ├── I_Cache.v ………………………………………………………… I_Cache 模块.v 文件
    |   ├── stimulus.v ………………………………………………………… 仿真测试文件
    ├── Test ……………………………………………………………………… 用于测试的测试用例
    |   ├── cache_test_512 …………………………………………………… 512 个随机数生成与排序(包括.c/.s/.mif文件)
    |   ├── cache_test_8096 ………………………………………………… 长度 8096 的数组简单赋值(包括.c/.s/.mif文件)
    |   ├── cache_test_high …………………………………………………… 8096 个随机数生成与排序(包括.c/.s/.mif文件) 
    ├── 【SoCVista】FreeARM7_文档.pdf		FreeARM7开源项目说明文档
	└── 12353022_陈胜杰_Cache.pdf		详细的试验实验报告

## 内容
<img src="/block diagram.png" width="800px">

+ 指令集设计，参考MIPS指令集。  
+ Datapath设计，参考上图，分模块实现。  
+ P(rogram)C(ounter)的计算，主要涉及跳转指令的处理。   
+ Instruction Memory和Data Memory的模拟仿真。

## 使用说明  
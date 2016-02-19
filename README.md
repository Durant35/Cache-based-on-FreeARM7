# Cache based on FreeARM7  

## 描述
　　本科二年级《计算机组成原理》上完成的一个课程项目，使用的开发环境是 **Xilinx ISE 12.3** 。基于 **FreeARM7** 开源项目提供的ARM内核构建32位处理器。通过ISE软件进行I-Cache和D-Cache的设计、实现、软件仿真与调试。并采用不同的 **Cache映射规则**、 **Cache替换策略**、 **D-Cache写策略**进行优化。  
　　本仓库仅用作代码保存与共享目的，想要了解本项目更多细节可以通过上述实验报告[<a href="12353022_陈胜杰_Cache.pdf">PDF</a>]获取。

## 目录介绍 
    . 
    ├── CPU		文件夹，ISE工程完整源代码  
    ├── 6-Datapath(1).pdf		《计算机组成原理》课程课件(版权归授课老师)，本项目主要参考资料(绝大部分)  
    ├── MIPS流水线CPU的verilog实现.pdf		阅读了解资料
    ├── MIPS体系结构透视.pdf		指令集设计参考资料
	└── MIPS体系结构与编程.pdf		指令集设计参考资料

## 内容
<img src="/block diagram.png" width="800px">

+ 指令集设计，参考MIPS指令集。  
+ Datapath设计，参考上图，分模块实现。  
+ P(rogram)C(ounter)的计算，主要涉及跳转指令的处理。   
+ Instruction Memory和Data Memory的模拟仿真。  
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
### FreeARM7系统结构
<p align="center"><img src=".readme/FreeARM7_Architecture.png"/></p>

### 编译器工作流程简图
<p align="center"><img src=".readme/Compiler_routine.png" style="text-align:center" width="600px"/></p>

### 代码流图
<p align="center"><img src=".readme/Flow_Chart.png"/></p>

### Cache映射规则
+ 直接映射规则，即对于内存中的任何一个数据，在 Cache 中有且只有一个块与之对应。实现中即是，对于一个内存地址，只对应于一个 Cache 索引。  
<p align="center"><img src=".readme/直接相联映射.png" style="text-align:center" width="500px"/></p>

+ 全相联，对于内存中的一个地址，对应于 Cache 中的任何一个位置，类似于将内存中的数据直接搬入 Cache，而 Cache 作为一个中转站。  
<p align="center"><img src=".readme/全相联映射.png" width="500px"/></p>

+ 组相联映射，结合了上述两种映射规则，一个内存地址索引到 Cache 的一个组，这里是直接映射；而具体到一个组的哪一个块则采用全相联的方式。  
<p align="center"><img src=".readme/二路组相联映射.png" width="500px"/></p>

+ 直接映射规则能够高效进行内存与 Cache 间数据的转移以及地址的转换， 而全相联则能提供一个较高的命中率。组相联映射，折中了二者的优点。

### Cache替换策略
　当 Cache 缺失，而缺失所在块(组)存在数据，我们需要一定策略选择一个替换块来存放我们从主存中载入的数据，以使我们在未来的指令操作中，竟可能减 Cache 缺失的可能。 
+ FIFO，先到先置换算法，在一开始我们实现的直接相连映射下的覆盖方式类似于这种方法；
+ 随机算法，即随机置换一个块；
+ 最近最少使用算法(LRU)，这一算法运用了程序时间局部性的原理，在置换的时候，选择组中最近不怎么使用的块，将其置换，可以竟可能达到满意的命中率。

### D-Cache写策略
　对于 D_Cache 的写操作，有两种比较常见的策略：
+ 写直达法，即向 D-Cache 写入数据时，直接将数据写入主存， 同时采用写不分配法， 写数据的时候不将写缺失块载入 Cache， 等到读缺失时再将其载入；
+ 写回法，向 D-Cache 写入数据时，采用写分配法，为其在 Cache 中分配空间，直接在 Cache 中写入数据，当其需要被置换时，再将其写入主存；
+ 这两种方法都能保持 Cache 与主存的一致性。

## 使用说明
+ 使用ISE软件打开 **`arm_clear_cache`** 工程
+ 使用 **`Cache_v?`** 文件夹下文件替换工程中相应文件
+ 将 **Test** 文件夹下各测试用例对应的 **.mif** 文件内容写入 **`arm_clear_cache`** 工程下的 **program.mif** 文件，对个测试用例进行测试  

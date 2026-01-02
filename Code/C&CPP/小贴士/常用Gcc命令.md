
| 序号  | 功能        | 命令示例                             | 说明                                        |
| --- | --------- | -------------------------------- | ----------------------------------------- |
| 1   | 编译单个文件    | `gcc hello.c -o hello`           | 直接编译并生成可执行文件 hello                        |
| 2   | 编译多个源文件   | `gcc file1.c file2.c -o program` | 一次性编译多个 .c 文件                             |
| 3   | 添加调试信息    | `gcc -g hello.c -o hello`        | 生成带符号表的二进制，便于 gdb 调试                      |
| 4   | 优化代码      | `gcc -O2 hello.c -o hello`       | 常用优化级别：-O0（无优化）、-O1、-O2、-O3、-Os（体积优化）     |
| 5   | 链接数学库     | `gcc hello.c -o hello -lm`       | -l后接库名（math → m），常见库：-lm -lpthread -ldl 等 |
| 6   | 查看 GCC 版本 | `gcc --version`                  | 显示 gcc 版本及相关信息                            |
| 7   | 生成汇编代码    | `gcc -S hello.c`                 | 生成 hello.s 汇编文件（不编译为目标文件）                 |
| 8   | 仅预处理      | `gcc -E hello.c > hello.i`       | 输出预处理后的 .i 文件（宏展开、#include 处理后）           |

#### 编译过程单独执行（进阶）
```zsh
# 预处理 → hello.i
gcc -E hello.c -o hello.i

# 编译为汇编 → hello.s
gcc -S hello.i -o hello.s

# 汇编为目标文件 → hello.o
gcc -c hello.s -o hello.o

# 链接生成可执行文件
gcc hello.o -o hello
```

#### 常用组合选项
- 调试 + 优化：`gcc -g -O2 hello.c -o hello`
- 警告全开（推荐）：`gcc -Wall -Wextra hello.c -o hello`
- 严格标准：`gcc -std=c11 -pedantic hello.c -o hello`
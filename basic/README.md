Basic Programming with C++

1. Hello world

   ```c++
   /*
    * Example program of C++
    */
   #include <iostream>
   using namespace std;
   
   int main(int argc, char* argv[])
   {
       // Display Hello world to the console
       cout << "Hello world!" << endl;
   }
   ```

2. 注释

   1. 多行注释

      ```c++
      /*
       * 多行注释
       */
      ```

   2. 单行注释

      ```c++
      // 单行注释
      ```

3. 标准输入输出

   1. 标准输入

      ```C++
      cin >> radius; // Reading radius from the keyboard.
      ```

   2. 标准输出

      ```c++
      cout << "Enter a radius: "; // Give some hints to the users
      cout << "The area is " << area << endl; // Display calculation result
      ```

4. 标识符

   1. 只能包含**字母**、**数字**和**下划线**；
   2. 必须以**字母**或**下划线**开头；
   3. 不能使用保留字；
   4. 字符长度取决于所用编译器，理论上为任意长度。

5. 变量

   1. 声明

      ```C++
      double radius;
      double area;
      int i,j,k; // 数据类型相同，可被一起声明。
      ```

   2. 初始化

      ```C++
      // 方式一
      int count;
      count = 1;
      // 方式二
      int count = 1;
      int i = 1, j = 2; //相同类型的变量可一起声明和初始化
      // 方式三（C++所允许的）
      int i(1), j(2);
      ```

6. 赋值语句和赋值表达式

   ```C++
   variable = expression;
   ```

7. 常量

   ```c++
   const datatype CONSTANTNAME = value;
   ```
   
8. 数据类型及其运算

   1. 基本数据类型

      | 类型             | 同义表示                     | 值域                                                         | 空间(bits) |
      | ---------------- | ---------------------------- | ------------------------------------------------------------ | ---------- |
      | `bool`           |                              | $[0,1]$                                                      | 1          |
      | `char`           |                              | $[-127,128]$                                                 | 8          |
      | `unsigned char`  |                              | $[0,255]$                                                    | 8          |
      | `short`          | `short int`                  | $[-2^{15},2^{15}-1]$                                         | 16         |
      | `unsigned short` | `unsigned short int`         | $[0,2^{16}-1]$                                               | 16         |
      | `int`            | `int signed` or `signed int` | $[-2^{31},2^{31}-1]$                                         | 32         |
      | `unsigned`       | `unsigned int`               | $[0,2^{32}-1]$                                               | 32         |
      | `long`           | `long int`                   | $[-2^{31},2^{31}-1]$                                         | 32         |
      | `unsigned long`  | `unsigned long int`          | $[0,2^{32}-1]$                                               | 32         |
      | `float`          |                              | $[-3.4028235\times 10^{38},-1.4\times 10^{-45}]$<br>$[1.4 \times 10^{-45},3.4028235\times 10^{38}]$ | 32*        |
      | `double`         |                              | $[-1.7976931348623157\times 10^{308},-4.9\times 10^{-324}]$<br/>$[4.9-\times 10^{-324},1.7976931348623157\times 10^{308}]$ | 64\*       |
      | `long double`    |                              | $[-1.18\times 10^{4932},-3.37\times 10^{-4932}]$<br/>$[3.37\times 10^{-4932},1.18\times 10^{4932}]$ | 80         |

      *公式渲染需安装Chrome插件 [MathJax Plugin for Github](https://chrome.google.com/webstore/detail/mathjax-plugin-for-github/ioemnmodlmafdkllaclgeombjnmnbima/related)。*

      【注】\*为IEEE 754浮点数。

   2. 数据类型转换

      1. 自动（隐式）数据类型转换

         ```c++
         int i = 34.7; // double → int，小数部分会被截取。
         double j = i; 
         double m = 34.3;
         int n = m; // double → int
         ```

      2. 显式数据类型转换

         1. 转换运算符

            ```C++
            // 语法：static_cast<type>(value);
            int i = static_cast<int>(5.2);
            ```

         2. C类型转换

            ```C++
            int i = (int)5.2;
            ```

   3. 运算符

      1. 算术运算符
      
         | 运算符 | 名称 | 运算符 | 名称 |
         | ------ | ---- | ------ | ---- |
         | `+`    | 加   | `-`    | 减   |
         | `*`    | 乘   | `/`    | 除   |
      | `%`    | 取余 | `=`    | 赋值 |
         | `++`   | 自增 | `--`   | 自减 |

         【注】`+`、`-`、`*`、`/`和`%`运算符可以结合赋值运算符`=`形成简写运算符：
      
         ```C++
         count += 1; // 等价于 count = count + 1;
         count -= 1; // 等价于 count = count - 1;
         count *= 1; // 等价于 count = count * 1;
         count /= 1; // 等价于 count = count / 1;
         count %= 1; // 等价于 count = count % 1;
         ```
      
      2. 关系运算符
      
         | 操作符 | 数学符号 |    名称    |
         | :----: | :------: | :--------: |
         |  `<`   |   $<$    |    小于    |
         |  `<=`  |  $\le$   | 小于或等于 |
         |  `>`   |   $>$    |    大于    |
         |  `>=`  |  $\ge$   | 大于或等于 |
         |  `==`  |   $=$    |    等于    |
         |  `!=`  |  $\neq$  |   不等于   |
      
      3. 运算符优先级
      
         | 优先级 | 运算符                                                       | 叙述                                                         | 示例                                                         | 重载性                                 | 结合性                |
         | ------ | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ | -------------------------------------- | --------------------- |
         | `1`    | `::`                                                         | 作用域解析                                                   | `Class::age = 2;`                                            | 否                                     | 左→右                 |
         | `2`    | `++`<br>`--`<br>`{}`<br>`()`<br>`[]`<br>`.`<br>`->`          | 后递增<br>后递减<br>组合<br><br>数组访问<br>访问成员<br>访问成员 | i++;<br>`i--;`<br><br>`(i+1)`<br>`a[2]=1;`<br>`obj.age=19;`<br>`ptr->age=19;` | <br><br><br><br><br>否<br>             | <br><br><br>左→右     |
         | `3`    | `++`<br>`--`<br>`+`<br>`-`<br>`!`<br>`~`<br>`()`<br>`*`<br>`&`<br>`sizeof` | 前递增<br/>前递减<br/>正号<br/>负号<br/>逻辑非<br/>按位取反<br/>类型转换<br>解引用<br/>取地址<br/> | `++i;`<br>`--i;`<br>`int i=+1;`<br>`int i=-1;`<br>`i=!i;`<br>`i=~i;`<br>`(int)i;`<br>`int i=*p;`<br>`int *p=&i;`<br>`int i =sizeof(int)`; | <br><br><br><br><br><br><br><br><br>否 | <br><br><br><br>左←右 |
         | `4`    | `*`<br>`/`<br>`%`                                            | 乘<br/>除<br/>取余                                           | `int a=5*2;`<br>`int a=5/2;`<br>`int a=5%2;`                 |                                        | <br>左→右             |
         | `5`    | `+`<br>`-`                                                   | 加<br/>减                                                    | `int a=5+2;`<br>`int a=5-2;`                                 |                                        | 左→右                 |
         | `6`    | `<<`<br>`>>`                                                 | 左移<br/>右移                                                | `int a=5<<2;`<br>`int a=5>>2;`                               |                                        | 左→右                 |
         | `7`    | `<`<br>`<=`<br>`>`<br>`>=`                                   | 小于<br/>小于等于<br/>大于<br/>大于等于                      | `if(a<b)`<br>`if(a<=b)`<br>`if(a>b)`<br>`if(a>=b)`           |                                        | <br><br>左→右         |
         | `8`    | `==`<br>`!=`                                                 | 等于<br/>不等于                                              | `if(a==b)`<br>`if(a!=b)`                                     |                                        | 左→右                 |
         | `9`    | `&`<br>`^`<br>\|                                             | 位与<br>异或<br>位或                                         | `a=a&0x01;`<br>`a=a^&^0x01;`<br>a=a\|0x01;                   |                                        | 左→右                 |
         | `10`   | `&&`<br>\|\|                                                 | 逻辑与<br>逻辑或                                             | `a=b&&c;`<br>a=b\|\|c;                                       |                                        | 左→右                 |
         | `11`   | `? : `                                                       | 三元条件运算符                                               | `int max=a>b?a:b;`                                           | 否                                     | 左←右                 |
         | `12`   | `=`<br>`+=`<br>`-+`<br>`*=`<br>`/=`<br>`%=`<br>`<<=`<br>`>>=`<br>`&=`<br>`^=`<br>\|= | 赋值                                                         | `int a=b;`<br>`int a+=b;`<br>`int a-=b;`<br>`int a*=b;`<br>`int a/=b;`<br>`int a%=b;`<br>`int a<<=b;`<br>`int a>>=b;`<br>`int a&=b;`<br>`int a^=b;`<br>int a\|=b; |                                        | 左←右                 |
         | `13`   | `,`                                                          | 逗号运算符                                                   | `int a=0,b=0;`                                               |                                        | 左→右                 |

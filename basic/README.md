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

      | 类型             | 同义表示                     | 值域                                                         | 占用空间(bits) |
      | ---------------- | ---------------------------- | ------------------------------------------------------------ | -------------- |
      | `bool`           |                              | $[0,1]$                                                      | 1              |
      | `char`           |                              | $[-127,128]$                                                 | 8              |
      | `unsigned char`  |                              | $[0,255]$                                                    | 8              |
      | `short`          | `short int`                  | $[-2^{15},2^{15}-1]$                                         | 16             |
      | `unsigned short` | `unsigned short int`         | $[0,2^{16}-1]$                                               | 16             |
      | `int`            | `int signed` or `signed int` | $[-2^{31},2^{31}-1]$                                         | 32             |
      | `unsigned`       | `unsigned int`               | $[0,2^{32}-1]$                                               | 32             |
      | `long`           | `long int`                   | $[-2^{31},2^{31}-1]$                                         | 32             |
      | `unsigned long`  | `unsigned long int`          | $[0,2^{32}-1]$                                               | 32             |
      | `float`          |                              | $[-3.4028235\times 10^{38},-1.4\times 10^{-45}]$<br>$[1.4 \times 10^{-45},3.4028235\times 10^{38}]$ | 32*            |
      | `double`         |                              | $[-1.7976931348623157\times 10^{308},-4.9\times 10^{-324}]$<br/>$[4.9-\times 10^{-324},1.7976931348623157\times 10^{308}]$ | 64\*           |
      | `long double`    |                              | $[-1.18\times 10^{4932},-3.37\times 10^{-4932}]$<br/>$[3.37\times 10^{-4932},1.18\times 10^{4932}]$ | 80             |

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

      | 运算符 | 名称 | 运算符 | 名称 |
      | ------ | ---- | ------ | ---- |
      | `+`    | 加   | `-`    | 减   |
      | `*`    | 乘   | `/`    | 除   |
      | `%`    | 取余 | `=`    | 赋值 |
      | `++`   | 自增 | `--`   | 自减 |

      【注】`+`、`-`、`*`、`/`和`%`运算符可以结合赋值运算符`=`形成简写运算符：

      ```c++
      count += 1; // 等价于 count = count + 1;
      count -= 1; // 等价于 count = count - 1;
      count *= 1; // 等价于 count = count * 1;
      count /= 1; // 等价于 count = count / 1;
      count %= 1; // 等价于 count = count % 1;
      ```

9. 算术表达式和运算符优先级
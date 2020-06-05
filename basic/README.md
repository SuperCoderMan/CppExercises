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
/*1、C 和 C++ 中 struct 有什么区别？
C语言的struct不能有函数成员，而C++的struct可以有；
C语言的struct中数据成员没有private、public和protected访问权限的设定，而C++的struct的成员有访问权限设定；
C语言中的struct是没有继承关系的，而C++的struct却有丰富的继承关系。
private：可以理解为私人的不可以被继承
protected：可以直接继承
public：公共的，可以继承


2、“引用”与指针的区别是什么？
指针：表示内存地址，可以进行四则运算
引用：引用则是某块内存的别名
引用只能在定义时被初始化一次，之后不可变，指针可变
引用不能为空，指针可以为空
引用没有const，指针有const，const的指针不可变


3、对于一个频繁使用的短小函数, 在C语言中应用什么实现, 在C++中应用什么实现？
C：可以用函数或者宏定义
C++：函数的封装，百度了一下还有内联函数，即指那些定义在类体内的成员函数，即该函数的函数体放在类体内。


4、C++中 virtual 与 inline 的含义分别是什么？
virtual：虚函数（主要特点运行时刻被确定的）
inline：内联函数

5、VC 中，编译工具条内的 Debug 与 Release 选项是什么含义？
Debug：通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程。
带有大量的调试代码，运行时需要相应的运行库，发布模式程序紧凑不含有调试
代码和信息，直接可以运行（如果不需要运行库）
Release：称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上
都是最优的，以便用户很好地使用。
*/
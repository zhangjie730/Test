//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void test()
//{
//	static int i = 1;//static是一个静态的局部变量
//	i++;//局部变量生命周期变长
//	printf("i=%d\n", i);//static修饰全局变量，作用域变小
//}
////函数调用至此i的生命周期结束，继续运行引用的i仍为1
//static修饰的函数没有外部链接属性，故全局变量被static修饰无法被调用。
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
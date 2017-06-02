// Multi-Delegate.cpp : Defines the entry point for the console application.
// Win32 Application
// Author: Astrid Hsu
// Brief: Multi-Delegate sample code
// Date: 2017-06-01
//

#include "stdafx.h"
#include <iostream>
#include "Delegate.h"
typedef int(*function)(int);
int funct1(int num)
{
	std::cout << "I am funct1 " <<num<< std::endl;
	return 1;
}
int funct2(int num)
{
	std::cout << "I am funct2 " <<num<< std::endl;
	return 2;
}
int main()
{
	Delegate<function> a;

	a + funct1;
	a + funct2;
	a(5);
	system("pause");
	return 0;

}


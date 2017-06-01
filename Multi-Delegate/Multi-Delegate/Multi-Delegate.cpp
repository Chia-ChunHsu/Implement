// Multi-Delegate.cpp : Defines the entry point for the console application.
// Win32 Application
// Author: Astrid Hsu
// Brief: Multi-Delegate sample code
// Date: 2017-06-01
//

#include "stdafx.h"
#include <iostream>
#include "Delegate.h"
typedef int(*function)();
int funct1()
{
	std::cout << "I am funct1" << std::endl;
	return 1;
}
int funct2()
{
	std::cout << "I am funct2" << std::endl;
	return 2;
}
int main()
{
	Delegate<function> a;

	//function = &funct1;
	a + funct1;
	//a+function;
	//function = &funct2;
	a+funct2;
	a.Invoke();
	system("pause");
	return 0;

}


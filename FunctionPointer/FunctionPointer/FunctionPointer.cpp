// FunctionPointer.cpp : 定義主控台應用程式的進入點。
// Author: Astrid Hsu
// Brief: Practice for usage of function pointer
// Date: 2017/05/16

#include "stdafx.h"
#include <iostream>

int addFunction(int num1,int num2) //function 1: Add Method
{
	return num1+num2;
}

int multiFunction(int num1,int num2)//function 2: Multiply Method
{
	return num1*num2;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int (*function)(int,int);   //The function I didn'y define
	function = &addFunction;
	std::cout<<function(10,10)<<std::endl;
	function = &multiFunction;
	std::cout<<function(10,10)<<std::endl;
	system("pause");
	return 0;
}


// MultiDelegate.cpp : 定義主控台應用程式的進入點。
// Win32 Application
// Author: Astrid Hsu
// Brief: Multi-Delegate sample code
// Date: 2017-05-16

#include "stdafx.h"
#include <iostream>
class functionD
{
public:
	functionD();
	functionD(int a,int b);
	functionD operator+(functionD* one);
	int getA();
	int getB();
private:
	int _a;
	int _b;
	functionD FArray;
};
functionD::functionD()
{
	_a = 0;
	_b = 0;
}
functionD::functionD(int a,int b)
{
	_a = a;
	_b = b;
}
functionD functionD::operator+(functionD* one)
{
	functionD (*func)(int,int);
}
int _tmain(int argc, _TCHAR* argv[])
{
	system("pause");
	return 0;
}


// driver_install.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "setup.h"

#include <iostream>
using namespace std;
//隐藏控制台窗口
//#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" ) // 设置入口地址  
int _tmain(int argc, _TCHAR* argv[])
{
	//cout << "-----------welcome to the driver installation------------" << endl;
	UpdateDriver();
	
	//system("pause");
	return 0;
}


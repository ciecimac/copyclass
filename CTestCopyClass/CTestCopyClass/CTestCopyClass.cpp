// CTestCopyClass.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CTestCopy
{
	int *x;
public:
	CTestCopy();
	CTestCopy(int a);
	CTestCopy(CTestCopy & om);
	void setX(int a);
	void disPlay();
	~CTestCopy();
};
CTestCopy::CTestCopy()
{
	x = new int;
	*x = 0;
	cout << "默认构造函数 *x=" << *x << "          x变量的值="<<x<<"    x变量的地址="<<&x<< endl;
}
CTestCopy::~CTestCopy()
{
	cout << "析构函数 *x=" << *x << "          x变量的值=" << x << "    x变量的地址=" << &x << endl;
	delete x;
}
CTestCopy::CTestCopy(int a)
{
	x = new int;
	*x = a;
	cout << "构造函数 *x=" << *x << "          x变量的值=" << x << "    x变量的地址=" << &x << endl;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	x = om.x;
	cout << "复制构造函数 *x=" << *x << "          x变量的值=" << x << "    x变量的地址=" << &x << endl;
}

void CTestCopy::setX(int a)
{
	*x = a;

}
void CTestCopy::disPlay()
{
	cout << "显示函数 *x=" << *x << "          x变量的值=" << x << "    x变量的地址=" << &x << endl;
}
CTestCopy myTest()
{
	CTestCopy om(600);
	om.disPlay();
	return om;
}
int testtemp(int x)
{
	return x * 2;
}
int main()
{
	CTestCopy ot(100);
	ot.disPlay();
	CTestCopy obj(ot);
    return 0;
}


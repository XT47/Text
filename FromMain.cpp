#include <iostream>
#include <windows.h>
#define inch_cm 2.54

using namespace std;

int main(void)
{
	float inch;	//英寸
	float cm;	//厘米

	cout << "请输入一个以英寸为单位的值：";
	cin >> inch;;
	cm = inch * inch_cm;	//计算等于多少厘米
	cout << inch << "英寸约等于" << cm << "厘米" << endl << endl;

	system("pause");
	return 0;
}
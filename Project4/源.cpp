#include <iostream>
using namespace std;
int main()
{
	/*
	int b[3] = { 1,2,3 }, *bb = b;

	int a[3][2] = {11,12,13,14,105,16};
	int (*p)[2] = a;
	


	cout << bb << endl << *bb << endl;


	cout << "p��ֵ" << p << endl
		<< "*p��ֵ" << *p << endl
		<< "(*p) + 1��ֵ" << (*p) + 1 << endl
		<< "(*p)+2��ֵ" << (*p) + 2 << endl
		<< "*((*p)+4)��ֵ" << *((*p) + 4) << endl;
	*/

	int(**p)[3];
	int a[2][3] = { 0,10,20,30,40,50 };
	int(*q)[3] = a;
	p = &q;
	cout << *(*(*p + 1) + 2) << endl; //50  *p ÿһ�еĽ����ƶ�
	cout << (*(*q + 5)) << endl;//50 *q��ά����ĵ�һ��
	cout << sizeof(p) << endl; // 4
	system("pause");
}


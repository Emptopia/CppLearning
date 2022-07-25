#include "swap.h"
#include<iostream>
using namespace std;
//∂®“Â
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
#include "ExponentFunction.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

ExponentFunction::ExponentFunction()
{
	m_name = "y=e^x";
}


ExponentFunction::~ExponentFunction()
{
}

void ExponentFunction::Calculate()
{
	cout << "Input variable";
	cin >> m_x;
	double member = 1;
	double sum = 1;
	int n = 1;
	while (member >= 0, 000001)
	{
		member = member*m_x / n;
		sum += member;
		n++;
	}
	cout << sum << endl;
}

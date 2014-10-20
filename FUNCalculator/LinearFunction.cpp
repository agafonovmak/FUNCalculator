#include "LinearFunction.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

LinearFunction::LinearFunction()
{
	m_name = "y = ax + b";
	m_a = 0;
	m_b = 0;
}


LinearFunction::~LinearFunction()
{
}

void LinearFunction::Calcualte()
{
	cout << "Enter a:";
	cin >> m_a;
	cout << "Enter b:";
	cin >> m_b;
	cout << "y = " << m_a*m_x + m_b << endl;
	return;
}
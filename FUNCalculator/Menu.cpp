#include "Menu.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Menu::Menu()
{
}


Menu::Menu(int ammount, Function** obj)
{
	m_p = new Function*[ammount + 1];
	for (int i = 0; i < ammount; i++)
	{
		m_p[i] = obj[i];
	}
	m_p[ammount + 1] = NULL;
	m_ammount = ammount;
}


Menu::~Menu()
{
}


int Menu::ask()
{
	int option;
	cout << "Enter number: ";
	cin >> option;
	while (option>0 && option<=m_ammount+1)
	{
		cout << "Enter number: ";
		cin >> option;
	}
	return option;
	

}

void Menu::print()
{
	int i = 0;
	for (i; i < m_ammount; i++)
	{
		cout << i+1 << ". " << m_p[i]->GetName() << endl;
	}
	cout << i+1 << ". " << "Exit" << endl;
}

void Menu::Run()
{
	int option;
	do
	{
		option = ask();
		calculate(option);
	} while (m_p[option]);
}

void Menu::calculate(int function)
{
	if (function>0 && function<=m_ammount)
	{
		m_p[function]->Calcualte();
	}
}
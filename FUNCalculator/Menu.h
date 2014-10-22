#pragma once
#include "Function.h"
class Menu
{
private:
	Function** m_p;
	//m_ammount число пунктов не считая Выход
	int m_ammount;
	void print();
	int ask();
	void calculate(int function);
public:
	Menu();
	Menu(int ammount, Function** obj);
	~Menu();

	void Run();
	
};


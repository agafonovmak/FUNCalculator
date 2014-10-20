#pragma once
#include "Function.h"
class Menu
{
private:
	Function** m_p;
	int m_ammount;
public:
	Menu();
	Menu(int ammount, Function** obj);
	~Menu();
};


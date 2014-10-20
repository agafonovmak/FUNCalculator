#pragma once
#include "Function.h"
#include <iostream>
class LinearFunction : public Function
{
private:
	float m_b;
	float m_a;
public:
	void Calcualte();
	LinearFunction();
	~LinearFunction();
};


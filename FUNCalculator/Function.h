#pragma once
class Function
{
protected:
	float m_a;
	float m_x;
	char* m_name;
public:
	char* getname()
	{
		return m_name;
	}
	virtual void Calcualte() = 0;
	Function();
	~Function();
};


#pragma once
class Function
{
protected:
	float m_x;
	char* m_name;
public:
	char* GetName()	{return m_name;}
	float GetX()	{ return m_x; }
	virtual void Calcualte() = 0;
	Function(){ m_x = 0; };
	~Function();
};


#pragma once

class Builder;

class Director
{
public:
	Director(Builder* pBld);
	~Director(void);
	void Construct();

private: 
	Builder* m_pBld;
};

#pragma once

class Singleton
{
public:
	static Singleton* Instance();
	~Singleton(void);

protected:
	Singleton(void);

private: 
	static Singleton* s_pInstance;

};

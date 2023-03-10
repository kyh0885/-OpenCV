#pragma once
#include "common.h"

class Calc
{
public:
	//생성자
	Calc();//Ctor...default Ctor
	//Calc(int a=1, int b=2, char sym=' ');
	Calc(int a, int b, char sym);
	//소멸자
	~Calc();//Dtor

	void Clear();
	void SetValue(int num1, int num2, char sym);
	int GetResult();
	int DoSum();
	int DoMul();
	int DoSub();
	int DoDiv();

	int sum(const int* const pData, size_t length);
	float avg(const int* const pData, size_t length);
	int min(const int* const pData, size_t length);
	int max(const int* const pData, size_t length);

private:
	int* pData = nullptr;//new를 없애고 smart ptr을 사용하자

	int number1 = 0;
	int number2 = 0;
	char symbol;
	int result;
	int a;
	int b;
	int sym;
};



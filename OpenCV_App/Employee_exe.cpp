#pragma once
#include"Employee.h"

int main()
{
	//Employee e;
	CDate date(2023, 2, 24); 
	{
		Employee e("Parent", "Here", "010-0000-0000", date); 
		e.displayEmployee();
		e.doWork();
	}
	{
		RegularEmployee re("KCCI", "Here", "010-3910-1862", date, 10000000);
		re.displayEmployee();
		//re.doWork();
	}


	/*/e.displayEmployee();
	RegularEmployee re("KCCI", "Here", "010-3910-1862", date, 10000000);
	re.displayEmployee(); //����ȿ� �θ�Ŭ������ ������ �� ����ִ�



	//pointer...class...derived class...pointer�ФФФ�

	Employee* pEmployee = &e; //int *pA = &a;
	RegularEmployee* pReEmployee = &re;
	//down-Casting -> �⺻ Ŭ������ �Ļ�Ŭ������ ����Ų��.
	pEmployee = &re;
	pEmployee->displayEmployee();
	
	e.doWork();
	re.doWork();*/

	return 1;
}
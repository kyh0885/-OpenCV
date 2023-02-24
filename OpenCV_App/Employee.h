#pragma once
#include "common.h"

class CDate //���� ���� ������ class
{
public : 
	CDate() { year = month = day = 0; };
	CDate(int _year, int _month, int _day )
	{
		year = _year, month = _month, day = _day; //�ʱ�ȭ 
	};
	~CDate() {}
	int GetYear() { return year; } //�ܺη� ���� �� �ִ� �ֵ�
	int GetMonth() { return month; }
	int GetDay() { return day; }


private: 
	int year, month, day;

};
class Employee
{
public:
	Employee();
	Employee(string name,string address, string phoneNum,CDate joinDate);
	void displayEmployee();
	void doWork();
	~Employee();
	
protected: //�ڽ��� ����ϴ� Ŭ���������� ���� ����(���������ڰ� �ϴ� ����)	
private:
	string name,address, phoneNum; 
	CDate joinDate; //�Ի���
};



class RegularEmployee : public Employee //Regular�� Employee�κ��� ��ӹ޾Ҵ�
{
public:
	RegularEmployee();
	RegularEmployee(string name, string address, string phoneNum, CDate joinDate, int salary);
	~RegularEmployee();
	void doWork();
private:
	int salary; //��ǻ� �ڽ��� �̰� �ϳ� ����������
};


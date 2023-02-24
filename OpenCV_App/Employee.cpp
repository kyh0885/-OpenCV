#include"Employee.h"

Employee::Employee()
{

	cout << "Employee::Ctor" << endl;
}

Employee::Employee(string name, string address, string phoneNum, CDate joinDate) {
	this->name = name;
	this->address = address;
	this->phoneNum = phoneNum;
	this->joinDate = joinDate;
}
void Employee::displayEmployee()
{
	cout << "name : " << name << endl;
	cout << "address : " << address << endl;
	cout << "phoneNum : " << phoneNum << endl;
	//cout << "Date : " << joinDate.year << endl;
}
void Employee::doWork()
{
	cout << "Employee::doWork" << endl;
}
Employee::~Employee()
{
	cout << "Employee::Dtor" << endl;
}

RegularEmployee::RegularEmployee()
	:Employee()
{
	cout << "ReEmployee::Ctor" << endl;
}
RegularEmployee::RegularEmployee(string name, string address, string phoneNum, CDate joinDate, int salary)
	:Employee(name, address, phoneNum, joinDate) //�⺻Ŭ������ �����鿡�Ե� ������ ���޵Ǿ���Ѵ�.
{
	this->salary = salary; //�߰������� �ٴ°��� �Ļ� class�� �ִ°͸�
}

RegularEmployee::~RegularEmployee()
{
	cout << "ReEmployee::Dtor" << endl;
}

void RegularEmployee::doWork()
{
	cout << "ReEmployee::doWork" << endl;
}

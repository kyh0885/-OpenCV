#include<iostream>

using namespace std;

struct student {
	int id;
	string name;
	float percentage;

	void show() {
		cout << "���̵� : " << id << "�̸� : " << name << "�����" << percentage << endl;
	}
};
int main() {
	student s = { 1,"��ö��",90.5 };

	s.show();
	return 0;
}

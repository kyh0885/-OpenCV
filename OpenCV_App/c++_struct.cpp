#include <iostream>
#include <stdio.h>
#include<vector>
#include<string>

typedef unsigned char uchar; //����� Ÿ�� ������
typedef unsigned int init;
//struct �⺻
/*struct _stData //���� �ٸ� Ÿ���� ����
{
	int score;
	double ratio;
	int dated[100];
	int* pPredate = nullptr;
	int* pPostData = nullptr;
	std::vector<int> vLines;

	//�Լ�
	void sum(int& a, int& b)(return a + b;)
		//Ŭ����
	MyClass _myClass;
};

int a;
_stData stData = { 10,0.1,"hello",nullptr ,nullptr };
_stData* pstData = new _stData;//�������� ���� �� �ִ�*/
enum {eEnglish, eMath, eKorean, eClassMax}ECLASS; 

//eClassMax �� ���� - 
struct _stStudentInfo
{
	std::string name[3];
	int scores2[3];


	int scores[eClassMax];
	int sum, average, min, max; //average �� float
	
	//������ ��,��,������, ���ϱ� ���ϱ�
	/*int sum1() {

		int sum_score = 0;
		for (size_t i = 0; i < eClassMax; i++) {
			sum_score += scores[i];
	    }return sum_score;

	}

	float average1() {

		int sum_score2 = 0;
		for (size_t i = 0; i < eClassMax; i++)
		{
			sum_score2 += scores[i];
		}
		float average_score = sum_score2 / 3;
		return average_score;
	}

	int min1() {
		int min = scores[0];
		for (size_t i = 0; i < eClassMax; i++)
		{
			if (scores[i] < min) min = scores[i];
		}return min;
	}

	int max1() {
		for (size_t i = 0; i < eClassMax; i++)
		{
			if (scores[i] > max) max = scores[i];
		}return max;
	}*/
	// ������ �ڵ� (������ �̿���)
	/*int sum(const int* const pData, size_t length)
	{
		int sum = 0;
		for (size_t i = 0; i < length; i++)
		{
			sum += pData[i];
		}
		return sum;
	}

	float avg(const int* const pData, size_t length)
	{
		return sum(pData, length) / length;
	}
	int min(const int* const pData, size_t length) {
		int min = pData[0];
		for (size_t i = 0; i < length; i++) {
			if (min > pData[i]) min = pData[i];
		}
		return min;
	}
	int max(const int* const pData, size_t length) {
		int max = pData[0];
		for (size_t i = 0; i < length; i++) {
			if (max < pData[i]) max = pData[i];
		}
		return max;*/
};

int main()
{
	_stStudentInfo student;
	/*student.scores[eEnglish] = 90;
	student.scores[eMath] = 95;
	student.scores[eKorean] = 92;

	std::cout << "English : " << student.scores[0] << std::endl;
	std::cout << "Math : " << student.scores[1] << std::endl;
	std::cout << "Korean : " << student.scores[2] << std::endl;

	std::cout << "Sum : " << student.sum1() << std::endl;
	std::cout << "Average : " << student.average1() << std::endl;
	std::cout << "Min : " << student.min1() << std::endl;
	std::cout << "Max : " << student.max1() << std::endl;*/
	while (1) {
		
		for (size_t i = 0; i < 3; i++)
		{
			std::cin >> student.name[i];
		}

		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> student.scores2[j];
		}

		for (size_t k = 0; k < 3; k++)
		{
			std::cout << student.name[k] << "�� ������" << student.scores2[k] << "�Դϴ�" << std::endl;
		}

		char op;
		std::cin >> op;
		if (op == 'Q') break;
	}
	//������ �ڵ�
	/*std::vector<_stStudentInfo> vStudent;
	while (true)
	{
		std::cin >> student.name;
		if (student.name == "Q")break;
		std::cin >> student.scores[eEnglish];
		std::cin >> student.scores[eMath];
		std::cin >> student.scores[eKorean];


		vStudent.push_back(student);
	}


	for (size_t i = 0; i < vStudent.size(); i++)
	{
		_stStudentInfo* pStudent = &vStudent[i];

		std::cout << sum(pStudent->scores, eClassMax);
		std::cout << avg(pStudent->scores, eClassMax);
		std::cout << min(pStudent->scores, eClassMax);
		std::cout << max(pStudent->scores, eClassMax);

	}*/
	return 0;
}






#pragma once
#include "StudentScore_rev1.0.h"

int main()
{
	    vector<StudentScore> vStudent;
		StudentScore ss;
		//name, scorekor, eng, math
		string strName;
		string strSubject;
		
		while (true) {
			int score;
			cout << "Input Student Name :";
			cin >> strName;
			if (strName == "Q") break;
			ss.SetStudentName(strName); // �� �ʱ�ȭ
			while (true)
			{
				cout << "Input Student Subject : ";
				cin >> strSubject;
				if (strSubject == "Q") {
					ss.DoCalc();
					break;
				}
				cout << "Input Student Score : ";
				cin >> score;
			}
			ss.StudentScore::SetSubjectScore(strSubject, score);
		}
		ss.SetStudentName(strName);// �� �ʱ�ȭ
		vStudent.push_back(ss);// ������ ���縦 �ϸ鼭 vector�� �ִ´�
		//ss.DoCalc();

		/*for (size_t i = 0; i < vStudent.size(); i++)
		{
			vStudent[i].DoCalc();
		}*/
		cout << "[Score Table]" << endl; for (size_t i = 0; i < 50; i++)cout << "--";
		for (auto iter = vStudent.begin(); iter != vStudent.end(); iter++)
		{
			iter->DoCalc();
		}

	return 1;
}
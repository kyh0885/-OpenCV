#pragma once
#include "StudentScore.h"

int main() {


	Student* studentscore = new Student(); //Class
	StudentInfo studentinfo; //����ü

	studentinfo.scores[eKorean] = 90;
	studentinfo.scores[eEnglish] = 80;
	studentinfo.scores[eMath] = 70;
	studentinfo.scores[eArt] = 65;
	studentinfo.scores[eMusic] = 48;
	studentinfo.scores[eHistory] = 78;

	studentinfo.subject[eKorean] = "����";
	studentinfo.subject[eEnglish] = "����";
	studentinfo.subject[eMath] = "����";
	studentinfo.subject[eArt] = "�̼�";
	studentinfo.subject[eMusic] = "����";
	studentinfo.subject[eHistory] = "����";


	studentscore->SetstudentName("������");
	for (size_t i = 0; i < eClassSubjectMax; i++)
	{
		studentscore->Setsubject(studentinfo.subject[i], studentinfo.scores[i], i);
	}

	studentscore->DoCalc();

	if (studentscore != nullptr) {
		delete studentscore;
		studentscore = nullptr;
	}

	return 0;
}
#pragma once
//#include "common.h"
#include <iostream>
#include <stdio.h>
#include<vector>
#include<string>
#include<memory> 
#include<algorithm>

using namespace std;


class Shape
{
public:
	Shape();
	virtual ~Shape(); 
	void SetVertexCnt(int points);
	int GetVertexCnt();
	//���� ���� �Լ�
	//virtual void ShowShapeInfo() = 0; // virtual ���̿��ϸ� �ڽ�Ŭ������ �θ�Ŭ������ ����� �� �ִ�.
	//�����Լ�
	virtual void ShowShapeInfo();

private:
	int _points = 0;

};

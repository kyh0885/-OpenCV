#pragma once
#include "common.h"

class Kphone
{
public:
	Kphone();
	~Kphone();
	
	int Send();
	int Receive();
	int Numbers(String _strNumber); //�Է½��� �ڵ��̸� virtual �߰�
	int cancel();
	int Numbers(int* pAudioData, int length);
private:

	std::string strNumber;
	bool isConnected;
};


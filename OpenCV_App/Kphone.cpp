#include "Kphone.h"

Kphone::Kphone()
	:strNumber("000-000-0000")
	,isConnected(false)
{
	cout << "Kphone::Ctor" << endl;
}

Kphone::~Kphone()
{
	cout << "Kphone::Dtor" << endl;

}

int Kphone::Send( )
{
	/*cout << "��ȭ��ȣ�� �Է��ϼ��� : " << endl;
	return 0;*/
	if (isConnected == true)
	{
		cout << "on the phone" << endl;
		return -1;
	}

	if (isConnected == true)
	{
		cout << "on the phone" << endl;
		return -1;
	}

	cout << "calling" << endl;
	cout << "linked" << endl;
	isConnected = true;
	cout << "communication start" << endl;
	cout << "communication end" << endl;

	return 0;
}

int Kphone::cancel()
{
	cout << "cancel button activated" << endl;
	cout << "communication finish" << endl;
	isConnected = false;
	return 0;
}

int Kphone::Receive()
{	
	if (isConnected == true)
	{
		cout << "on the phone" << endl;
		return -1;
	}
	cout << "linked" << endl;
	isConnected = true;
	cout << "communication start" << endl;
	/*cout << Kphone::strNumber << "���� ��ȭ�� �Խ��ϴ�. �����ðڽ��ϱ�? " << endl;
	char sym;
	cin >> sym;
	if (sym == 'Y') cout << "��ȭ��" << endl;
	else if (sym == 'N') cout << "��ȭ�� ��ҵǾ����ϴ�." << endl;
	return 0;*/
}

int Kphone::Numbers(String _strNumber)
{
	/*cin >> Kphone::strNumber;
	cout << Kphone::strNumber << "���� ��ȭ�Ŵ� ��" << endl;
	return 0;*/

	strNumber = _strNumber;
	return 0;
}

int Kphone::Numbers(int* pAudioData, int length) //�����ν����� ���� 
{
	//pAudioData �м�
	//�����ν� �˰��� �־���
	string number = "010-1234-5678";
	strNumber = number;
	//����� ���ڸ� ��ȯ
	return 0;
}

#include "Kphone.h"

int main() {

	/*Kphone kphone;
	kphone.Send();

	while (true)
	{
		Kphone* pkphone = new Kphone();

		kphone.Numbers();

		if (pkphone != nullptr)
		{
			cout << "��ȭ�� �Դϴ�" << endl;

			delete pkphone;
			pkphone = nullptr;
		}
		break;
	}

	kphone.Receive();
	return 1;*/
	{
		// ��ȭ�⸦ ���
		Kphone* pKphone = new Kphone();
		//��ȭ��ȣ �Է�
		//pKphone->Numbers("010-1234-5678");

		//�����ν� 
		int* pAudio = new int [11] {
			0, 1, 0, 1, 2, 3, 4, 5, 6, 7, 8};
		int length = 11;
		pKphone->Numbers(pAudio, length);

		//��ȭ �ɱ�
		pKphone->Send();
		pKphone->cancel();

		//��ȭ�⸦ ������
		if (pKphone != nullptr) {
			delete pKphone;
			pKphone = nullptr;
		}

		//��ȭ�ޱ�
		pKphone->Receive();
	}
	{
		//��ȭ�⸦ ���
		Kphone* pKphone = new Kphone();

		//��ȭ �ɱ�
		pKphone->Receive();
		pKphone->cancel();

		//��ȭ�⸦ ������
		if (pKphone != nullptr)
		{
			delete pKphone;
			pKphone = nullptr;
		}
	}

	return 1;
}
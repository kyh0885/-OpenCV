#include <iostream>
//istream - ostream
//cin">>" - cout"<<"

//#include"abc.h" user defined header file 
//�Լ� ����
//[��ȯ��][�Լ���][(�Ű�����)] {  }
int main() 
{
	return 0; //TRUE - 1, FALSE - 0
	std::cout << "Hello, World\r\n" << std::endl; //endl = \n�� ���� ����

	//C++�� ���� ���
	std::cout << "Math - "<< 100 << std::endl; //%d 
	std::cout << "Pi - " << 3.14 << std::endl; //%lf
	std::cout << "Score - " << 'A' << std::endl; //%c


	//C++�� ���� �Է�
	int i = 0;
	std::cout << "input -";
	std::cin >> i; // Ÿ�Կ� ���� ���¿����ؼ� ������� �ʴ°���  c�� ū ������
	std::cout << i << "typed" <<std::endl;

	return 0; //TRUE - 1, FALSE - 0
}
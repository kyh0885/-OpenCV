#include<string>
#include <iostream>
#include<vector>
#include <opencv2/opencv.hpp> //�߰����� ���丮 �������ֱ� 
#ifdef _DEBUG
#pragma comment(lib, "opencv_world470d.lib")
#else 
#pragma comment(lib, "opencv_world470.lib")
#endif
using namespace std; //���⿡�� namespace �������ָ� �ȴ�
using namespace cv;
int main()
{
	const bool bComp = false;
	const int const_int = 100;
	const short const_short = 0xfff;
	const std::string const_str = "abcd"; //std name space 
	//string �� std�ȿ� �����ֱ⶧���� �־��ش�.
	string str_a = "a";
	string str_b = "b";
	string str_c = "c";
	string str_d = "d";
	string str_e = "e";

	std::cout << "Hello World!\n";
	std::string fileName = "jetson.bmp";
	cv::Mat img = cv::imread(fileName, IMREAD_COLOR);
	int sz_int = sizeof(int);
	int width = img.cols;
	int height = img.rows;
	unsigned char* rData = img.data;
	unsigned char* gData = img.data;
	unsigned char* bData = img.data;
	unsigned char* pData = img.data;

	/*int arrimg[25] = {0,}; //�迭
	arrimg[5] = 5;

	std::vector<int> vimg(5); //����

	float f_data = 1.23; //Ÿ�� ��ȯ (����� c���)
	int n_data = (int)f_data; //�Ϲ������� int������ �ٲ� �̶�����
	//�ӽ������� ��ü�� �����̵ȴ�.

	n_data = static_cast<int>(f_data);//Ÿ�Ժ�ȯ(c++��)
	const char const_string[] = "ABC";
	std::cout << const_string << std::endl;
	char* msg = const_cast<char*>(const_string);
	msg[0] = 'D';
	std::cout << const_string << std::endl;
	std::cout << msg << std::endl;

	//static_cast
	char cNum = 'a';
	int* pNum = nullptr;
	pNum = (int*)(&cNum); //c ��Ÿ��
	//pNum = static_cast<int*>(&cNum); //c++ ��Ÿ��- ����ȯ �Ұ�
	*pNum = 5;*/

	//mask processing
	//GRAY
	int mask_width = 3; int mask_height = 3;
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			int index = row * width + col;
			if (row >= 0 && row < mask_height) { //�»�
				if (col >= 0 && col < mask_width) {
					pData[index] = 255;
				}
			}
			if (row >= 0 && row < mask_height) { //���
				if (col >= 0 && col >= (width - mask_width)) {
					pData[index] = 255;
				}
			}
			if (row >= 0 && row >= height - mask_height) { //����
				if (col >= 0 && col < mask_width) {
					pData[index] = 255;
				}
			}
			if (row >= 0 && row >= height - mask_height) { //����
				if (col >= 0 && col >= (width - mask_width)) {
					pData[index] = 255;
				}
			}
			
		}
	}
			

			
	//Color    
	/*int mask_width = 3; int mask_height = 3;
	for (int row = 0; row < mask_width; row++) {
		for (int col = 0; col < width; col++) {
			int index = row * width + col;
			index *= 3;
			if (row >= 0 && row < mask_height) {
				if (col >= 0 && col < mask_width) {
					rData[index] = 255;
					gData[index + 1] = 255;
					bData[index + 2] = 255;
				}
			}
		}
	}*/
	
	//threshold processing 
	int threshold = 100;
	//for���� �̿��� ��ȭ

	/*for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			int index = row * width + col;
			if (pData[index] > threshold) {
				pData[index] = 255;
			}
			else {
				pData[index] = 0;
			}
		}
	}
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			int index = row * width + col;
			(pData[index] >= threshold) ? pData[index] = 255 : pData[index] = 0;
		}
	}*/
	//threshold�� �̿��Ͽ� ����ȭ
	/*Mat thrImg;
	cv::threshold(img, thrImg, threshold, 255, THRESH_BINARY);*/
	return 0;
}


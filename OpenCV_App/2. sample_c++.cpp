#include<string>
#include <iostream>
#include<vector>
#include <opencv2/opencv.hpp> 
#ifdef _DEBUG
#pragma comment(lib, "opencv_world470d.lib")
#else 
#pragma comment(lib, "opencv_world470.lib")
#endif
using namespace std;
int main()
{
    //if �� ����
    /*int sum = 10;
    if (sum > 10)
        cout << "sum >10" << endl;
    else if (sum > 5)
        cout << "sum>5" << endl;
    else
        cout << "no result" << endl;*/

    //if�� quiz - ��������
    /*int score;

    if (score>=100) std::cout << "A\n";
    else if ((score >= 90) && (score < 100)) std::cout << "B\n";
    else if ((score >= 80) && (score < 90)) std::cout << "C\n";
    else std::cout << "None\n";
    return 0; */

    //�ݺ���
    /*int rows = 10;
    int cols = 10;
    for (int row = 0; row < rows ; row++)
    {
        cout << "row=" << row <<"\t";
        for (int col = 0; col < cols; col++)
        {
            cout << "col=" << col << "\t";
        }
        cout << endl;
    }*/

    //pointer, reference
    //�޸� �ּҸ� �ǹ��ϴ� ���� ������ ������ ����
    //â : �迭�� ���� ���� �����Ϳ� ����+������ ����
    //�޸� ���� �Ҵ�/���� ���ҽ� ���� ���*ȿ����
    //������ �ڷ� ���� ȿ�������� ���� ��� �� ó��
    //[int*] [pData] = nullptr;
    
    /*int Data = 100;
    int* pData = &Data; //pData = nullptr;

    int nArray[10] = {1,2,3,4,5,6,7,8,9,10};
    int* pArray = nArray; //&nArray[0] �����ּҸ� ���� / int Ÿ���� �������̰� �������ͺ������̸���  pArray�̴�.
    for (int i = 0; i < sizeof(nArray) / sizeof(nArray[0]); i++) // 40/4=10 -> �迭�� ��������ε� ���� �� �ִ�.
    {
        cout << *(pArray + i) << "\t";
        cout << pArray[i] << "\t"; //��ġ�� �������� ��
        cout << *(pArray++) << "\t";
    }
    cout << endl;*/
    

}
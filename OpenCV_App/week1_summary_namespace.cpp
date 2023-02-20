#include <iostream>
//namespace

namespace text
{
	void draw() { std::cout << "draw text" << std::endl; }
}
namespace graphic
{
	void draw() { std::cout << "draw graphic" << std::endl; }
}

using namespace text;
using namespace graphic;
using namespace std;



/*namespace calc {
	const double PI = 3.14;
	int add(int a, int b) { return a + b; }
}
using calc::PI;*/

namespace Calc {
	//add(+) , sub(-) , mul(*), div(/)

	int a, b, resValue = 0;
	char symbol=' ';

	int add(int a,int b) { return a + b; }
	int sub() { return a - b; }
	int mul() { return a * b; }

	int result()
	{
		int resValue = 0;
		if (symbol == '+') resValue = add(a,b);
		else if (symbol == '-') resValue = sub();
		else if (symbol == '*') resValue = mul();
		return resValue;
	}
	
}
//using namespace Calc;


int main()
{
	/*text::draw();
	graphic::draw();
	draw(); �̷��Ը�����XX ��� namespace�� ������ϴ��� �տ� ��ø� �ؾ��Ѵ�.
	graphic::draw(); //ok-����� �������� ������ ���
	
	cout << "PI " << calc::PI << endl; //PI���� ���
	cout << "namespace example" << endl;*/


	//result �Լ� �̿�
	std::cout << "input 1: "; std::cin >> Calc::a;
	std::cout << "input 2: "; std::cin >> Calc::b;
	std::cout << "input S: "; std::cin >> Calc::symbol;
	cout << "result:  " << Calc::result() << endl;

	return 1;
}
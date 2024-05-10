// 실습1 클래스 사용해보기

#include <iostream>
using namespace std;

class Rectangle
{
	double width, height;

public:
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
	}
	void area(double w, double h)
	{
		cout << "넓이는 : " << width * height << endl;
	}
};


int main()
{
	double wid, hei;

	cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) : ";
	cin >> wid >> hei;
	Rectangle R(wid, hei);

	R.area(wid, hei);




	return 0;
}
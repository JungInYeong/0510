// 실습 1-1 클래스 사용해보기

#include <iostream>
using namespace std;

class Rectangle
{
private:

	double width, height;

public:
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
	}
	void area()
	{
		cout << "넓이는 : " << width * height << endl;
	}

	// 복사생성자
	Rectangle(Rectangle& rect2)
	{
		width = rect2.width;
		height = rect2.height;
	}


};



int main()
{
	double wid, hei;

	cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) : ";
	cin >> wid >> hei;
	Rectangle rect1(wid, hei);
	rect1.area();

	Rectangle rect2(rect1);
	cout << "복사생성자 "; rect2.area();


	Rectangle rect3(rect2);
	cout << "기본생성자 "; rect3.area();


	




	return 0;
}



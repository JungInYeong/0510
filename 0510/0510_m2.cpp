// 실습2 getter setter 사용해보기

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
	void area(){ cout << "넓이는 : " << width * height << endl; }

	double getWidth() { return width; }
	void setWidth(double width) { this->width = width; }
	
	double getHeight() { return height; }
	void setHeight(double height) { this->height = height; }


};


int main()
{
	double wid, hei;

	Rectangle rect(1, 2);
	rect.area();

	cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) : ";
	cin >> wid >> hei;
	
	rect.setWidth(wid);
	rect.setHeight(hei);

	rect.area();
	cout << "가로 세로 길이는 : " << rect.getWidth() <<  " " << rect.getHeight() << endl;



	return 0;
}
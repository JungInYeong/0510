// �ǽ�2 getter setter ����غ���

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
	void area(){ cout << "���̴� : " << width * height << endl; }

	double getWidth() { return this->width; }
	void setWidth(double width) { this->width = width; }
	
	double getHeight() { return this->height; }
	void setHeight(double height) { this->height = height; }


};


int main()
{
	double wid, hei;

	Rectangle rect(1, 2);
	rect.area();

	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����) : ";
	cin >> wid >> hei;
	
	rect.setWidth(wid);
	rect.setHeight(hei);

	rect.area();
	cout << "���� ���� ���̴� : " << rect.getWidth() <<  " " << rect.getHeight() << endl;



	return 0;
}
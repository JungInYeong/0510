// �ǽ� 1-1 Ŭ���� ����غ���

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
		cout << "���̴� : " << width * height << endl;
	}

	// ���������
	Rectangle(Rectangle& rect2)
	{
		width = rect2.width;
		height = rect2.height;
	}


};



int main()
{
	double wid, hei;

	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����) : ";
	cin >> wid >> hei;
	Rectangle rect1(wid, hei);
	rect1.area();

	Rectangle rect2(rect1);
	cout << "��������� "; rect2.area();


	Rectangle rect3(rect2);
	cout << "�⺻������ "; rect3.area();


	




	return 0;
}



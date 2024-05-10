//실습 3 게임 캐릭터 생성하기
#include "Character.h"



int main()
{
	string name;
	int level = 0;
	int item_num = 0;

	cout << "캐릭터 이름을 입력하세요 : ";
	cin >> name;
	Character character(name, level, item_num);

	character.Menu();


	return 0;
}


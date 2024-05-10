#include "Character.h"


Character::Character(string name, int level, int item_num)
{
	m_name = name;
	m_level = level;
	m_item_num = item_num;
}

void Character::createCharacter()
{
	cout << "캐릭터 이름을 입력하세요 : ";
	cin >> m_name;
}

	//캐릭터 정보 출력
void Character::printCharacter()
{
	cout << "캐릭터 이름 : " << m_name << endl;
	cout << "레벨 : " << m_level << "level" << endl;
	cout << "아이템 수 : " << m_item_num << "개" << endl;
}

void Character::ChangeName()
{
	cout << "변경할 이름을 입력하세요 : ";
	cin >> m_name;
}

void Character::LevelUp()
{
	m_level++;
	cout << "레벨이 상승했습니다. 레벨은 : " << m_level << endl;
}


void Character::PlusItem()
{
	m_item_num++;
	cout << "아이템을 획득했습니다. 현재 아이템 수는 : " << m_item_num << endl;
}

void Character::MinusItem()
{
	if (m_item_num > 0)
	{
		m_item_num--;
		cout << "아이템을 사용하셨습니다. 현재 아이템 수는 : " << m_item_num << endl;
	}
	else
	{
		cout << "보유하신 아이템이 없습니다." << endl;
	}
}

void Character::Menu()
{
	int choice;
	while (1)
	{
	cout << endl;
		cout << "************************" << endl;
		cout << "----------MENU----------" << endl;
		cout << "1. 이름 변경" << endl;
		cout << "2. 레벨 업" << endl;
		cout << "3. 아이템 줍기" << endl;
		cout << "4. 아이템 사용" << endl;
		cout << "5. 캐릭터 정보" << endl;
		cout << "0. 게임 종료" << endl;
		cout << "************************" << endl << endl;
		cout << "하고싶은 번호를 선택해주세요 : ";
		cin >> choice;

		cout << endl;
		switch (choice)
		{
		case 1:
			ChangeName();
			break;
		case 2:
			LevelUp();
			break;
		case 3:
			PlusItem();
			break;
		case 4:
			MinusItem();
			break;
		case 5:
			printCharacter();
			break;
		case 0:
			cout << "게임을 종료합니다." << endl;
			return;
		default:
			cout << "번호를 다시 입력해주세요" << endl;
			break;
		}
	}


}



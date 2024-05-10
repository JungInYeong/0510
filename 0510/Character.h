#pragma once
#include<iostream>
#include <string>
using namespace std;

class Character
{
private:
	string m_name;
	int m_level = 0;
	int m_item_num = 0;

public:
	Character(string name, int level, int item_num);

	void createCharacter();

	void printCharacter();

	void ChangeName();

	void LevelUp();

	void PlusItem();

	void MinusItem();

	void Menu();

};
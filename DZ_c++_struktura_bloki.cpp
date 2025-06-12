#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Player {
	string name;
	int health;
};

struct Enemy {
	int health;
	int damage;
};

int main()
{
	system("chcp 1251 > nul");
	cout << "DZ C++: Структура \"Блоки\"" << endl;

	Player player1;
	player1.name = "Игрок1";
	player1.health = 100;

	Enemy enemy1;
	enemy1.health = 50;
	enemy1.damage = 15;

	cout << "Имя игрока: " << player1.name << ", Здоровье: " << player1.health << endl;
	cout << "Здоровье врага: " << enemy1.health << ", Урон: " << enemy1.damage << endl;

	return 0;
	system("pause > nul");
}
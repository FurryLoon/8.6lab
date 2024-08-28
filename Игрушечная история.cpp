//Задание 3.

//Правильно считается количество кубиков, которое можно получить из бруска.
//Количество кубиков в наборе не превышает количество кубиков, полученное из бруска.
#include <iostream>
#include <string>
#include <cmath>

int main() {

	setlocale(LC_ALL, "Russian");
	int n=2;
	float x, y, z, cube = 0; //x - высота, y - ширина, z - длина
	//Проверка ввода на все переменные с отдельными одинаковыми циклами (потом просмотреть и доработать можно будет как упростить всё)
	while (true) {
		std::cout << "Введите высоту бруска: ";
		std::cin >> x;

		if (std::cin.fail() || std::cin.peek() != '\n' || x < 5) {

			system("cls");
			std::cerr << "Ошибка ввода попробуйте ещё раз\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}
		else {
			break;
		}
	}
	while (true) {
		std::cout << "Введите ширину бруска: ";
		std::cin >> y;

		if (std::cin.fail() || std::cin.peek() != '\n' || y < 5) {

			system("cls");
			std::cerr << "Ошибка ввода попробуйте ещё раз\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}
		else {
			break;
		}
	}
	while (true) {

		std::cout << "Введите длину бруска: ";
		std::cin >> z;
		if (std::cin.fail() || std::cin.peek() != '\n' || z < 5) {

			system("cls");
			std::cerr << "Ошибка ввода попробуйте ещё раз\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}
		else {
			break;
		}
	}
	//Вычисления сколько можно сделать кубов из бруска
	if (x == 5 && z > x && y > x) {
		z /= 5;
		y /= 5;
		cube = floor(z) * floor(y);
	}else if (z == 5 && x > z && y > z)	{
		x /= 5;
		y /= 5;
		cube = floor(x) * floor(y);
	}else if (y == 5 && x > y && z > y)	{
		x /= 5;
		z /= 5;
		cube = floor(x) * floor(z);
	}
	//Вычисление сколько можно сделать наборов из кол-ва кубов 
	while (true) {
		if (pow(n - 1, 3) < cube && cube < pow(n, 3)) {
			std::cout << "\n";
			std::cout << "Вывод:\n";
			std::cout << "Из этого бруска можно изготовить " << cube << " кубиков." << "\n";
			std::cout << "Из них можно составить набор из " << pow(n - 1, 3) << " кубиков." << "\n";
			break;
		}
		else {
			n++;
		}
	}
}

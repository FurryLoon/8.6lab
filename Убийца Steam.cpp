//Задание 4.

//Программа работает корректно с любыми заданными значениями.
//Количество процентов не вводит в заблуждение пользователя.Например, не должно выводиться 100 %, если файл ещё не загрузился.
#include <iostream>
#include <string>

float pivo() //проверка на ввод
{
	setlocale(LC_ALL, "Russian");
	{
		bool isCorrect = false;
		float output;
		do {
			try {
				std::string zxc;
				std::cin >> zxc;
				output = stof(zxc);
				isCorrect = true;
				system("cls");
			}
			catch (...)
			{
				system("cls");
				std::cout << "Было введено неправильное число, повторите ввод: \n";
			}if (isCorrect == true)
			{
				std::cout << "Должно быть число указанное в программе.\n";
			}
		} while (isCorrect == false);

		return output;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	float total, speed,current = 0;
	int time=0,percent=0;
	
	std::cout << "Введите скорость загрузки в мегабайтах/cекунду: ";
	speed = pivo();
	
	std::cout << "\n";
	
	std::cout << "Введите общий размер файла: ";
	total = pivo();

	while (current < total) {

			std::cout << "Прошло " << time << " сек. Скачано " <<static_cast<int>(current)<< " из "<< total <<" МБ(" << percent << "%)" << "\n";
			time++;			
			current += speed;
			percent = current / total * 100;
	}std::cout << "Прошло " << time << " сек. Скачано " << total << " из " << total << " МБ(100%)" << "\n";
}

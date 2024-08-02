//Задание 2.

//Все величины должны измеряться в одной шкале — от 0 до 1.
//Мощность удара считается с учётом сопротивляемости.
#include <iostream>
#include <string>
float pivo()
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
			}if (isCorrect == true && (1 < output || output < 0))
			{
				std::cout << "Должно быть число указанное в программе.\n";
			}
		} while (isCorrect == false || isCorrect == true && (1 < output || output < 0));
		
		return output;
	}
};
int main(){
	setlocale(LC_ALL, "Russian"); 
	float spellcast, Reduce, hitpoint;

	std::cout << "Введите хп ОРКА от 0 до 1: ";
	hitpoint = pivo();
	std::cout << "Введите сопротивление урону от 0 до 1: ";
	Reduce = pivo();

	do{
		std::cout << "Здоровье ОРКА: " << hitpoint<<" Сопротивление ОРКА: "<<Reduce<<"\n";
		std::cout << "Введите силу удара магии от 0 до 1: ";
		spellcast = pivo();
		spellcast *= (1 - Reduce);
		hitpoint -= spellcast;
	} while (hitpoint > 0);

}
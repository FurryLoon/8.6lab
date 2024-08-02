//Задание 1

//Правильно использована формула.
//В расчётах используются переменные типа float.
#include <iostream>
#include <cmath>

int main()	{
	setlocale(LC_ALL, "Russian");
	float F,m,t,a,b;
	std::cout << "Введите массу, силу тяги и время звездолёта: ";
	std::cin >> m >> F >> t;
	a = F / m;
	b = (a * std::pow(t, 2)) / 2;
	
	std::cout << "Звездолёт окажется в: " << b << " еденицах от изначальной точки";

}

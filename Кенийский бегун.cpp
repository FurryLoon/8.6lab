//Задание 5. Кенийский бегун

//Важно, чтобы время среднего темпа было выведено в формате «минуты и секунды», как в примере.
#include <iostream>
#include <cmath>

int main() {
	
	setlocale(LC_ALL, "Russian");
	
    int kilometers, i = 0, minutes;
    float general = 0, second;
    while (true)
    {
        std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал?\n";
        std::cin >> kilometers;

        if (std::cin.fail() || std::cin.peek() != '\n' || kilometers < 0) {

            system("cls");
            std::cerr << "Ошибка ввода попробуйте ещё раз\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
        else {
            break;
        }

    }
	while (i<kilometers)    {
        i++;
        while (true)    {
            
            std::cout << "Какой у тебя был темп на километре " << i << "?" << "\n";
            std::cin >> second;
            if (std::cin.fail() || std::cin.peek() != '\n' || second < 0) {

                system("cls");
                std::cerr << "Ошибка ввода попробуйте ещё раз\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            }
            else {
                break;
            } 
        } 
        general += second;
	}
    minutes = general / 6 / 60;
    second = general / 6 - (minutes*60);
    std::cout << "Твой средний темп за тренировку: " << minutes << " минуты " << std::round(second) << " секунды.";
}
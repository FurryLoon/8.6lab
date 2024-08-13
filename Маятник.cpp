//Задание 6. Маятник

//Программа правильно считает количество затуханий.
//Цикл не бесконечный.
//Обеспечить контроль ввода
#include <iostream>
#include <limits>
#include <numeric>

int main()  {
    setlocale(LC_ALL, "Russian");
    int i=0;
    float oscillation, fading = 0, oscillationcomplete;;
    while (true)
    {
        std::cout << "Введите колебание маятника: ";
        std::cin >> oscillation;
        
        if (std::cin.fail() || std::cin.peek() != '\n'||oscillation<0) {
            
            system("cls");
            std::cerr << "Ошибка ввода попробуйте ещё раз\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
           
        }
        else {
            break;
        }
        
    }
    while (true)
    {
        std::cout << "Введите при каких колебаниях маятник можно считать остановившимся: ";
        std::cin >> oscillationcomplete;
        if (std::cin.fail() || std::cin.peek() != '\n' || oscillationcomplete < 0||oscillationcomplete>oscillation) {

            system("cls");
            std::cerr << "Ошибка ввода попробуйте ещё раз\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
        else if (oscillation == oscillationcomplete) {
            std::cout << "Маятник находится в состоянии покоя";
            return 0;
        }
        else {
            break;
        }

    }
    while (oscillation >= oscillationcomplete) {
        fading = oscillation * 0.084;
        oscillation -= fading;
        i++;
    }

    std::cout << "Через " << i << " качаний маятника, маятник можно считать остановившимся"<<"\n";
    std::cout << "На амплитуде в: " << oscillation <<"\n";
    
}

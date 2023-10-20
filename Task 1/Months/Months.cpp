#include <iostream>

enum Months {
    January,
    February, 
    March,
    April,
    May,
    June,
    July,
    August, 
    September, 
    October,
    November, 
    December
};

int main()
{
    setlocale(LC_ALL, "Russian");
    bool count = 1;
    int num;
    while (count != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> num;
        Months monts = static_cast<Months>(num);
        switch (static_cast<int>(monts)) {
        case 0: std::cout << "До свидания" << std::endl; count = 0; break;
        case 1: std::cout << "Январь" << std::endl; break;
        case 2: std::cout << "Февраль" << std::endl; break;
        case 3: std::cout << "Март" << std::endl; break;
        case 4: std::cout << "Апрель" << std::endl; break;
        case 5: std::cout << "Май" << std::endl; break;
        case 6: std::cout << "Июнь" << std::endl; break;
        case 7: std::cout << "Июль" << std::endl; break;
        case 8: std::cout << "Август" << std::endl; break;
        case 9: std::cout << "Сентябрь" << std::endl; break;
        case 10: std::cout << "Октябрь" << std::endl; break;
        case 11: std::cout << "Ноябрь" << std::endl; break;
        case 12: std::cout << "Декабрь" << std::endl; break;
        default: std::cout << "Такого месяца не существует" << std::endl; break;
        }
    }
}


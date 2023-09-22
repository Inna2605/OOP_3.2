/*Создайте класс Date, который содержит информацию о дате (день, месяц, год).
С помощью перегрузки операторов определите операцию разности двух дат
(результат - это количество дней между датами), а также операцию увеличения даты
на определенное количество дней.*/
#include <iostream>
#include"Date.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

    int a = 1;
    while (a != 0) {
        cout << "\n\nВыберите необходимое действие:\n"
            "0. Завершение;\n"
            "1. Определение разности двух дат;\n"
            "2. Увеличения даты на определенное количество дней;\n";
        cin >> a;
        switch (a) {
        case 0: {
            break;
        }
        case 1: {
            Date date1;
            cout << "Введите первую дату\n";

            date1.setDay();
            date1.setMonth();
            date1.setYear();

            date1.Show();

            Date date2;
            cout << "\n\nВведите вторую дату\n";

            date2.setDay();
            date2.setMonth();
            date2.setYear();

            date2.Show();

            Date day = date1 - date2;
            day.ShowDifference();
        }
              break;
        case 2: {
            Date date;
            cout << "Введите дату\n";

            date.setDay();
            date.setMonth();
            date.setYear();

            date.Show();

            int days;
            cout << "\n\nВведите на сколько количество дней необходимо увеличить дату: ";
            cin >> days;

            Date day = date + days;
            day.Show();
        }
              break;
        
        default:cout << "неправельно выбраный вариант действия!";
        }
    }
}

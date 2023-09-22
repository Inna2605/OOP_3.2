/*Создайте класс Date, который содержит информацию о дате (день, месяц, год).
С помощью перегрузки операторов определите операцию разности двух дат
(результат - это количество дней между датами), а также операцию увеличения даты
на определенное количество дней.*/
#include "Date.h"
#include<iostream>
using namespace std;

Date::Date()
{
	Day = 0;
	Month = 0;
	Year = 0;
}

void Date::setDay()
{
	cout << "Введите день: ";
	cin >> Day;
}

void Date::setMonth()
{
	cout << "Введите месяц: ";
	cin >> Month;
	if (Month > 12 || Month < 1)
		cout << "Неправильно введеный месяц!";
}

void Date::setYear()
{
	cout << "Введите год: ";
	cin >> Year;
	if (Year > 9999 || Year < 1)
		cout << "Неправильно введеный год!";
}

int Date::getDay()
{
	return Day;
}

int Date::getMonth()
{
	return Month;
}

int Date::getYear()
{
	return Year;
}

void Date::Show()
{
	cout << "Дата: ";
	cout << getDay() << '.' << getMonth() << '.' << getYear();
}

void Date::ShowDifference()
{
    cout << "Разница между датами в днях: ";
    cout << getDay();
}

Date Date::operator-(Date date2) //разность двух дат
{
    Date difference;
    if (Year % 400 == 0 || Year % 4 == 0) // Проверка на високосный год
    {
        switch (Month)
        {
        case 1: {Day = Day; }break;
        case 2: {Day = Day + 31; }break;
        case 3: {Day = Day + 31 + 29; }break;
        case 4: {Day = Day + 31 + 29 + 31; }break;
        case 5: {Day = Day + 31 + 29 + 31 + 30; }break;
        case 6: {Day = Day + 31 + 29 + 31 + 30 + 31; }break;
        case 7: {Day = Day + 31 + 29 + 31 + 30 + 31 + 30; }break;
        case 8: {Day = Day + 31 + 29 + 31 + 30 + 31 + 30 + 31; }break;
        case 9: {Day = Day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31; }break;
        case 10: {Day = Day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 30; }break;
        case 11: {Day = Day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30; }break;
        case 12: {Day = Day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31; }break;
        }
        
        if (Year == date2.Year) {
            if (Day > date2.Day) {
                difference.Day = Day - date2.Day;
            }
            else if (Day < date2.Day) {
                difference.Day = date2.Day - Day;
            }
        }
        else if (Year > date2.Year) {
            int Y = (((Year - date2.Year) / 4) * 366) + (((Year - date2.Year) - ((Year - date2.Year) / 4)) * 365);
            if (Day > date2.Day) {
                difference.Day = (Day - date2.Day) + Y;
            }
            else if (Day < date2.Day) {
                difference.Day = (date2.Day - Day) + Y;
            }
        }
        else if (Year < date2.Year) {
            int Y = (((date2.Year - Year) / 4) * 366) + (((date2.Year - Year) - ((date2.Year - Year) / 4)) * 365);
            if (Day > date2.Day) {
                difference.Day = (Day - date2.Day) + Y;
            }
            else if (Day < date2.Day) {
                difference.Day = (date2.Day - Day) + Y;
            }
        }
    }
    else if (Year % 100 != 0)// Проверка на не високосный год
    {
        switch (Month)
        {
        case 1: {Day = Day; }break;
        case 2: {Day = Day + 31; }break;
        case 3: {Day = Day + 31 + 28; }break;
        case 4: {Day = Day + 31 + 28 + 31; }break;
        case 5: {Day = Day + 31 + 28 + 31 + 30; }break;
        case 6: {Day = Day + 31 + 28 + 31 + 30 + 31; }break;
        case 7: {Day = Day + 31 + 28 + 31 + 30 + 31 + 30; }break;
        case 8: {Day = Day + 31 + 28 + 31 + 30 + 31 + 30 + 31; }break;
        case 9: {Day = Day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; }break;
        case 10: {Day = Day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 30; }break;
        case 11: {Day = Day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30; }break;
        case 12: {Day = Day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31; }break;
        }
        if (Year == date2.Year) {
            if (Day > date2.Day) {
                difference.Day = Day - date2.Day;
            }
            else if (Day < date2.Day) {
                difference.Day = date2.Day - Day;
            }
        }
        else if (Year > date2.Year) {
            int Y = (((Year - date2.Year) / 4) * 366) + (((Year - date2.Year) - ((Year - date2.Year) / 4)) * 365);
            if (Day > date2.Day) {
                difference.Day = (Day - date2.Day) + Y;
            }
            else if (Day < date2.Day) {
                difference.Day = (date2.Day - Day) + Y;
            }
        }
        else if (Year < date2.Year) {
            int Y = (((date2.Year - Year) / 4) * 366) + (((date2.Year - Year) - ((date2.Year - Year) / 4)) * 365);
            if (Day > date2.Day) {
                difference.Day = (Day - date2.Day) + Y;
            }
            else if (Day < date2.Day) {
                difference.Day = (date2.Day - Day) + Y;
            }
        }
    }
    return difference;
}

Date Date::operator+(int quantity)
{
    Date increase;
    if (Year % 400 == 0 || Year % 4 == 0) // Проверка на високосный год 2020
    {
        int leapYear1[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//високосный год
        int leapYear2[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//не високосный год
        int M = Month - 1;

        if ((Day + quantity) >= leapYear1[M]) {//33 > 31
            if (Month != 12) {
                Day = Day + quantity;
                while (Day > leapYear1[M] && M <= 11) {
                    Day = Day - leapYear1[M];
                    M++;
                    if (M == 12) {
                        Year++;
                        M = 0;
                        if (Year % 100 != 0) {// Проверка на не високосный год
                            leapYear1[M] = leapYear2[M];
                        }
                        else if (Year % 400 == 0 || Year % 4 == 0) {//Проверка на високосный год 2020
                            leapYear2[M] = leapYear1[M];
                        }
                    }
                    if (Day <= leapYear1[M - 1] || Day <= leapYear2[M - 1]) {
                        increase.Day = Day;
                        increase.Month = M + 1;
                        increase.Year = Year;
                    }
                }
            }
            else {
                increase.Day = (Day + quantity) - leapYear1[M];
                increase.Month = Month - M;
                increase.Year = Year + 1;
            }
        }
        else if (Day < leapYear1[M]) {
            increase.Day = Day + quantity;
            increase.Month = M + 1;
            increase.Year = Year;
        }
    }
    else if (Year % 100 != 0)// Проверка на не високосный год
    {
        int leapYear1[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//високосный год
        int leapYear2[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//не високосный год
        int M = Month - 1;
        if ((Day + quantity) >= leapYear2[M]) {
            if (Month != 12) {
                Day = Day + quantity;

                while (Day > leapYear2[M] && M <= 11) {
                    Day = Day - leapYear2[M];
                    M++;
                    if (M == 12) {
                        Year++;
                        M = 0;
                        if (Year % 100 != 0) {// Проверка на не високосный год
                            leapYear2[M] = leapYear2[M];
                        }
                        else if (Year % 400 == 0 || Year % 4 == 0) {//Проверка на високосный год 2020
                            leapYear2[M] = leapYear1[M];
                        }
                    }
                    if (Day <= leapYear2[M - 1] || Day <= leapYear1[M - 1]) {
                        increase.Day = Day;
                        increase.Month = M + 1;
                        increase.Year = Year;
                    }
                }
            }
            else {
                increase.Day = (Day + quantity) - leapYear2[M];
                increase.Month = Month - M;
                increase.Year = Year + 1;
            }
        }
        else if (Day < leapYear2[M]) {
            increase.Day = Day + quantity;
            increase.Month = M + 1;
            increase.Year = Year;
        }
    }
    return increase;
}
 
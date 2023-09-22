/*Создайте класс Date, который содержит информацию о дате (день, месяц, год).
С помощью перегрузки операторов определите операцию разности двух дат
(результат - это количество дней между датами), а также операцию увеличения даты
на определенное количество дней.*/
#pragma once
class Date
{
	int Day;
	int Month;
	int Year;
public:
	Date();

	void setDay();
	void setMonth();
	void setYear();

	int getDay();
	int getMonth();
	int getYear();

	void Show();
	void ShowDifference();

	Date operator-(Date date2);
	Date operator+(int quantity);
};


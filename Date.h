/*�������� ����� Date, ������� �������� ���������� � ���� (����, �����, ���).
� ������� ���������� ���������� ���������� �������� �������� ���� ���
(��������� - ��� ���������� ���� ����� ������), � ����� �������� ���������� ����
�� ������������ ���������� ����.*/
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


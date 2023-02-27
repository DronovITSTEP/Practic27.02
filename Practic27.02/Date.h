#pragma once
#include <iostream>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(int day, int month, int year): 
		day{day}, month{month}, year{year}{}
	Date(int year): Date(1,1, year){}

	friend void displayDate(Date);
};


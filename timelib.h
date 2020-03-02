/**
* Author: Alexander Kötter
* Date: 2020-02-11
* Edit: 2020-02-25
**/
#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

struct date{int day; int month; int year;};
int day_of_the_year(int day,int month, int year);
int exists_date(struct date input_date);
int get_days_for_month(int month, int year);
int is_leapyear(int year);
int weekday(year);
struct date input_date(int *day, int *month, int *year);

#endif // TIMELIB_H_INCLUDED

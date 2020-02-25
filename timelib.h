/**
* Author: Alexander Kötter
* Date: 2020-02-11
* Edit: 2020-02-25
**/
#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED
int day_of_the_year(int day,int month, int year);
int exists_date(int day,int month, int year);
int get_days_for_month(int month, int year);
int is_leapyear(int year);
int weekday(year);
void input_date(int *day, int *month, int *year);

#endif // TIMELIB_H_INCLUDED

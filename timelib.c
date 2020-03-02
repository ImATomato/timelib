/**
* Author: Alexander Kötter
* Date: 2020-02-11
* Edit: 2020-02-25
**/


#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};


 int weekday(struct date input_date)
 {
 int w = (1 + 5*((input_date.year-1)%4) +4*((input_date.year-1)%100) + 6*((input_date.year-1)%400))%7;
 return w;
 }


int is_leapyear(int year)
 {
          if (year > 2400 ||year < 1582)
    {
        return -1;
    }
     if (year % 4 == 0 ||year % 400 == 0)
    {
        return 1;
    }
     if (year % 100)
    {
        return 1;
    }

 }

 int get_days_for_month(struct date input_date)
 {

     int days[12] = {1,-2,1,0,1,0,1,1,0,1,0,1};
 if (input_date.month >0 && input_date.month <13){
    int days_month = 30 + days[input_date.month-1] + is_leapyear(input_date.year);
 return days_month;
 }
 else {return -1;}
 }

int exists_date(struct date input_date)
 {
     if((input_date.day > 0
         && input_date.day <= get_days_for_month(input_date.month, input_date.year))
         && input_date.month > 0 && input_date.month < 13 && input_date.year >= 1582
         && input_date.year <= 2400)
    {
        return 1;
    }
    else {return -1;}
 }

struct date input_date()
{
    struct date in_date;
    do
    {
        printf("Input day: ");
        scanf("%i", &in_date.day);
        fflush(stdin);
        printf("Input month: ");
        scanf("%i", &in_date.month);
        fflush(stdin);
        printf("Input year: ");
        scanf("%i", &in_date.year);
        fflush(stdin);
    }
    while (exists_date(*day, *month, *year) != 1);
}


int day_of_the_year(struct date input_date)
 {
   // int x=0;
      int tage[12] = {0,1,-1,0,0,1,1,2,3,3,4,4};
      int exists = exists_date(input_date.day, input_date.month, input_date.year);
      int lyear = is_leapyear(input_date.year);
      int day_of_year;

      if(exists = 1)
      {
          if (input_date.month < 3)
          {
            day_of_year = (input_date.month - 1) * 30 + input_date.day + tage[(input_date.month-1)];
          }
          else
          {
           day_of_year = (input_date.month - 1) * 30 + input_date.day + tage[(input_date.month-1)] + lyear;
          }
           return day_of_year;
      }
      else
      {
          return -1;
      }
 }

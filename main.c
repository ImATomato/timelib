/**
* Tag des Jahres
*
* Autor: Alexander Kötter
* Datum 2020-01-27
**/

#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"
//Schaltjahrfunktion
/**
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

 int get_days_for_month(int month, int year)
 {

     int days[12] = {1,-2,1,0,1,0,1,1,0,1,0,1};
 if (month >0 && month <13){
    int days_month = 30 + days[month-1] + is_leapyear(year);
 return days_month;
 }
 else {return -1;}
 }

int exists_date(int day,int month, int year)
 {
     if((day >0 &&day <= get_days_for_month(month,year)) && month > 0 && month < 13 && year >= 1582 && year <= 2400)
    {
        return 1;
    }
    else {return -1;}
 }

int day_of_the_year(int day,int month, int year)
 {
   // int x=0;
      int tage[12] = {0,1,-1,0,0,1,1,2,3,3,4,4};
      int exists = exists_date(day, month, year);
      int lyear = is_leapyear(year);
      int day_of_year;

      if(exists = 1)
      {
          if (month < 3)
          {
            day_of_year = (month - 1) * 30 + day + tage[(month-1)];
          }
          else
          {
           day_of_year = (month - 1) * 30 + day + tage[(month-1)] + lyear;
          }
           return day_of_year;
      }
      else
      {
          return -1;
      }
 }**/
int main()
{
    int day, month, year, tagdesjahres, lyear;
//int existdate;


    printf("Jahr eingeben: ");
    scanf("%i",&year);
    fflush(stdin);

    printf("Monat eingeben: ");
    scanf("%i",&month);
    fflush(stdin);

    printf("Tag eingeben: ");
    scanf("%i",&day);
    fflush(stdin);

 int existdate = exists_date(day,month,year);

    if(existdate == 1)
  {tagdesjahres =  day_of_the_year(day,month,year);
    printf("\nTag des Jahres: %i",tagdesjahres);
  }
  else
  {
         printf("\nUngültiges Datum.");
  }

    printf("\n\nHello world!\n");
    return 0;
}

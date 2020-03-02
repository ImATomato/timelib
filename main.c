/**
* Tag des Jahres
*
* Author: Alexander Kötter
* Date 2020-01-27
* Edit: 2020-02-25
**/

#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"
//Schaltjahrfunktion

int main()
{
    int day, month, year, tagdesjahres, lyear;
    struct date in_date;
//int existdate;

    in_date = input_date(&day, &month, &year);
    /**printf("Jahr eingeben: ");
    scanf("%i",&year);
    fflush(stdin);

    printf("Monat eingeben: ");
    scanf("%i",&month);
    fflush(stdin);

    printf("Tag eingeben: ");
    scanf("%i",&day);
    fflush(stdin);**/

 int existdate = exists_date(in_date);

    if(existdate == 1)
  {tagdesjahres =  day_of_the_year(day,month,year);
    printf("\nDay of the year: %i",tagdesjahres);
  }
  else
  {
         printf("\nInvalid Date.");
  }

    printf("\n\nHello world!\n");
    return 0;
}

/**
* Tag des Jahres
*
* Autor: Alexander Kötter
* Datum 2020-01-27
**/

#include <stdio.h>
#include <stdlib.h>
//Schaltjahrfunktion
int is_leapyear(int year)
{
    //Fall, dass für year mod 4 == 0 ist
    if (year % 4 == 0)
    {
        //Fall, dass für year mod 100 == 0 ist
        if (year % 100 == 0)
        {
            //Fall, dass für year mod 400 == 0 ist
            if (year % 400 == 0)
            {

                return 1;
            }
            //Fall, dass für year mod 4 und mod 100 == 0 sind, aber mod 400 != 0 ist
            else
            {
                return 0;
            }
        }
        //Fall, dass für year mod 4 und mod 100 == 0 sind
        else
        {
            return 1;
        }
    }
    //Fall, dass für Jahreszahl mod 4, mod 100 und mod 400 != 0 sind
    else
    {
        return 0;
    }

}


int main()
{
    int day, month, year, tagdesjahres, lyear;
    //Datumsdifferenzen
    int tage[12] = {1,-1,0,0,1,1,2,3,3,4,4};
    int i;
    printf("Jahr eingeben: ");
    scanf("%i",&year);
    fflush(stdin);
    do
    {
        printf("Monat eingeben: ");
        scanf("%i",&month);
        fflush(stdin);
    } while (month < 1 || month > 12);
    lyear = is_leapyear(year);
    do
    {
    printf("Tag eingeben: ");
    scanf("%i",&day);
    fflush(stdin);
    //Prüfen, ob Eingabe richtig
    } while ((day < 1 && day > 32) ||
             (day == 29 && lyear == 0) ||
             (day == 31 && month %2 == 0 && month > 2 && month < 7) ||
             (day == 31 && month %2 == 1 && month > 2 && month > 8));

//Simple Addition
    tagdesjahres = (month - 1) * 30 + day + tage[(month-2)] + lyear;

    if (month == 2)
    {
        tagdesjahres -=1;
    }
    printf("\nTag des Jahres: %i",tagdesjahres);

     printf("\nTag des Jahres: %i",lyear);

    printf("Hello world!\n");
    return 0;
}

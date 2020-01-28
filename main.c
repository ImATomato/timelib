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
    if (year < 1582)
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
return -1;
}

}


int main()
{
    int tag, monat, jahr, tagdesjahres, sjahr;
    //Datumsdifferenzen
    int tage[12] = {1,-1,0,0,1,1,2,3,3,4,4};
    int i;
    printf("Jahr eingeben: ");
    scanf("%i",&jahr);
    fflush(stdin);
    do
    {
        printf("Monat eingeben: ");
        scanf("%i",&monat);
        fflush(stdin);
    } while (monat < 1 || monat > 12);
    sjahr = is_leapyear(jahr);
    do
    {
    printf("Tag eingeben: ");
    scanf("%i",&tag);
    fflush(stdin);
    //Prüfen, ob Eingabe richtig
    } while ((tag < 1 && tag > 32) ||
             (tag == 29 && sjahr == 0) ||
             (tag == 31 && monat %2 == 0 && monat > 2 && monat < 7) ||
             (tag == 31 && monat %2 == 1 && monat > 2 && monat > 8));

//Simple Addition
    tagdesjahres = (monat - 1) * 30 + tag + tage[(monat-2)] + sjahr;

    if (monat == 2)
    {
        tagdesjahres -=1;
    }
    printf("\nTag des Jahres: %i",tagdesjahres);

     printf("\nTag des Jahres: %i",sjahr);

    printf("Hello world!\n");
    return 0;
}

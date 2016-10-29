#include <stdio.h>
#include <stdlib.h>

int citesteNumar()
{
    int numarIntrodus;
    scanf("%d", &numarIntrodus);

    return numarIntrodus;
}

void afiseazaMeniu()
{
    printf("                            [ Meniu ]\n");
    printf("Apasati [1] pentru a introduce un numar de la tastatura.\n");
    printf("Apasati [2] pentru a verifica daca ulimul numar introdus este par.\n");
    printf("Apasati [3] pentru a verifica daca ultimul numar introdus este palindrom.\n");
    printf("Apasati [0] pentru a iesi din program.\n");
}

void optiuneaDoi(int numar)
{
    /*
    if (numar % 2 == 0)
    {
        printf("%d este par.\n", numar);
    }
    else
    {
        printf("%d este impar.\n", numar);
    }
    */

    printf((numar % 2 == 0) ? "%d este par.\n" : "%d nu este par.\n", numar);
}

void optiuneaTrei(int numar)
{
    int c;
    int invers = 0;
    int copieNumar = numar;

    while (copieNumar > 0)
    {
        c = copieNumar % 10;
        invers = invers * 10 + c;
        copieNumar = copieNumar / 10;
    }

    if(numar == invers)
    {
        printf("Numarul este palindrom.\n");
    }
    else
    {
        printf("Numarul nu este palindrom.\n");
    }
}

int main()
{
    int numarMeniu;
    int numarIntrodus = -1;
    int opreste = 0;

    afiseazaMeniu();

    while(opreste == 0)
    {
         printf("Introduceti optiunea dorita: ");
         numarMeniu = citesteNumar();

         switch(numarMeniu)
         {
            case 0:
            {
                opreste = 1;
                break;
            }
            case 1:
            {
                printf("Introduceti numarul: ");
                numarIntrodus = citesteNumar();
                break;
            }
            case 2:
            {
                while (numarIntrodus < 0)
                {
                    printf("Introduceti numarul: ");
                    numarIntrodus = citesteNumar();
                }
                optiuneaDoi(numarIntrodus);
                break;
            }
            case 3:
            {
                while (numarIntrodus < 0)
                {
                    printf("Introduceti numarul: ");
                    numarIntrodus = citesteNumar();
                }
                optiuneaTrei(numarIntrodus);
                break;
            }
            default:
            {
                printf("Optiune invalida.\n");
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numar,n1,n2;
        do
        {
    printf("Adauga un numar intre 1 si 99 : ");
        scanf("%d", &numar);
        }
        while((numar < 1)  ||  numar > 99);
        if(numar < 10) {
            switch(numar){
            case 1:
                printf("Numar roman : [I]");
                break;
            case 2:
                printf("Numar roman : [II]");
                break;
            case 3:
                printf("Numar roman : [III]");
                break;
            case 4:
                printf("Numar roman : [IV]");
                break;
            case 5:
                printf("Numar roman : [V]");
                break;
            case 6:
                printf("Numar roman : [VI]");
                break;
            case 7:
                printf("Numar roman : [VII]");
                break;
            case 8:
                printf("Numar roman : [VIII]");
                break;
            case 9:
                printf("Numar roman : [IX]");
                break;
            }
        }
            n1=numar/10;
            n2=numar%10;
            switch(n1){
            case 1:
               switch(n2){

                    case 1:
                printf("Numar roman : [XI]");
                break;
                    case 2:
                printf("Numar roman : [XII]");
                break;
                    case 3:
                printf("Numar roman : [XIII]");
                break;
                    case 4:
                printf("Numar roman : [XIV]");
                break;
                    case 5:
                printf("Numar roman : [XV]");
                break;
                    case 6:
                printf("Numar roman : [XVI]");
                break;
                    case 7:
                printf("Numar roman : [XVII]");
                break;
                    case 8:
                printf("Numar roman : [XVIII]");
                break;
                    case 9:
                printf("Numar roman : [XIX]");
                break;
                    case 0:
                printf("Numar roman : [X]");
                break;
             }
             break;
             case 2:
                switch(n2){

                    case 1:
                printf("Numar roman : [XXI]");
                break;
                    case 2:
                printf("Numar roman : [XXII]");
                break;
                    case 3:
                printf("Numar roman : [XXIII]");
                break;
                    case 4:
                printf("Numar roman : [XXIV]");
                break;
                    case 5:
                printf("Numar roman : [XXV]");
                break;
                    case 6:
                printf("Numar roman : [XXVI]");
                break;
                    case 7:
                printf("Numar roman : [XXVII]");
                break;
                    case 8:
                printf("Numar roman : [XXVIII]");
                break;
                    case 9:
                printf("Numar roman : [XXIX]");
                break;
                    case 0:
                printf("Numar roman : [XX]");
                break;
             }
             break;
             case 3:
                switch(n2){

                    case 1:
                printf("Numar roman : [XXXI]");
                break;
                    case 2:
                printf("Numar roman : [XXXII]");
                break;
                    case 3:
                printf("Numar roman : [XXXIII]");
                break;
                    case 4:
                printf("Numar roman : [XXXIV]");
                break;
                    case 5:
                printf("Numar roman : [XXXV]");
                break;
                    case 6:
                printf("Numar roman : [XXXVI]");
                break;
                    case 7:
                printf("Numar roman : [XXXVII]");
                break;
                    case 8:
                printf("Numar roman : [XXXVIII]");
                break;
                    case 9:
                printf("Numar roman : [XXXIX]");
                break;
                    case 0:
                printf("Numar roman : [XXX]");
                break;
            }
            break;
            case 4:
                switch(n2){

                    case 1:
                printf("Numar roman : [XLI]");
                break;
                    case 2:
                printf("Numar roman : [XLII]");
                break;
                    case 3:
                printf("Numar roman : [XLIII]");
                break;
                    case 4:
                printf("Numar roman : [XLIV]");
                break;
                    case 5:
                printf("Numar roman : [XLV]");
                break;
                    case 6:
                printf("Numar roman : [XLVI]");
                break;
                    case 7:
                printf("Numar roman : [XLVII]");
                break;
                    case 8:
                printf("Numar roman : [XLVIII]");
                break;
                    case 9:
                printf("Numar roman : [XLIX]");
                break;
                    case 0:
                printf("Numar roman : [XL]");
                break;
            }
            break;
            case 5:
                switch(n2){

                    case 1:
                printf("Numar roman : [LI]");
                break;
                    case 2:
                printf("Numar roman : [LII]");
                break;
                    case 3:
                printf("Numar roman : [LIII]");
                break;
                    case 4:
                printf("Numar roman : [LIV]");
                break;
                    case 5:
                printf("Numar roman : [LV]");
                break;
                    case 6:
                printf("Numar roman : [LVI]");
                break;
                    case 7:
                printf("Numar roman : [LVII]");
                break;
                    case 8:
                printf("Numar roman : [LVIII]");
                break;
                    case 9:
                printf("Numar roman : [LIX]");
                break;
                    case 0:
                printf("Numar roman : [L]");
                break;
            }
            break;
            case 6:
                switch(n2){

                    case 1:
                printf("Numar roman : [LXI]");
                break;
                    case 2:
                printf("Numar roman : [LXII]");
                break;
                    case 3:
                printf("Numar roman : [LXIII]");
                break;
                    case 4:
                printf("Numar roman : [LXIV]");
                break;
                    case 5:
                printf("Numar roman : [LXV]");
                break;
                    case 6:
                printf("Numar roman : [LXVI]");
                break;
                    case 7:
                printf("Numar roman : [LXVII]");
                break;
                    case 8:
                printf("Numar roman : [LXVIII]");
                break;
                    case 9:
                printf("Numar roman : [LXIX]");
                break;
                    case 0:
                printf("Numar roman : [LX]");
                break;
            }
            break;
            case 7:
                switch(n2){

                    case 1:
                printf("Numar roman : [LXXI]");
                break;
                    case 2:
                printf("Numar roman : [LXXII]");
                break;
                    case 3:
                printf("Numar roman : [LXXIII]");
                break;
                    case 4:
                printf("Numar roman : [LXXIV]");
                break;
                    case 5:
                printf("Numar roman : [LXXV]");
                break;
                    case 6:
                printf("Numar roman : [LXXVI]");
                break;
                    case 7:
                printf("Numar roman : [LXXVII]");
                break;
                    case 8:
                printf("Numar roman : [LXXVIII]");
                break;
                    case 9:
                printf("Numar roman : [LXXIX]");
                break;
                    case 0:
                printf("Numar roman : [LXX]");
                break;
            }
            break;
            case 8:
                switch(n2){

                    case 1:
                printf("Numar roman : [LXXXI]");
                break;
                    case 2:
                printf("Numar roman : [LXXXII]");
                break;
                    case 3:
                printf("Numar roman : [LXXXIII]");
                break;
                    case 4:
                printf("Numar roman : [LXXXIV]");
                break;
                    case 5:
                printf("Numar roman : [LXXXV]");
                break;
                    case 6:
                printf("Numar roman : [LXXXVI]");
                break;
                    case 7:
                printf("Numar roman : [LXXXVII]");
                break;
                    case 8:
                printf("Numar roman : [LXXXVIII]");
                break;
                    case 9:
                printf("Numar roman : [LXXXIX]");
                break;
                    case 0:
                printf("Numar roman : [LXXX]");
                break;
            }
            break;
            case 9:
                switch(n2){

                    case 1:
                printf("Numar roman : [XCI]");
                break;
                    case 2:
                printf("Numar roman : [XCII]");
                break;
                    case 3:
                printf("Numar roman : [XCIII]");
                break;
                    case 4:
                printf("Numar roman : [XCIV]");
                break;
                    case 5:
                printf("Numar roman : [XCV]");
                break;
                    case 6:
                printf("Numar roman : [XCVI]");
                break;
                    case 7:
                printf("Numar roman : [XCVII]");
                break;
                    case 8:
                printf("Numar roman : [XCVIII]");
                break;
                    case 9:
                printf("Numar roman : [XCIX]");
                break;
               }
               break;
            }
    return 0;
}

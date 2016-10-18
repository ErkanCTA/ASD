#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an,luna,zi,lunazi;
    printf("Adauga anul : ");
        scanf("%d", &an);
        do
        {
    printf("Adauga luna : ");
        scanf("%d", &luna);
        }
        while((luna < 1)  ||  luna > 12);
    printf("Adauga ziua : ");
        scanf("%d", &zi);
    switch(luna){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            lunazi=31;
            break;
        case 2:
            if((an%4==0)||((an%400==0)&&(an%100==1)))
                lunazi=29;
            else
                lunazi=28;
                break;
        default:
                lunazi=30;
                break;
                }
        if((zi==lunazi)&&(luna==12)) { an++;
                                    luna=1;
                                    zi=1; }
        else if(zi==lunazi) {   luna=luna+1;
                                zi=1;   }
        else if(zi<lunazi) zi++;
        else printf("Zi introdusa gresit in luna\n");
        printf("[ %d %d %d ]",an , luna, zi);

    return 0;

}

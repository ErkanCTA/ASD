#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anc,lunac,zic,anb,lunab,zib,varsta;
    printf("Adauga anul nasterii : ");
        scanf("%d", &anb);
        do
        {
    printf("Adauga luna naterii : ");
        scanf("%d", &lunab);
        }
        while((lunab < 1)  ||  lunab > 12);
    printf("Adauga ziua nasterii : ");
        scanf("%d", &zib);
    printf("Adauga anul prezent : ");
        scanf("%d", &anc);
        do
        {
    printf("Adauga luna prezenta : ");
        scanf("%d", &lunac);
        }
        while((lunac < 1)  ||  lunac > 12);
    printf("Adauga ziua prezenta : ");
        scanf("%d", &zic);
        varsta=anc-anb-1;
        if((lunab == lunac) && (zib == zic)){   varsta=anc-anb;
                                                printf("La multi ani, varsta : [%d]", varsta);
                                            }
        else    printf("Varsta : [%d]", varsta);

    return 0;
}

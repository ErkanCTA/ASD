#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr;
        printf("Cititi un numar : ");
        scanf("%d", &nr);
            if(nr%5==0) printf("Numarul este divizibil cu 5");
                else printf("Numarul nu este divizibil cu 5");
    return 0;
}

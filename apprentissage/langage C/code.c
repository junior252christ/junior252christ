#include <stdio.h>
#include <conio.h>
#include <math.h>
    int main()
        {
            int i = 1;
            int n = 0;
            int resul = 0;
            printf("TABLE DE MULTIPLICATION\n");
            printf("Quel table de multiplication voulez-vous ?\n");
            scanf("%d",&n);
            for (i=1;i<=10;i++)
            {
                resul = n*i;
                printf("%d * %d = %d\n",i,n,resul);
            }
            return 0;
        }

#include <stdio.h>
#include <math.h>

int main()
{   int k;
    int ak[100];
    int max;
    max=0;
    int m;
    scanf("%d", &m);
    for(k=1;k<=m;k++){
            printf("Enter value ");
            scanf("%d", &ak[k]);
            if (ak[k]>max) {
                max=ak[k];
                }

    }

    printf("%d", max);



    return 0;

}

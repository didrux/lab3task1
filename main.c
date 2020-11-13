#include <stdio.h>
#include <math.h>

int main()
{   int k;
    int ak[100];
    int max;
    max=0;
    int m;
    int n;
    int b;
    scanf("%d%d", &n,&m);
    for(k=(m*(n-1)+1),b=(n*m),k=1;k<=b;k++){
            printf("Enter value ");
            scanf("%d", &ak[k]);
            if (ak[k]>max) {
                max=ak[k];
                }

    }

    printf("%d", max);



    return 0;

}

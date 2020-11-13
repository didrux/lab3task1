#include <stdio.h>
#include <math.h>

int main()
{   int k;
    int ak[1000];
    int maxx[1000];
    int max;
    max=0;
    int m;
    int n;
    int b;
    int N;
    scanf("%d%d", &N,&m);

    for(int n=1;n<N;n++) {

    for(k=(m*(n-1)+1),b=(n*m),k=1;k<=b;k++){
            printf("Enter value ");
            scanf("%d", &ak[k]);
            if (ak[k]>max) {
                max=ak[k];
                }

    }
    maxx[n]=max;
    printf("Well, the new n started. \n");
    printf("%d \n",max);
    max=0;
    }

    printf("%d %d %d", maxx[1], maxx[2], maxx[3]);



    return 0;

}

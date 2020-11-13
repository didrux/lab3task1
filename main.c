#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{   int k,m,N,max,b;
    printf("Hello. Now you have to enter *n* and *m* values of array \n");
    scanf("%d%d", &N,&m);
    int ak[N*m];
    int maxx[1000];
    max=0;
    int n=1;
    int min=32767;
    for(n=1;n<N;n++) {

    for(k=(m*(n-1)+1),b=(n*m),k=1;k<=b;k++){
            ak[k]=(rand() % 10000 + 1);
            if (ak[k]>max) {
                max=ak[k];
                }

    }
    maxx[n]=max;
    printf("Well, the new n started. \n");
    printf("%d \n",max);
    max=0;
    if (maxx[n]<min) {
        min=maxx[n];
    }
    }

    printf("Min is %d ",min);



    return 0;

}

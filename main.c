#include <stdio.h>
#include <math.h>

int main()
{   int k;
    int m;
    int N;
    scanf("%d%d", &N,&m);
    int ak[N*m];
    int maxx[1000];
    int max;
    max=0;
    int n=1;
    int b;
    int min=32767;
    for(n=1;n<N;n++) {

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
    if (maxx[n]<min) {
        min=maxx[n];
    }
    }

    printf("%d ",min);



    return 0;

}
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

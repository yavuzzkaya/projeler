#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sonuc;
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            sonuc=i*j;
            printf("%d*%d=%d\n",i,j,sonuc);
        }
    }
    return 0;
}

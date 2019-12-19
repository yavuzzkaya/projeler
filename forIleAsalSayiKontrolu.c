#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int a=0,sayac=0;
    printf("Bir sayi giriniz:");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if((i*i)<=a){
            if(a%i==0){
                sayac++;
                break;
            }
        }
    }
    if(sayac==0)
        printf("Girdiginiz sayi asal sayidir.");
    else
        printf("Girdiginiz sayi asal sayi degildir.");
    return 0;
}

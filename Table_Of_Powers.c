#include <stdio.h>
#include <stdlib.h>
int usAlma(int m, int n){
    int i, sonuc=1;
    for(i=0;i<n;i++)
        sonuc *= m;
    return sonuc;
}
void printTable(int K){
    int m, n, us=0;
    for(m=1;m<=K;m++){
        printf("%d 'in usleri",m);
        for(n=1;n<=10;n++){
            us = usAlma(m, n);
            printf("%11d",us);
        }
        printf("\n");
    }
}
int main()
{
    int K;
    printf("Tabloyu olusturmak icin bir sayi giriniz :");
    scanf("%d",&K);
    printTable(K);
    return 0;
}

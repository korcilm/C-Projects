#include <stdio.h>
#include <stdlib.h>
int main()
{
    int satir, sayi=1, bosluk, b, c;
    printf("ucgen satir sayisi girin:");
    scanf("%d",&satir);
    for(b=0;b<=satir-1;b++){
        printf("%d.Satir",b+1);
        for(bosluk = 0; bosluk < satir - b;bosluk++)
            printf("   ");
        for(c=0;c<=b;c++){
            if(b==0 || c==0)
                sayi=1;
            else
                sayi=sayi* (b-c+1)/c;
            printf("%6d",sayi);
        }
        printf("\n");
    }
    return 0;
}
***********dizi kullanarak yapımı************
int main()
{
    int n,i,j;
    printf("Pascal ucgeni satir sayisi giriniz: ");
    scanf("%d",&n);
    int dizi[n][n];
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            if(i==j || j==0){
                dizi[i][j]=1;
                printf("%6d",dizi[i][j]);
            }
            else{
                dizi[i][j]=dizi[i-1][j-1]+dizi[i-1][j];
                printf("%6d",dizi[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}


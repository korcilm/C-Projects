#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,kelime=0,kelimeSayisi=0,frekans=0;
    char a[100], harf;
    printf("Metni girin:");
        gets(a);
    printf("Harfi giriniz:");
        harf = getchar();
    int islem=0;
    while(islem != -1){
        printf("=> Islemler <=\n1:Kelimelerin Uzunlugu\n2:Metindeki Harf Sayisi\n3:Metindeki Kelime Sayisi\n4:Quit\n");
        printf("Islem Seciniz :");
        scanf("%d",&islem);
        switch(islem){
            case 1:
                for(i=0;a[i]!='\0';i++){
                    if(a[i]==' '){
                        kelime++;
                        printf("=> %d.kelimenin uzunlugu: %d \n",kelime,kelimeSayisi);
                        kelimeSayisi=0;
                        i++;
                    }
                    kelimeSayisi++;
                }
                kelime++;
                printf("=> %d.kelimenin uzunlugu: %d \n",kelime,kelimeSayisi);
                break;
            case 2:
                i=0;
                while(a[i] != 0){
                    if(a[i] == harf)
                        frekans++;
                    i++;
                }
                printf("=> %c karakteri bu metinde %d kez geciyor.\n",harf, frekans);
                break;
            case 3:
                i=0;
                kelimeSayisi=0;
                while(a[i]!='\0'){
                    if(a[i]==' ')
                        kelimeSayisi++;
                    i++;
                }
                printf("=> Metindeki kelime sayisi:%d\n",kelimeSayisi+1);
                break;
            case 4:
                islem= -1;
                printf("Programdan cikiliyor ..");
                break;
            default:
                printf("Bilinmeyen islem !\n");
                break;
        }
    }
    return 0;
}
/* Fonksiyonlarla kullanımı
void kelimeUzunluk(char a[]){
    int i,kelime=0,kelimeSayisi=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            kelime++;
            printf("%d.kelimenin uzunlugu: %d \n",kelime,kelimeSayisi);
            kelimeSayisi=0;
            i++;
        }
        kelimeSayisi++;
    }
    kelime++;
    printf("%d.kelimenin uzunlugu: %d \n",kelime,kelimeSayisi);
}
void harfinSayisi(char a[], char harf){
    int sayac=0,frekans=0;
    while(a[sayac] != 0)
    {
        if(a[sayac] == harf)
            frekans++;
        sayac++;
    }
    printf("=> %c karakteri bu metinde %d kez geciyor.\n",harf, frekans);
}
void kelimeSayisi(char a[]){
    int i=0,kelimeSayisi=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
         kelimeSayisi++;

     i++;
    }
    printf("=> Metindeki kelime sayisi:%d\n",kelimeSayisi+1);
}
int main()
{
    char a[100], harf;
    printf("Metni girin:");
        gets(a);
    kelimeUzunluk(a);
    kelimeSayisi(a);
    printf("Harfi giriniz:");
        harf = getchar();
    harfinSayisi(a, harf);
    return 0;
}*/

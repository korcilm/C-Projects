#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n){ //Recursive Function
   if(n==0||n==1)
     return n;
   else
     return fibonacci(n-2)+fibonacci(n-1) ;
}
int main()
{
    int n;
    printf("Fibonacci adetini giriniz :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        printf("%d => ",fibonacci(i));

    /*int a=0, b=1, c, i, n;                      ***Recursive fonksiyon kullanmadan yazimi***
    printf("Fibonacci adetini giriniz :");
    scanf("%d",&n);
    printf("%d => %d => ",a,b);
    for(i = 1; i <= n-2; i++) {
      c = a + b;
      printf("%d => ", c);
      a = b;
      b = c;
    }*/
    return 0;
}

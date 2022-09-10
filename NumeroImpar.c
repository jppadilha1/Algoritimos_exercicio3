#include <stdio.h>

int main()
{
   int num,cont = 0;
   printf("Digite um número inteiro:");
   scanf("%d", &num);
   
   if(num % 2 == 0){
       num += 1;
       printf("%d \n", num);
   }else{
       num += 2;
       printf("%d \n", num);
   }
   while( cont < 5){
       cont += 1;
       num += 2;
       printf("%d \n", num);
   }

    return 0;
}

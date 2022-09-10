#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorx,valory;

    printf("Digite um primeiro valor:");
    scanf("%f", &valorx);
    printf("Digite um segundo valor:");
    scanf("%f", &valory);
       
    if((valorx > 0.0) && (valory > 0.0)){
        printf("quadrante 1");
    }if((valory > 0.0) && (valorx < 0.0)){
        printf("Quadrante 2");
    }if((valorx < 0.0) && (valory < 0.0)){
        printf("quadrante 3");
    }if((valorx > 0.0) && (valory < 0.0)){
        printf("quadrante 4");
    }if((valorx == 0.0) && (valory == 0.0)){
        printf("Origem");
       
    }else{
        return 0;
    }
   
    return 0;
   
}

#include <stdio.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL, "Portuguese");

    int cobaias;
    int coelho, rato, sapo;
    float percentualc,percentualr,percentuals;
   
    printf("Digite o numero de cobaias(TOTAL): ");
    scanf("%d", &cobaias);
    printf("Digite o numero de cobaias(Coelhos):");
    scanf("%d", &coelho);
    printf("Digite o numero de cobaias(Ratos):");
    scanf("%d", &rato);
    printf("Digite o numero de cobaias(Sapos):");
    scanf("%d", &sapo);
    printf("\n");

    if((coelho + rato + sapo) > cobaias || (coelho + rato + sapo) < cobaias){
        printf("Erro! o numero de sapos,coelhos e ratos, esta maior ou menor que o numero total de cobaias. \n");
        printf("Digite Novamente :)");
    }else{
    percentualc = (coelho * 100) / cobaias ;
    percentualr = (rato * 100) / cobaias ;
    percentuals = (sapo * 100) / cobaias ;
   
    printf("Total de Cobaias:%d. \n", cobaias);
    printf("Total de Coelhos:%d. \n", coelho);
    printf("Total de Ratos:%d. \n", rato);
    printf("Total de Sapos:%d. \n", sapo);
    printf("Percentual de Coelhos:%.2f%% \n" , percentualc);
    printf("Percentual de Ratos:%.2f%% \n", percentualr);
    printf("Percentual de Sapos:%.2f%% \n", percentuals);
    }

    return 0;
}

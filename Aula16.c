//SuperExerc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[2],valor[2];
    int matriz[2][2];
    int vi,linha,coluna;
    int i;

    printf("\nBEM-VINDO AO SUPER EXERCICIO.\n\n");

    printf("Digite 2 numeros inteiros:\n");

    for(i=0;i<2;i++){
        scanf("%d",&num[i]);
        printf("NUMERO DIGITADO => %d \n",num[i]);
    }

    printf("\n");

    if(num[0]%2==0){
        valor[0] = num[0]*2;
        printf("Numero 1 e par.\n");
    }
    else if(num[0]){
        valor[0] = num[0]*3;
        printf("Numero 1 e impar.\n");
    }

    if(num[1]%2==0){
        valor[1] = num[0]*2;
        printf("Numero 2 e par.\n");
    }
    else if(num[1]){
        valor[1] = num[0]*3;
        printf("Numero 2 e impar.\n");
    }

    printf("\n");

    for(i=0;i<2;i++){
        printf("Vetores [%d] armazenado %d\n\n",i,num[i]);
    }


    printf("Digite um valor inteiro maior que 1:\n");
    scanf("%d",&vi);

    printf("\n");

    if(vi>=1){
        printf("O valor inteiro escolhido e: %d\n\n",vi);
    }
    else if(vi<=0){
        printf("Error 8585 (O NUMERO ESCOLHIDO E MENOR OU IGUAL A ZERO) .\n\n");
    }

    printf("\n\nRecalculando.\n\n");

    matriz[0][0]=valor[0];
    matriz[0][1]=valor[1];
    matriz[1][0]=valor[0]*vi;
    matriz[1][1]=valor[1]*vi;


    printf("Exibindo a matriz.\n");
    printf("\n");

    for(linha=0;linha<2;linha++){
            for(coluna=0;coluna<2;coluna++){
                printf("%d ",matriz[linha][coluna]);
            }
            printf("\n");
    }

    printf("\n");
    printf("Exibindo os vetores:\n");


    for(i=0;i<2;i++){
        printf("%d ",valor[i]);
    }





    return 0;
}

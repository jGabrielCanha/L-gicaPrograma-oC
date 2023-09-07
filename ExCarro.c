#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef struct{
    char marca[30];
    int AnoFabricacao;
}Veiculo;

float sensorCintoSeguranca(){

    int a;

    printf("\nSensor do cinto de seguranca do veiculo:\n");

    for(;;){
        a = rand()%2;
        printf("Status cinto de seguranca : %d\n",a);
        Sleep(1000);
        fflush(stdin);

        if(a==1){
            printf("O carro DETECTOU o cinto.\n");
            return 0;
        }
        else{
            printf("O carro nao DETECTOU o cinto.\n");
        }
    }
}

void Consumo(float kmPercorridos, float litrosConsumidos){

    float Consu;

    Consu = kmPercorridos / litrosConsumidos;

    printf("\nO consumo do carro em KMS por litro ( %.2f ).\n",Consu);
}


int main()
{

    srand(time(NULL));

    Veiculo veiculo;

    printf("Digite a marca e o ano do veiculo (RESPECTIVAMENTE) : ");
    scanf("%s",veiculo.marca);
    fflush(stdin);
    scanf("%d",&veiculo.AnoFabricacao);

    printf("\nExibindo MARCA e ANO do veiculo...\n");
    printf("Marca do veiculo : %s\n",veiculo.marca);
    printf("Ano do veiculo : %d\n",veiculo.AnoFabricacao);

    sensorCintoSeguranca();

    printf("\nLendo sistema de consumo.\n");

    Consumo(180,10);

}

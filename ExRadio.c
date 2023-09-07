//Exercicio com o intuito de programar um radio de um automovel 0km

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ch=1,c[6]={0,0,0,0,0,0};
    int i,op2;

    float canal=88.0,sv[6];

    char op;

    while(1){
        system("cls");
        printf("_______________________________\n");
        printf("| FM      |                    |\n");
        printf("|---------|         %.1f       |\n",canal);
        printf("| CH%d     |                    |\n",ch);
        printf("|_________|____________________|\n");
        printf("|      | + | 1 | 2 | 3 |       |\n");
        printf("|  R   | - | 4 | 5 | 6 |   S   |\n");
        printf("|______________________________|\n");
        printf("Code: ");
        scanf("%c", &op);

        fflush(stdin);

        switch(op){
            case '1':{
                ch=1;
                if(c[0]==0){
                    sv[0] = canal;
                    c[0]=1;
                }
                else{
                    canal = sv[0];
                }
            break;
            }
            case '2':{
                ch=2;
                if(c[1]==0){
                    sv[1] = canal;
                    c[1]=1;
                }
                else{
                    canal = sv[1];
                }
            break;
            }
            case '3':{
                ch=3;
                if(c[2]==0){
                    sv[2] = canal;
                    c[2]=1;
                }
                else{
                    canal = sv[2];
                }
            break;
            }
            case '4':{
                ch=4;
                if(c[3]==0){
                    sv[3] = canal;
                    c[3]=1;
                }
                else{
                    canal = sv[3];
                }
            break;
            }
            case '5':{
                ch=5;
                if(c[4]==0){
                    sv[4] = canal;
                    c[4]=1;
                }
                else{
                    canal = sv[4];
                }
            break;
            }
            case '6':{
                ch=6;
                if(c[5]==0){
                    sv[5] = canal;
                    c[5]=1;
                }
                else{
                    canal = sv[5];
                }
            break;
            }
            case '+':{
                canal = canal + 0.1;
                break;
            }
            case '-':{
                canal = canal - 0.1;
                break;
            }
            case 'R':{
                printf("Digite o save que deseja alterar: ");
                scanf("%d", &op2);

                switch(op2){
                    case 1:{
                        sv[0] = canal;
                    break;
                    }
                    case 2:{
                        sv[1] = canal;
                    break;
                    }
                    case 3:{
                        sv[2] = canal;
                    break;
                    }
                    case 4:{
                        sv[3] = canal;
                    break;
                    }
                    case 5:{
                        sv[4] = canal;
                    break;
                    }
                    case 6:{
                        sv[5] = canal;
                    break;
                    }
                }
            break;
            }
            case 'S':{
                exit(0);
            }
        }
    }
    return 0;
}

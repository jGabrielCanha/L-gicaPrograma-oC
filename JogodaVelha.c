int main(){

	char p1='1', p2='2', p3='3', p4='4', p5='5', p6='6', p7='7', p8='8', p9='9';
	int i, posicao;

	printf("Bem-vindo ao Jogo da Velha  \n  Jogador 1 (X) versus Jogador 2 (O)  \n\n");

	printf("\t %c | %c | %c\n", p1, p2, p3);
	printf("\t-----------\n");
	printf("\t %c | %c | %c\n", p4, p5, p6);
	printf("\t-----------\n");
	printf("\t %c | %c | %c\n", p7, p8, p9);

	for(i=1; i<=9; i++){
        if(i%2==0){
            printf("\nJogador 2, escolha uma Posicao:\n\n");
            scanf("%d", &posicao);
            printf("\n\n");

                    if (posicao==1) {
                        p1='O';
                    }
                    else if (posicao==2) {
                        p2='O';
                    }
                    else if (posicao==3) {
                        p3='O';
                    }
                    else if (posicao==4) {
                        p4='O';
                    }
                    else if (posicao==5) {
                        p5='O';
                    }
                    else if (posicao==6) {
                        p6='O';
                    }
                    else if (posicao==7) {
                        p7='O';
                    }
                    else if (posicao==8) {
                        p8='O';
                    }
                    else if (posicao==9) {
                        p9='O';
                    }
        }
        else{
            printf("\nJogador 1, escolha uma Posicao:\n\n");
            scanf("%d", &posicao);
            printf("\n\n");

            if (posicao==1) {
                p1='X';
            }
            else if (posicao==2) {
                p2='X';
            }
            else if (posicao==3) {
                p3='X';
            }
            else if (posicao==4) {
                p4='X';
            }
            else if (posicao==5) {
                p5='X';
            }
            else if (posicao==6) {
                p6='X';
            }
            else if (posicao==7) {
                p7='X';
            }
            else if (posicao==8) {
                p8='X';
            }
            else if (posicao==9) {
                p9='X';
            }
        }


    system("cls");
	printf("\t %c | %c | %c\n", p1, p2, p3);
	printf("\t-----------\n");
	printf("\t %c | %c | %c\n", p4, p5, p6);
	printf("\t-----------\n");
	printf("\t %c | %c | %c\n", p7, p8, p9);

	printf("\n\n");

        if(p1==p2 && p1==p3 || p4==p5 && p4==p6 || p7==p8 && p7==p9 || p1==p4  && p1==p7 || p2==p5 && p2==p8 || p3==p6 && p3==p9 || p1==p5 && p1==p9 || p3==p5 && p3==p7){
            if(i%2==0){
                printf("\n\nO segundo jogador ganhou !\n\n");
                return 0;
            }
            else if(i%2!=0){
                printf("\n\nO primeiro jogador ganhou !\n\n");
                return 0;
            }
        }
    }
    printf("\n\n\tO jogo empatou !!\n\n");

    system("pause");
	return 0;
}

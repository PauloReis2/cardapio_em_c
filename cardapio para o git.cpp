#include <stdio.h>
#include <string.h>
#define MAX_PRATOS 5
typedef struct{
	int codigo;
	float preco;
	char nome[50];
}pratos;

int main(){
    pratos x[MAX_PRATOS];
	int totalcadast = 0;
	int opcao;
	
	do{
		printf ("\n======CARDAPIO DIGITAL======\n");
		printf ("1. Adicionar prato\n");
		printf ("2. Ver pratos adicionados\n");
		printf ("3. Sair\n");
		printf ("\n======ESCOLHA UMA OPCAO======\n");
		scanf ("%d", &opcao);
		
		while (getchar() != '\n');
		
		switch (opcao){
			
			case 1:
				if (totalcadast < MAX_PRATOS){
					printf ("======Bem vindo ao adicionar prato======\n");
					printf ("Digite o codigo do prato %d:\n", totalcadast + 1);
					scanf ("%d", &x[totalcadast].codigo);
					while (getchar() != '\n');
					
					printf ("Digite o preco do prato %d:\n", totalcadast + 1);
					scanf ("%f", &x[totalcadast].preco);
					while (getchar() != '\n');
					
					printf ("Digite o nome do prato %d:\n", totalcadast + 1);
					fgets (x[totalcadast].nome, 50, stdin);
					
					x[totalcadast].nome[strcspn (x[totalcadast].nome, "\n")] = 0;
					
					totalcadast++;
				}else{
					printf ("Cardapio cheio, esvazie e tente novamente\n");
				      }break;
			case 2:
				printf ("======PRATOS ADICIONADOS======\n");
				if (totalcadast == 0){
					printf ("======Nenhum prato adicionado ate o momento======\n");
				}else{
				    for(int i = 0; i < totalcadast; i++){
						printf ("[%d] codigo: %d | nome: %s | preco: %.2f\n", i +1, x[i].codigo, x[i].nome, x[i].preco);
				    }
				}break;
			case 3:
			    printf ("======Saindo do cardapio======\n");
				printf ("==============================\n");
				break;
			default:
			    printf ("Comando invalido");
				
		}
		
	} while (opcao != 3);
	  return 0;
}

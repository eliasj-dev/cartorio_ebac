#include <stdio.h> //biblioteca de comunica��o com o usu�rio 
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings 

int registro()//Respons�vel por cadastrar os usu�rios no sistema 
{
	//Inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final cria��o de vari�veis/string

	printf("Digite o CPF a ser cadatrado: ");//coletando informa��es do usu�rio
	scanf("%s", cpf);//%s refere-se a string
	
	strcpy(arquivo, cpf);//Respons�vel por copiar os valores das strings 
	
	FILE *file; //Cria o arquivo 
	file = fopen(arquivo, "w");//Cria arquivo "w" significa escrever
	fprintf(file,cpf); // salvo o valor do arquivo
	fclose(file);// fecha o arquivo 
	
	file = fopen(arquivo, "a");//Abrir arquivo "a" significa atualizar arquivo
	fprintf(file,",");//adicionando a atualiza��o
	fclose(file);//fechar o arquivo 
	
	printf("Digite o nome a ser cadastrado: ");//coletando informa��es do usu�rio 
	scanf("%s", nome);//"%s" refere-se a string 
	
	file = fopen(arquivo, "a");//abrir o arquivo "a" significa atualizar o arquivo 
	fprintf(file,nome);// adicionado o valor do arquivo 
	fclose(file);//fecha arquivo 
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file); 
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
		
}

int consulta()
{
	setlocale(LC_ALL,"Portuguese");//Definindo a linguagem 	
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file; 
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as infrma��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file = NULL);
	{
		printf("O usu�rio n�o se encontra no sistema!.\n"); 
		system("pause");
	}
	
}


int main()
{
    int opcao=0; //Definindo vari�veis 
    int laco=1;
    
    
    for(laco=1;laco=1;)
    {
    	
						system("cls");//Respons�vcel por limpar a tela
						
						setlocale(LC_ALL,"Portuguese");//Definindo a linguagem  
					
						printf("### Cart�rio da EBAC ###\n\n");//inicio do menu	
					
						printf("Escolha a op��o desejada do menu: \n\n");						
						printf("\t1 - Registrar nomes\n");
						printf("\t2 - Consultar nomes\n");
						printf("\t3 - Deletar nomes\n\n"); 
						printf("Op��o: ");//fim do menu
	
	
						scanf("%d", &opcao);//armazenando a escolha do usu�rio 
						
						system("cls");
						
						switch(opcao)//inicio da sele��o 
						{
							case 1:
							registro();//chamada de fun��es 
							break; 
							
							case 2: 
							consulta();
							break; 
							
							case 3:
							deletar();
							break; 
								
							default:
							printf("Essa op��o n�o est� dispon�vel!\n");
							system("pause");
							break; 
							
						} //fim da sele��o 
					
						
	}
							
}

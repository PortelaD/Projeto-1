//Nome:Daniel Portela Lourenço Matrícula:UC21100134 Curso:Engenharia de Software
#include<stdio.h> //biblioteca para printf e scanf.
#include<string.h> //biblioteca para strlen e strcmp.
#include<ctype.h> //biblioteca para o uso do toupper e tolower.
#include<locale.h> //biblioteca para uso da acentuação dentro do printf.
#include<stdlib.h> //Comando para o ler o comando system

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português e está ligada a biblioteca <locale.h>
	
	
 char nome[20], sexo, filme[20]; // declaração de string e Caracter.
 int idade, sessao, pessoas=0, contador, crianca=0, adolescente=0, adulto=0, idoso=0, homem=0, mulher=0, contadorF=1, homemMaiorIdade=0, mulherMaiorIdade=0; //Declaração de inteiros.
//Usando o conceito do livro "Código Limpo", organizei meu código delimitando o começo e fim de cada do while que fiz.
//Com isso, é possível saber onde o do while começa e onde termina, sem se confundir.
//Ao declarar as variáveis, usei o conceito do livro, que diz que se deve declarar as variáveis o mais próximo possível de onde serão usadas.
			      
/*D1*/   do{//primeiro dado a ser validado, número de sessões.
			printf("\nInforme quantas sessões: "); //Printar na tela o que está entre "".
			scanf("%d", &sessao); //Chamar a declaração e definir qual é.
			fflush(stdin);//limpa o buffer de memória
			if (sessao <= 1 || sessao > 2) //Comando do se e senão
				printf("Sessão invalida, entre com o número certo de sessões\n");//Printar na tela o que está entre "".
			else printf("Sucesso!\n");//Printar na tela o que está entre "".
/*D1*/  }while(sessao <= 1 || sessao > 2);//Validação com while, aceitando somente o que está declarado dentro dele.
	
/*D2*/   do{//Responsável por fazer essa parte do programa repetir pela segunda vez.
		 
		   
            fflush(stdin);
/*D3*/  do{ //Nome, que deverá ser validado, não pode ter menos de 2 caracteres
			printf("Informe o nome do filme da %dª sessão: ", contadorF); //apresenta texto na tela
			fgets(filme, 20, stdin); //recebe string com espaço em branco. fgtes("nome da variável", "tamanho da variável", stdin)
			fflush(stdin); //limpa o buffer de memória
			if (strlen(filme) <= 2)//strlen: verifica o tamanho da string, se for menor ou igual a 2, apresenta o erro
				printf("Nome muito curto!\n");//Printar na tela o que está entre "".
			else printf("Sucesso\n"); //caso contrário, mostra a msg de sucesso e finaliza o while
/*D3*/	}while(strlen(filme) <= 2); //repetição quando o nome for inválido

	        fflush(stdin);
/*D4*/	do{
			printf("\nInforme o número de pessoas: ");//Printar na tela o que está entre "".
			scanf("%d", &pessoas);//Chamar a declaração e definir qual é.
			fflush(stdin);//limpa o buffer de memória
			printf("Pessoas: %d\n", pessoas); //Printar na tela o que está entre "".
			if (pessoas <= 9 || pessoas > 100)//Comando do se e senão
				printf("Número de pessoas insuficiente!\n");
			else printf("Sucesso!\n");//Printar na tela o que está entre "".
/*D4*/		}while(pessoas <= 9 || pessoas > 100);//Validação com while, aceitando somente o que está declarado dentro dele.
		
			 
			for(contador=1;contador<= pessoas;contador++){//Comando de repetição com declaração, condição e passo.
/*D5*/	    do{//Validação da idade. 	
		     printf("Digite a idade da %dª Pessoa: \n", contador);//Printar na tela o que está entre "".
		    scanf("%d", &idade);//Chamar a declaração e definir qual é.
		    fflush(stdin);//limpa o buffer de memória
		     if(idade<=2 || idade> 100)//Comando do se e senão
		        printf("Idade inválida, entre com a idade de 3 a 100 anos\n");//Printar na tela o que está entre "".
		     else printf("Sucesso!\n");//Printar na tela o que está entre "".
/*D5*/		 }while(idade <= 2 || idade > 100);//Validação com while, aceitando somente o que está declarado dentro dele.
			 
			fflush(stdin);//limpa o buffer de memória
			 
		   if(idade>=3 && idade<=13)//Comando do se e senão
		      crianca=crianca+1;
		   else if(idade>=14 && idade<=17)//Comando do se e senão
		      adolescente=adolescente+1;
		   else if(idade>=18 && idade<=64)//Comando do se e senão
		      adulto=adulto+1;
		   else if(idade>=65 && idade<= 100)//Comando do se e senão
		      idoso=idoso+1;
		
		
/*D6*/		do{//Validação do sexo.
			
			fflush(stdin);//limpa o buffer de memória
			printf("Sexo: ");//Printar na tela o que está entre "".
			scanf("%c", &sexo);//Chamar a declaração e definir qual é.
			fflush(stdin);//limpa o buffer de memória
			if(sexo != 'f' && sexo != 'F' && sexo != 'm'  && sexo != 'M')//Comando do se e senão
		     printf("\n Opção Invalida\n");//Printar na tela o que está entre "".
		      else printf("Sucesso!\n");
			
			if(toupper(sexo) == 'F' && idade >= 18)//Comando do se e senão
                {
                      mulherMaiorIdade++;  
                }
                   else if(toupper(sexo) == 'M' && idade >= 18)//Comando do se e senão
                {
                      homemMaiorIdade++;    
                }  	 
	               if(sexo== 'm' || sexo== 'M')//Comando do se e senão
			          homem=homem+1;
			        else if(sexo== 'f' || sexo== 'F')//Comando do se e senão
			           mulher=mulher+1; 	 
		 
/*D6*/}while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M');//Validação com while, aceitando somente o que está declarado dentro dele.
		 
}
		 	
		

		      
		
		   fflush(stdin);//limpa o buffer de memória
	
		
	
		
		
		system("Cls");//Apaga todos os dados da tela. Está ligado ao <stdlib.h>
		

		printf("Nome do Filme:\n %s", filme);//Printar na tela o que está entre "".
		printf("Crianças: %d\n", crianca);//Printar na tela o que está entre "".
		printf("Adolescentes: %d\n", adolescente);//Printar na tela o que está entre "".
		printf("Adultos: %d\n", adulto);//Printar na tela o que está entre "".
		printf("Idosos: %d\n", idoso);//Printar na tela o que está entre "".
		printf("Homens: %d\n", homem);//Printar na tela o que está entre "".
		printf("Mulheres: %d\n", mulher);//Printar na tela o que está entre "".
       
       system("pause");//Solicita ao computador uma pausa até que alguma tecla seja pressionada no teclado. Em nosso caso, desnecessário, porém, não representará erro de compilação. 
	                   //Está vinculada a biblioteca <stdlib.h>, ou seja, se eu retirar esta linha, poderei retirar também a biblioteca.
       system("Cls");//Apaga todos os dados da tela. Está ligado ao <stdlib.h>
    
       printf("Homens maiores de idade: %d\n", homemMaiorIdade);//Printar na tela o que está entre "".
       printf("Mulheres maiores de idade: %d\n", mulherMaiorIdade);//Printar na tela o que está entre "".
       
       system("pause");//Solicita ao computador uma pausa até que alguma tecla seja pressionada no teclado. Em nosso caso, desnecessário, porém, não representará erro de compilação. 
	                   //Está vinculada a biblioteca <stdlib.h>, ou seja, se eu retirar esta linha, poderei retirar também a biblioteca.
       system("Cls"); //Apaga todos os dados da tela. Está ligado ao <stdlib.h>
       
          contadorF++;
/*D2*/  }while(contadorF<=2);//Validação com while, aceitando somente o que está declarado dentro dele.
      
	

		

		
		
	
	


 return 0;	/*Responsável por: 1. apresentar se o algoritmo compilou com sucesso. 2. Seu resultado poderá ser utilizado em outras funções. Em nosso caso, 
    desnecessário, porém, não representará erro de compilação. */
}

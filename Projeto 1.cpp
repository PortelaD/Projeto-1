//Nome:Daniel Portela Louren�o Matr�cula:UC21100134 Curso:Engenharia de Software
#include<stdio.h> //biblioteca para printf e scanf.
#include<string.h> //biblioteca para strlen e strcmp.
#include<ctype.h> //biblioteca para o uso do toupper e tolower.
#include<locale.h> //biblioteca para uso da acentua��o dentro do printf.
#include<stdlib.h> //Comando para o ler o comando system

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s e est� ligada a biblioteca <locale.h>
	
	
 char nome[20], sexo, filme[20]; // declara��o de string e Caracter.
 int idade, sessao, pessoas=0, contador, crianca=0, adolescente=0, adulto=0, idoso=0, homem=0, mulher=0, contadorF=1, homemMaiorIdade=0, mulherMaiorIdade=0; //Declara��o de inteiros.
//Usando o conceito do livro "C�digo Limpo", organizei meu c�digo delimitando o come�o e fim de cada do while que fiz.
//Com isso, � poss�vel saber onde o do while come�a e onde termina, sem se confundir.
//Ao declarar as vari�veis, usei o conceito do livro, que diz que se deve declarar as vari�veis o mais pr�ximo poss�vel de onde ser�o usadas.
			      
/*D1*/   do{//primeiro dado a ser validado, n�mero de sess�es.
			printf("\nInforme quantas sess�es: "); //Printar na tela o que est� entre "".
			scanf("%d", &sessao); //Chamar a declara��o e definir qual �.
			fflush(stdin);//limpa o buffer de mem�ria
			if (sessao <= 1 || sessao > 2) //Comando do se e sen�o
				printf("Sess�o invalida, entre com o n�mero certo de sess�es\n");//Printar na tela o que est� entre "".
			else printf("Sucesso!\n");//Printar na tela o que est� entre "".
/*D1*/  }while(sessao <= 1 || sessao > 2);//Valida��o com while, aceitando somente o que est� declarado dentro dele.
	
/*D2*/   do{//Respons�vel por fazer essa parte do programa repetir pela segunda vez.
		 
		   
            fflush(stdin);
/*D3*/  do{ //Nome, que dever� ser validado, n�o pode ter menos de 2 caracteres
			printf("Informe o nome do filme da %d� sess�o: ", contadorF); //apresenta texto na tela
			fgets(filme, 20, stdin); //recebe string com espa�o em branco. fgtes("nome da vari�vel", "tamanho da vari�vel", stdin)
			fflush(stdin); //limpa o buffer de mem�ria
			if (strlen(filme) <= 2)//strlen: verifica o tamanho da string, se for menor ou igual a 2, apresenta o erro
				printf("Nome muito curto!\n");//Printar na tela o que est� entre "".
			else printf("Sucesso\n"); //caso contr�rio, mostra a msg de sucesso e finaliza o while
/*D3*/	}while(strlen(filme) <= 2); //repeti��o quando o nome for inv�lido

	        fflush(stdin);
/*D4*/	do{
			printf("\nInforme o n�mero de pessoas: ");//Printar na tela o que est� entre "".
			scanf("%d", &pessoas);//Chamar a declara��o e definir qual �.
			fflush(stdin);//limpa o buffer de mem�ria
			printf("Pessoas: %d\n", pessoas); //Printar na tela o que est� entre "".
			if (pessoas <= 9 || pessoas > 100)//Comando do se e sen�o
				printf("N�mero de pessoas insuficiente!\n");
			else printf("Sucesso!\n");//Printar na tela o que est� entre "".
/*D4*/		}while(pessoas <= 9 || pessoas > 100);//Valida��o com while, aceitando somente o que est� declarado dentro dele.
		
			 
			for(contador=1;contador<= pessoas;contador++){//Comando de repeti��o com declara��o, condi��o e passo.
/*D5*/	    do{//Valida��o da idade. 	
		     printf("Digite a idade da %d� Pessoa: \n", contador);//Printar na tela o que est� entre "".
		    scanf("%d", &idade);//Chamar a declara��o e definir qual �.
		    fflush(stdin);//limpa o buffer de mem�ria
		     if(idade<=2 || idade> 100)//Comando do se e sen�o
		        printf("Idade inv�lida, entre com a idade de 3 a 100 anos\n");//Printar na tela o que est� entre "".
		     else printf("Sucesso!\n");//Printar na tela o que est� entre "".
/*D5*/		 }while(idade <= 2 || idade > 100);//Valida��o com while, aceitando somente o que est� declarado dentro dele.
			 
			fflush(stdin);//limpa o buffer de mem�ria
			 
		   if(idade>=3 && idade<=13)//Comando do se e sen�o
		      crianca=crianca+1;
		   else if(idade>=14 && idade<=17)//Comando do se e sen�o
		      adolescente=adolescente+1;
		   else if(idade>=18 && idade<=64)//Comando do se e sen�o
		      adulto=adulto+1;
		   else if(idade>=65 && idade<= 100)//Comando do se e sen�o
		      idoso=idoso+1;
		
		
/*D6*/		do{//Valida��o do sexo.
			
			fflush(stdin);//limpa o buffer de mem�ria
			printf("Sexo: ");//Printar na tela o que est� entre "".
			scanf("%c", &sexo);//Chamar a declara��o e definir qual �.
			fflush(stdin);//limpa o buffer de mem�ria
			if(sexo != 'f' && sexo != 'F' && sexo != 'm'  && sexo != 'M')//Comando do se e sen�o
		     printf("\n Op��o Invalida\n");//Printar na tela o que est� entre "".
		      else printf("Sucesso!\n");
			
			if(toupper(sexo) == 'F' && idade >= 18)//Comando do se e sen�o
                {
                      mulherMaiorIdade++;  
                }
                   else if(toupper(sexo) == 'M' && idade >= 18)//Comando do se e sen�o
                {
                      homemMaiorIdade++;    
                }  	 
	               if(sexo== 'm' || sexo== 'M')//Comando do se e sen�o
			          homem=homem+1;
			        else if(sexo== 'f' || sexo== 'F')//Comando do se e sen�o
			           mulher=mulher+1; 	 
		 
/*D6*/}while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M');//Valida��o com while, aceitando somente o que est� declarado dentro dele.
		 
}
		 	
		

		      
		
		   fflush(stdin);//limpa o buffer de mem�ria
	
		
	
		
		
		system("Cls");//Apaga todos os dados da tela. Est� ligado ao <stdlib.h>
		

		printf("Nome do Filme:\n %s", filme);//Printar na tela o que est� entre "".
		printf("Crian�as: %d\n", crianca);//Printar na tela o que est� entre "".
		printf("Adolescentes: %d\n", adolescente);//Printar na tela o que est� entre "".
		printf("Adultos: %d\n", adulto);//Printar na tela o que est� entre "".
		printf("Idosos: %d\n", idoso);//Printar na tela o que est� entre "".
		printf("Homens: %d\n", homem);//Printar na tela o que est� entre "".
		printf("Mulheres: %d\n", mulher);//Printar na tela o que est� entre "".
       
       system("pause");//Solicita ao computador uma pausa at� que alguma tecla seja pressionada no teclado. Em nosso caso, desnecess�rio, por�m, n�o representar� erro de compila��o. 
	                   //Est� vinculada a biblioteca <stdlib.h>, ou seja, se eu retirar esta linha, poderei retirar tamb�m a biblioteca.
       system("Cls");//Apaga todos os dados da tela. Est� ligado ao <stdlib.h>
    
       printf("Homens maiores de idade: %d\n", homemMaiorIdade);//Printar na tela o que est� entre "".
       printf("Mulheres maiores de idade: %d\n", mulherMaiorIdade);//Printar na tela o que est� entre "".
       
       system("pause");//Solicita ao computador uma pausa at� que alguma tecla seja pressionada no teclado. Em nosso caso, desnecess�rio, por�m, n�o representar� erro de compila��o. 
	                   //Est� vinculada a biblioteca <stdlib.h>, ou seja, se eu retirar esta linha, poderei retirar tamb�m a biblioteca.
       system("Cls"); //Apaga todos os dados da tela. Est� ligado ao <stdlib.h>
       
          contadorF++;
/*D2*/  }while(contadorF<=2);//Valida��o com while, aceitando somente o que est� declarado dentro dele.
      
	

		

		
		
	
	


 return 0;	/*Respons�vel por: 1. apresentar se o algoritmo compilou com sucesso. 2. Seu resultado poder� ser utilizado em outras fun��es. Em nosso caso, 
    desnecess�rio, por�m, n�o representar� erro de compila��o. */
}

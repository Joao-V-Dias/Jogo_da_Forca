#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	char palavra [22], lacuna [22]="_", letra [22], erros [22], tam, cabeca, braco1, corpo, braco2, perna1, perna2;
;
	int vida = 7, retornaVidas, pontos=0, i, i2=0;
	
	printf("Tema: utensilios da cozinha\n\n");
	printf("Digite a palavra a ser adivinhada: \n");
	gets(palavra);

	for (i=0; i<strlen(palavra); i++){
		lacuna[i]='_';
	    tam=strlen(palavra);
	}
	    
	while (vida > 0)
	{
	    retornaVidas = 0;
	    	
	    	printf("\n ___________\n|          |\n|          %c\n|         %c%c%c\n|         %c %c \n|\n|\n|\n| %s ",cabeca, braco1, corpo, braco2, perna1, perna2, lacuna);

	    printf("\nVoce tem %d vidas",vida);
	    if(vida == 4)
	    {
	    	printf("\nDica: tem na cozinha");
		}
		printf("\nDigite uma letra\n");
	    gets(letra);	
		
	    	for (i =0; i <strlen(palavra); i++)
			{
	    		if (letra[0]==palavra[i])
	    		{
	    			lacuna[i] = palavra[i];
	    			retornaVidas++;
	    			pontos++;		
				}
			}
			
			if(retornaVidas == 0)
			{
			  vida--;
			  
			  switch(vida)
				{
					case 6:
						cabeca = 'O';
					break;
					case 5:
						corpo = '|';
					break;
					case 4:
						braco1 = '-';
					break;
					case 3:
						braco2 = '-';
					break;
					case 2:
						perna1 = '/';
					break;
					case 1:
						perna2 = '\\';
					break; 
				}
				if (vida == 0)
				{
					printf ("\n\tVoce perdeu.\n");
			 		printf ("\n\tA palavra certa era %s\n",palavra);
				}
			}
			else
		    {
			   if (pontos == tam)
			   {
			    	printf ("\nVoce acertou a palavra\n");
			    	break;
			   }
	   		}
	}
}

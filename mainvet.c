#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[7], i, x, aux; 
	
	for(i=0;i<7;i++){ 
		printf("\n Digite um numero para a posicao %i:", i); 
		scanf("%i", &vetor[i]); 
	}
	
	for(i=0;i<7;i++){ 
		
		for(x=i+1;x<7;x++){ 
			
 			if(vetor[i]>vetor[x]){ 
				
				aux=vetor[i]; 
				vetor[i]=vetor[x]; 
				vetor[x]=aux; 
				
			
			}
		}
	}
	
	for(i=0;i<7;i++){ 
		printf("\n O valor da posicao %i agora e %i: \n", i,vetor[i]); 
	}
	
	return 0;
}

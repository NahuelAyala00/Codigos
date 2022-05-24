#include <stdio.h>

int main(){
    char letra;

    printf("Informe uma letra:");
    scanf("%c",&letra);

	if((letra>='a' && letra<='z') || letra>='A' && letra<='Z'){
		switch(letra){
			case 'a': case 'e': case 'i': case 'o': case 'u': 
			case 'A': case 'E': case 'I': case 'O': case 'U': 
				printf("vogal\n");
				break;
			default:
				printf("consoante\n");
		}
	}else{
		printf("ERRO! Nao e uma letra.\n");
	}


    return 0;
}
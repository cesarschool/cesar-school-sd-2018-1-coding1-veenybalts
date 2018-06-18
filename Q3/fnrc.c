#include <stdio.h>

char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START:\n");
    
    int c,j = 0;
    int freq;
    char letra;

    //pega uma letra e verifica a frequencia dela em toda a palavra 
    for (c = 0; c < length; c++){
        //Eliminar espaço entre as palavras
        if(sentence[c] == ' '){
               c++;
        }
        letra = sentence[c];
        freq = 0;
        for(j = 0; j < length; j++){
            //caso a letra atual esteja na palavra incrementa o contador de frequencia
            if(letra == sentence[j]){
                freq++;
            }   
       }
        //caso encontre uma letra que não se repita imprime a letra e sai da função
        if(freq < 2){
            printf("%c", letra);
            printf("\nfirstNonRepeatingChar::END\n");
            return -1;
        }
        
    }
    
    //caso todas as letras se repitam imprime -1 e termina a função
    printf("%d\n", -1);
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}

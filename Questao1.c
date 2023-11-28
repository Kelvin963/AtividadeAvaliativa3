#include <stdio.h>
#include <string.h>

    int Ndecimal(char Vromano){
        switch(Vromano){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default : return 0; // invalido
        }
    }

    int RomPDec(const char numeroromano[]){
        int resultado = 0;
        int tamanho = strlen(numeroromano); 

        for (int i = 0; i < tamanho; i++){
            if( i < tamanho - 1 && Ndecimal(numeroromano[i]) < Ndecimal(numeroromano[i+1])){
                resultado -= Ndecimal(numeroromano[i]);
            }else{
                resultado += Ndecimal(numeroromano[i]);
            }
        }
        return resultado;
    }

int main(){
    
    char numeroromano[20];

    scanf("%s", &numeroromano);

    int valordecimal = RomPDec(numeroromano);
    int finaldecimal = valordecimal; // usar para ordem que o programa pediu


    int binario[64]; // assumindo números de até 64 bits 
    int indc = 0;
    int i;

        while(finaldecimal > 0){                
            binario[indc] = finaldecimal % 2;
            finaldecimal /= 2;
            indc++;
        }
        if(indc == 0){
            printf("%s na base 2: 0\n");    //codigo para achar valor binario
        }else{
            printf("%s na base 2: ", numeroromano);
            for(i = indc - 1; i >= 0; i--){
            printf("%d", binario[i]);
            }
            printf("\n");    
        }
        
    printf("%s na base 10: %d\n",numeroromano, valordecimal);//printf do valor em decimal

    char hexa[64]; //64 bits
    indc = 0;
    int resto;
    finaldecimal = valordecimal; // reseta os valores

        while(finaldecimal > 0){
            resto = finaldecimal % 16;
            if(resto < 10){
                hexa[indc] = resto + '0'; // digitos entre 0 e 9
            }else{
                hexa[indc] = resto - 10 + 'a'; //digito entre A e F
            }
            finaldecimal /= 16;
            indc++;
        }
        if(indc == 0){
            printf("%s na base 16: ", numeroromano);
        }else{
            printf("%s na base 16: ", numeroromano);
            for(i = indc - 1; i >= 0; i--){
                printf("%c", hexa[i]);
            }
            printf("\n");

        }

    return 0;
}


#include <stdio.h>
#include <string.h>

int main(){

    char dia[20];
    char placa[9]; 
    char ultimodaplaca;
    int placacaracteres;
    
    scanf("%s", placa); 
    placa[9] = '\0'; // nulo
    scanf("%s", dia);

    placacaracteres = strlen(placa); //recebe quantia de caracteres de placa

    int pcomparacao;
    
       if( placacaracteres == 7 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && 
       isdigit(placa[3]) &&
       isalpha(placa[4]) &&
       isdigit(placa[5]) ||
       (placacaracteres == 8 && isdigit(placa[6]) && placa[3] == '-') )
       
       {
        pcomparacao = 1;
       }else{
        pcomparacao = 0;
       }

       ultimodaplaca = placa[strlen(placa) - 1]; // verifica o ultimo caractere
    
        char segunda[20], terca[20], quarta[20], quinta[20], sexta[20], sabado[20], domingo[20]; 
        strcpy(segunda, "SEGUNDA-FEIRA");
        strcpy(terca, "TERCA-FEIRA");
        strcpy(quarta, "QUARTA-FEIRA");
        strcpy(quinta, "QUINTA-FEIRA");
        strcpy(sexta, "SEXTA-FEIRA");
        strcpy(sabado, "SABADO");
        strcpy(domingo, "DOMINGO");

        int comp; // vai ser usada para receber 0 ou 1. verdadeiro ou falso na prática
        int dvalidacao;

        if((comp = strcmp(dia, segunda)) == 0){// se forem iguais fará o proximo, senao passa para o proximo.
            dvalidacao = 1;  
                if(pcomparacao == 1){
                    if(ultimodaplaca == '0' || ultimodaplaca == '1'){  
                        printf("%s nao pode circular segunda-feira\n", placa);   
                    }else{
                        printf("%s pode circular segunda-feira\n", placa);
                    }
                }

        }else if((comp = strcmp(dia, terca)) == 0){
            dvalidacao = 1;  
                if(pcomparacao == 1){
                    if(ultimodaplaca == '2' || ultimodaplaca == '3'){  
                        printf("%s nao pode circular terca-feira\n", placa);   
                    }else{
                        printf("%s pode circular terca-feira\n", placa);
                    }
                }

        }else if((comp = strcmp(dia, quarta)) == 0){
            dvalidacao = 1;
            if(pcomparacao == 1){  
                    if(ultimodaplaca == '4' || ultimodaplaca == '5'){  
                        printf("%s nao pode circular quarta-feira\n", placa);   
                    }else{
                        printf("%s pode circular quarta-feira\n", placa);
                    }
            }

        }else if((comp = strcmp(dia, quinta)) == 0){
            dvalidacao = 1;
            if(pcomparacao == 1){  
                    if(ultimodaplaca == '6' || ultimodaplaca == '7'){  
                        printf("%s nao pode circular quinta-feira\n", placa);   
                    }else{
                        printf("%s pode circular quinta-feira\n", placa);
                    }
            }        

        }else if((comp = strcmp(dia, sexta)) == 0){
            dvalidacao = 1;
            if(pcomparacao == 1){  
                if(ultimodaplaca == '8' || ultimodaplaca == '9'){  
                    printf("%s nao pode circular sexta-feira\n", placa);   
                }else{
                    printf("%s pode circular sexta-feira\n", placa);
                }
            }

        }else if((comp = strcmp(dia, sabado)) == 0){
            dvalidacao = 1;  
                if(pcomparacao == 1){
                    printf("Nao ha proibicao no fim de semana\n");
                }
        }else if((comp = strcmp(dia, domingo)) == 0){
            dvalidacao = 1; 
                if(pcomparacao == 1){
                    printf("Nao ha proibicao no fim de semana\n");   
                }
        }else{
            dvalidacao = 0; 
        }

    //0 é invalido e 1 é valido. Serve para validar ou invalidar placa e dia.

    if(pcomparacao == 0 && dvalidacao == 0){
        printf("Placa invalida\n");
        printf("Dia da semana invalido");

    }else if(pcomparacao == 1 && dvalidacao == 0){
        printf("Dia da semana invalido");

    }else if(pcomparacao == 0 && dvalidacao == 1){
        printf("Placa invalida");
    }
    

//comp = strcmp(dia, quinta);  // comp é uma variavel para comparar se a variavel dia e quinta sao iguais
    return 0;
}
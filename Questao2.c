#include <stdio.h>

    double Mcalculo(double aporte, double juros, int tempo){

        double montante = 0;

        for(int i = 1; i <= tempo; i++){ //i = quantia de meses 
        montante = (montante + aporte) * ( 1 + juros );
        printf("Montante ao fim do mes %d: R$ %.2f\n", i, montante);


        }
        return montante;
    }

    int main(){

        double aporte, juros;
        int tempo;

        scanf("%d", &tempo);

        scanf("%lf", &aporte);
        
        scanf("%lf", &juros);

        Mcalculo(aporte, juros, tempo); // chamar FUNÇAO


        return 0;
    }
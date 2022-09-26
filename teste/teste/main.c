//
//  main.c
//  teste
//
//  Created by Gabriel Fernandes Thomaz on 22/09/22.
//

#include <stdio.h>
#include <stdlib.h>

int Calculo(float vGas, float vEta);

int main() {
    
    printf("##### EcoCar ##### \n");
    
    float precoGasolina, precoEtanol;
    
    printf("Qual o preco da gasolina? \n");
    scanf("%f", & precoGasolina);
    printf("Qual o preco do etanol? \n");
    scanf("%f", & precoEtanol);
    
    int resultado = Calculo(precoGasolina, precoEtanol);
    
    if (resultado == 0) {
        printf("Compensa abastecer com Gasolina. \n");
        
    } else if (resultado == 1){
        printf("Compensa abastecer com Etanol. \n");
    } else {
        printf("Sao equivalentes, tanto faz. \n");
    }
  
    system("pause");
    return 0;
}

int Calculo(float vGas, float vEta)
{
    // Preco da gasolina * 0.7 = Preco maximo do etanol
    if ((vGas * 0.7) < vEta){
    // Compensa a Gasolina
        return 0;
    } else if (((vGas * 0.7) < vEta)){
    // Compensa o Etanol
        return 1;
    } else {
    // Equivalentes
        return 2;
    }
}




#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    int resp;

    printf("---------------------------------------------------------------------------\n");
    printf("Escolha um sistema para acessar: \n");
    printf("---------------------------------------------------------------------------\n");
    printf("1 - Conversor de temperatura \n");
    printf("2 - Calculadora de IMC \n");
    printf("3 - Conversor de moedas \n");
    printf("---------------------------------------------------------------------------\n");
    scanf("%d", &resp);

    if (resp == 1){
        float F, C;
        int resp;
        printf("---------------------------------------------------------------------------------------\n");
        printf("Qual unidade de medida voc� deseja realizar a convers�o? \n");
        printf("---------------------------------------------------------------------------------------\n");
        printf("1 - Celsius para Farenheit \n");
        printf("2 - Farenheit para Cesius \n");
        printf("---------------------------------------------------------------------------------------\n");
        scanf("%d", &resp);
        if (resp == 1){
            printf("\n Digite a temperatura em Celsius: \n");
            scanf("%f", &C);
            F = (9 * C) / 5 + 32 ;
            printf("\n A temperatura em Farenheit �: %.1f�F", F);
        }
        else if (resp == 2){
            printf("\n Digite a temperatura em Farenheit: \n");
            scanf("%f", &F);
            C = 5 / 9 * (F-32);
            printf("\n A temperatura em Celsius �: %.1f�C", C);
        }
        else {
            printf("\n Op��o inv�lida.");
        }
    }

    else if (resp == 2){
        float peso, altura, imc;
        printf("---------------------------------------------------------------------------------------\n");
        printf("Digite o seu peso (em KG): ");
        scanf("%f", &peso);
        printf("Digite a sua altura (em m): ");
        scanf(" %f", &altura);
        printf("---------------------------------------------------------------------------------------\n");
    
        imc = peso / (altura * altura);
    
        printf("O seu IMC �: %.2f \n", imc);
    
        if (imc < 18.5){
            printf("Voc� est� abaixo do peso normal\n");
        }
        else if (imc >= 18.5 && imc < 24.9){
            printf("O seu peso est� normal\n");
        }
        else if (imc >= 25 && imc < 29.9){
            printf("Voc� est� com excesso de peso\n");
        }
        else if (imc >= 30 && imc < 34.9){
            printf("Voc� est� com Obesidade I\n");
        }
        else if (imc >= 35 && imc < 39.9){
            printf("Voc� est� com Obesidade II\n");
        }
        else if (imc >= 40){
            printf("Voc� est� com Obesidade III\n");
        }
    }

    else{
        printf("Sistema indispon�vel no momento");
    }





}
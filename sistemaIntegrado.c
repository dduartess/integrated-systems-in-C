
#include <stdio.h>
#include <locale.h>

float convter(float amount, float price);

int main(){

    char resposta;

do{
    
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
        printf("Qual unidade de medida você deseja realizar a conversão? \n");
        printf("---------------------------------------------------------------------------------------\n");
        printf("1 - Celsius para Farenheit \n");
        printf("2 - Farenheit para Cesius \n");
        printf("---------------------------------------------------------------------------------------\n");
        scanf("%d", &resp);
        if (resp == 1){
            printf("\n Digite a temperatura em Celsius: \n");
            scanf("%f", &C);
            F = (9 * C) / 5 + 32 ;
            printf("\n A temperatura em Farenheit é: %.1fºF", F);
        }
        else if (resp == 2){
            printf("\n Digite a temperatura em Farenheit: \n");
            scanf("%f", &F);
            C = (5.0 / 9.0) * (F - 32);
            printf("\n A temperatura em Celsius é: %.1fºC", C);
        }
        else {
            printf("\n Opção inválida.");
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
    
        printf("O seu IMC é: %.2f \n", imc);
    
        if (imc < 18.5){
            printf("Você está abaixo do peso normal\n");
        }
        else if (imc >= 18.5 && imc < 24.9){
            printf("O seu peso está normal\n");
        }
        else if (imc >= 25 && imc < 29.9){
            printf("Você está com excesso de peso\n");
        }
        else if (imc >= 30 && imc < 34.9){
            printf("Você está com Obesidade I\n");
        }
        else if (imc >= 35 && imc < 39.9){
            printf("Você está com Obesidade II\n");
        }
        else if (imc >= 40){
            printf("Você está com Obesidade III\n");
        }
    }
    else if(resp == 3){
        int resp;

        printf("---------------------------------------------------------------------------------------\n");
        printf("Qual moeda você deseja converter? \n");
        printf("---------------------------------------------------------------------------------------\n");
        printf("\n1 - BRL ");
        printf("\n2 - USD ");
        printf("\n3 - EUR ");
        printf("\n---------------------------------------------------------------------------------------\n");
        scanf("%d", &resp);
    
            if(resp == 1){
                int choice;
                printf("\nVocê deseja converter de BRL para qual moeda: \n");
                printf("---------------------------------------------------------------------------------------\n");
                printf("\n1- USD");
                printf("\n2- EUR\n");
                printf("\n---------------------------------------------------------------------------------------\n");
                    scanf("%d", &choice);
                    if (choice == 1){
                        float BRL, USD, price;
                        printf("Digite o valor em BRL:  R$ ");
                        scanf("%f", &BRL);
                        printf("Digite o valor do USD: $");
                        scanf("%f", &price);
                        USD = convter(BRL, price);
                        printf("\n---------------------------------------------------------------------------------------\n");
                        printf("Você terá $%.2f USD", USD);
                    }
                    else if(choice == 2){
                        float BRL, EUR, price;
                        printf("Digite o valor em BRL:  R$ ");
                        scanf("%f", &BRL);
                        printf("Digite o valor do EUR: ?");
                        scanf("%f", &price);
                        EUR = convter(BRL, price);
                        printf("\n---------------------------------------------------------------------------------------\n");
                        printf("Você terá ?%.2f EUR", EUR);  
                    }
            }
            else if(resp == 2){
                int choice;
                printf("\nVocê deseja converter de USD para qual moeda: \n");
                printf("---------------------------------------------------------------------------------------\n");
                printf("\n1- BRL");
                printf("\n2- EUR");
                printf("\n---------------------------------------------------------------------------------------\n");
                scanf("%d", &choice);
    
                if (choice == 1){
                    float USD, BRL, price;
                    printf("\nDigite o valor em USD: $ ");
                    scanf("%f", &USD);
                    printf("\nDigite o valor do BRL: R$ ");
                    scanf("%f", &price);
                    BRL = convter(USD, price);
                    printf("\n---------------------------------------------------------------------------------------\n");
                    printf("Você terá R$%.2f BRL", BRL);                 
                }
                else if(choice == 2){
                    float USD, EUR, price;
                    printf("\nDigite o valor em USD: $ ");
                    scanf("%f", &USD);
                    printf("\nDigite o valor do EUR: ? ");
                    scanf("%f", &price);
                    EUR = convter(USD, price);
                    printf("\n---------------------------------------------------------------------------------------\n");
                    printf("Você terá ?%.2f EUR", EUR); 
                }
                
            }
            else if(resp == 3){
                int choice;
                printf("\nVocê deseja converter de EUR para qual moeda: \n");
                printf("---------------------------------------------------------------------------------------\n");
                printf("\n1- BRL");
                printf("\n2- USD");
                printf("\n---------------------------------------------------------------------------------------\n");
                scanf("%d", &choice);
                    if (choice == 1){
                        float BRL, EUR, price;
                        printf("\nDigite o valor em EUR: ? ");
                        scanf("%f", &EUR);
                        printf("\nDigite o valor do BRL: R$ ");
                        scanf("%f", &price);
                        BRL = convter(EUR, price);
                        printf("\n---------------------------------------------------------------------------------------\n");
                        printf("Você terá R$%.2f BRL", BRL); 
                    }
                    else if(choice == 2){
                        float USD, EUR, price;
                        printf("\nDigite o valor em EUR: ? ");
                        scanf("%f", &EUR);
                        printf("\nDigite o valor do USD: $ ");
                        scanf("%f", &price);
                        USD = convter(EUR, price);
                        printf("\n---------------------------------------------------------------------------------------\n");
                        printf("Você terá $%.2f USD", USD); 
                    }
            }
            else{
                printf("Erro! informe uma opção válida.");
            }
    }
    else{
        printf("Sistema indisponível no momento");
    }

    printf("\nDeseja realizar uma nova consulta? (s/n) ");
    scanf(" %c", &resposta);
    
} while (resposta == 's' || resposta == 'S');


} 

float convter(float amount, float price){
float total;
total = amount / price;
return total;
}
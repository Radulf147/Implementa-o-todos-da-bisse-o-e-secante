#include<stdio.h>

int main()
{
    char metodo[5] = "";
    float erro_abs = 0.0;
    float a,b = 0.0;
    
    printf("Entre com o metodo que deseja utilizar (sec ou biss): ");
    scanf("%4s", metodo); // lê string com até 4 caracteres + \0

    printf("Entre com o erro absoluto: ");
    scanf("%f", &erro_abs); // usa & pra passar o endereço

    printf("Entre com os valores iniciais (a e b ou x0, x1 dependendo do método): ");
    scanf("%f %f", &a, &b); // lê dois floats


    return 0;
}
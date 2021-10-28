#include <stdio.h>

int main() {

    char operador;
    double firstNumber, secondNumber;

    printf("Ingresa un operador (+,-,*,/):");
    scanf("%c", &operador);

    printf("Ingresa los dos operando":);
    scanf ("%lf %lf", &firstNumber, &secondNumber);

    switch (operador){
        case '+':
        printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
        break;

        case '-':
        printf("%.1lf - %1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);  
        break;

        case '*':
        printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
        break;

        case '/':
        printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
        break;
        default: 
        printf("El operador no es correcto");

    }
}
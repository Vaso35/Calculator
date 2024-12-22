
#include <stdio.h>
#include <math.h>

int calculator(int a, int b, char c)
{
    int result; // Declarar la variable result
    switch (c)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;

    case '/':
        if (b == 0) // Verificar división por cero
        {
            printf("Error: Division por cero\n");
            return -1; // Retornar un valor de error
        }
        result = a / b;
        break;

    case '%':
        if (b == 0) // Verificar módulo por cero
        {
            printf("Error: Division por cero\n");
            return -1; // Retornar un valor de error
        }
        result = a % b;
        break;
    case '^':
        result = pow(a, b);
        break;
        
    default:
        printf("Operador no valido\n");
        return -1; // Retornar un valor de error
    }
    return result;
}

int main()
{
    int a, b;
    char c; 

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tipo de operador: (+, -, *, /, %, ^): ");
    scanf(" %c", &c); // Agregar un espacio antes de %c para ignorar espacios en blanco

    int result = calculator(a, b, c); // Call a la función calculator
    printf("El resultado es: %d\n", result);

    return 0;
}
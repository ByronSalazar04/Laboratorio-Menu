#include <stdio.h>
#include <stdlib.h>
//Estas son las funciones para cada uno de los programas.
void calculadora();
void verificarBisiesto();
void verificarPrimo();
void calcularPotencia();
//Esta es la función Main, la cual controla todos los programas los cuales tienen una función específica para su ejecución
int main() {
    int opcion;

    do {
    //Acá las instrucciones para el usuario, se le proporciona un número para acceder a cada uno de los programas
        printf("\nSeleccione una opcion:\n");
        printf("1. Calculadora\n");
        printf("2. Verificar si un año es bisiesto\n");
        printf("3. Verificar si un numero es primo o compuesto\n");
        printf("4. Calcular potencia de un numero\n");
        printf("0. Salir\n");
	//En este caso implementé un switch para que sea más fácil el acceso a los programas
	//Tiene 5 casos posibles, 4 son a cada programa y 1 para salir de la aplicación, de ser diferente el número ingresado por el usuario
	//Se mostrará un mensaje diciendo que esa opción no es válida y que intente de nuevo.
	//También el while permite reiniciar la aplicación sin que esta se cierre, para que el usuario pueda hacer las operaciones qu guste.
        printf("Ingrese el numero de la opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                calculadora();
                break;
            case 2:
                verificarBisiesto();
                break;
            case 3:
                verificarPrimo();
                break;
            case 4:
                calcularPotencia();
                break;
            case 0:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
	// si la opción es 0, nos sale el mensaje de saliendo del programa y este es finalizado 
    } while (opcion != 0);

    return 0;
}
//Acá tenemos la función de calculadora, al ingresar dos dígitos hace las 4 operaciones básicas entre esos números.
void calculadora() {
    float valor1, valor2, resultado;

    printf("Ingrese el primer valor: ");
    scanf("%f", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%f", &valor2);

    resultado = valor1 + valor2;
    printf("Suma: %.2f\n", resultado);

    resultado = valor1 - valor2;
    printf("Resta: %.2f\n", resultado);

    resultado = valor1 * valor2;
    printf("Multiplicacion: %.2f\n", resultado);

    if (valor2 != 0) {
        resultado = valor1 / valor2;
        printf("Division: %.2f\n", resultado);
    } else {
        printf("Error: No se puede dividir por cero.\n");
    }
}
 	//Acá está el programa para saber si un año es bisiesto, el método qe utilicpe fue dividir el año entre 4
 	// si es multiplo de 4 es bisiesto, de lo contrario no es bisiesto.
void verificarBisiesto() {
    int anio, divisor;

    printf("Todo año Bisiesto es divisible entre 4 \n");
    printf("Ingrese un anio: ");
    scanf("%d", &anio);
    divisor = anio % 4;

    if (divisor == 0) {
        printf("Este anio es bisiesto\n");
    } else {
        printf("Este anio no es bisiesto\n");
    }
}
	//Este es el programa de numeros primos, lo que hece es ingresar un número y lo divide hasta que sea 0 el residuo
	// si se divide más de dos veces es compuesto, de lo contrario es un número primo.
void verificarPrimo() {
    int i, numero, cont = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cont++;
        }
    }

    if (cont > 2) {
        printf("\n El numero es Compuesto\n");
    } else {
        printf("\n El numero es primo\n");
    }
}
	//Por último tenemos un programa que calcula la potencia de un numero, se toma la base y el exponente y se hace la 
	//multipliacion entre los mismos, el exponente se toma el acumulado de la suma de i y se multiplica a la base.
void calcularPotencia() {
    int base, i, exponente, resultado = 1;

    printf("Ingrese la base de la potencia: ");
    scanf("%d", &base);

    printf("Ingrese el exponente de la potencia: ");
    scanf("%d", &exponente);

    for (i = 1; i <= exponente; i++) {
        resultado = resultado * base;
    }
    printf("El resultado es %d\n", resultado);
}


/*
 ============================================================================
 Name        : Tp1Calculadora.c
 Author      : Natalia del Mar Rodriguez - Comisión: 1E
 Version     :
 Copyright   : Your copyright notice
 Description :
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) e) “El factorial de A es: r1 y El factorial de B es: r2”
 Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.

• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)

• Deberán contemplarse los casos de error (división por cero, etc)

• Documentar todas las funciones
2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "tp1Lab.h"

int main(void) {

	setbuf(stdout,NULL);

	int numA = 0;
	int numB = 0;
	int menu;

	//int operadores
	int suma;
	int resta;
	int multiplicacion;
	float division;
	int r1;
	int r2;

	do {


		printf("\n MENU:\n");
		printf("1.Ingresar 1er operando: A\n");
		printf("2.Ingresar 2do operando: B\n");
		printf("3.Calcular todas las operaciones\n");
		printf("4.Informar resultados\n");
		printf("5.Salir\n");
		scanf("%d", &menu);


		switch (menu) {
		case 1:
			printf("El valor actual de A es %d, ingrese uno nuevo ", numA);
			scanf("%d", &numA);
			break;

		case 2:
			printf("El valor actual de B es %d, ingrese uno nuevo ", numB);
			scanf("%d", &numB);
			break;

		case 3:
			if (numA==0 && numB==0)
			{
				printf("Ingrese primero los operandos para realizar las operaciones\n");

			} else{

				printf("Aguarde un momento, estamos procesando las operaciones... \n.....\n");

		}
			Sleep(1000);

			suma = sumar_AB(numA, numB);
			resta = restar_AB(numA, numB);
			multiplicacion = multiplic_AB(numA, numB);
			division = dividir_AB(numA, numB);
		    //factorial:
			if (numA >= 0) {
				r1 = factorial_AB(numA);
			}
			if (numB >= 0) {

				r2 = factorial_AB(numB);
			}
			break;

		case 4:
			printf("\nEl resultado de A+B es: %d", suma);
			printf("\nEl resultado de A-B es: %d", resta);


			if (division >= 0){

				printf("\nEl resultado de A/B es: %.2f", division);

			}else
				printf("\nNo es posible dividir por cero");


			printf("\nEl resultado de A*B es: %d", multiplicacion);
			printf("\nEl factorial de A es: %d y El factorial de B es %d\n",r1,r2);
			system("PAUSE");
			break;

		case 5:
			printf("Gracias por elegir nuestra aplicación\n");
			system("PAUSE");
			break;
		}
		system("CLS");
	}

	while(menu!=5);

	return EXIT_SUCCESS;

}

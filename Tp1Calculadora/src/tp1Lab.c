/*
 * tp1Lab.c
 * name: Tp1Calculadora.c
 * Author: Natalia del Mar Rodriguez - Comisión: 1E
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>



int sumar_AB(int numA, int numB) {
	int varSumar;

	varSumar = numA + numB;
	return varSumar;

}

int restar_AB(int numA, int numB) {
	int varRestar;
	varRestar = numA - numB;

	return varRestar;

}

int multiplic_AB(int numA, int numB) {
	int varMulti;
	varMulti = numA * numB;

	return varMulti;

}

float dividir_AB(int numA, int numB) {
	float varDiv;

	if (numB != 0) {

		varDiv = (float) numA / numB;
		return varDiv;

	} else {

		return -1;
	}
}

int factorial_AB(int num){
	int i;
	int factorial=1;
	for (i=1; i<=num;i++){

			factorial=factorial * i;
		}
	return factorial;
}

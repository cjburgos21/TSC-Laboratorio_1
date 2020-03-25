#include <iostream>
#include "math_tools.h"
#include "display_tools.h"
#include <stdlib.h>

int main(void){

	Matrix example_matrix;
	Matrix cofactor_matrix;
	Matrix transpuesta_matrix;
	Matrix inversa_matrix;

	zeroes(example_matrix, 3);

	example_matrix.at(0).at(0) = 2; example_matrix.at(0).at(1) = 2; example_matrix.at(0).at(2) = 3;
	example_matrix.at(1).at(0) = 4; example_matrix.at(1).at(1) = 5; example_matrix.at(1).at(2) = 6;
	example_matrix.at(2).at(0) = 7; example_matrix.at(2).at(1) = 8; example_matrix.at(2).at(2) = 9;


	cout << "Matriz inicial\n";
	showMatrix(example_matrix);

	cofactores(example_matrix, cofactor_matrix);
	cout << "Matriz de cofactores\n";
	showMatrix(cofactor_matrix);

	transpuesta(example_matrix, transpuesta_matrix);
	cout << "Matriz transpuesta\n";
	showMatrix(transpuesta_matrix);
	
	inversa(example_matrix, inversa_matrix);
	cout << "Matriz Inversa\n";
	showMatrix(inversa_matrix);


	return 0;
}
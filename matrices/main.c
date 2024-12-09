#include <stdio.h>

void printMatrix(int mat[3][3]){
	int length = 3;

	for (int i = 0; i<length; i++) {
		for (int j=0; j<length; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void addMatrices(int matA[3][3], int matB[3][3]){
	int length = 3;
	int result[3][3];

	for (int i = 0; i < length; i++) {
		for (int j = 0; j<length; j++) {
			result[i][j] = matA[i][j] + matB[i][j];
		}
	}

	printMatrix(result);
}

void rowColumnMultiplaction(void){

}

void multiplyMatrices(int matA[3][3], int matB[3][3]){
	int length = 3;
	int result[3][3];
	// c11 = a11*b11 + a12*b21 + a13*b31
	for (int i = 0; i < length; i++) {
		for (int j = 0; j<length; j++) {
			result[i][j] = 0;
			for (int k = 0; k<length; k++) {
				result[i][j] += matA[i][k] * matB[k][j];
			}
		}
	}

	printMatrix(result);
}

int main(int argc, char *argv[])
{
	// add and multiply two matrices
	//
	int matA[3][3] = {{12,8,4}, {3,17,14}, {9,8,10}};
	int matB[3][3] = {{5, 19, 3}, {6, 15, 9}, {7,8,16}};

	//addMatrices(matA, matB);
	multiplyMatrices(matA, matB);
	
	return 0;
}

#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
#include<time.h>


int dex_alg(int matrix[100][100], int a, int b, int *d, int prevs) {

	for(int i = 0; i < 20; i++)
		d[i] = matrix[i][a];
	for(int i = 0; i < 20; i++) {
		if(d[i] + prevs < d[b]){
			
		} 	
	}

}



int main(){

	//int d[100];
	int matrix_connect[20][20];
	//int matrix_resh[100][100];

	for(int i = 0; i < 20; i++){
		for(int j = 0 ; j < 20; j++){
			matrix_connect[i][j] = rand() % 50;
		}
		matrix_connect[i][i] = 0;
	}
	for(int i = 0; i < 20; i++){
		for(int j =0 ; j < 20; j++){
			printf(" %d ",matrix_connect[i][j]);
		}
		printf("\n");
	}

	return 0;

}

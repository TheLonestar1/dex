#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 6

int dex_alg(int matrix[100][100], int a, int b, int *d, int prevs) {

	

}



int main(){
int d[SIZE]; // ??????????? ??????????
  int v[SIZE]; // ?????????? ???????
  int temp;
system("chcp 1251");
  int minindex, min;
	//int d[100];
	int a[SIZE][SIZE] ={0};
	//int matrix_resh[100][100];
	for(int i = 0; i < SIZE; i++){
		
		for(int j = 0 ; j < i; j++){
			a[i][j] = (rand() % 9)+ 1 ;
		}
		a[i][i] = 0;
	}
	for(int i = 0; i < SIZE; i++){
		
		for(int j = 0 ; j < i; j++){
			a[j][i] = a[i][j];
		}
	}
	for(int i = 0; i < SIZE; i++){
		for(int j =0 ; j < SIZE; j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i<SIZE; i++)
  {
    d[i] = 10000;
    v[i] = 1;
  }
  d[0] = 0;
  // ��� ���������
  do {
    minindex = 10000;
    min = 10000;
    for (int i = 0; i<SIZE; i++)
    { // ���� ������� ��� �� ������ � ��� ������ min
      if ((v[i] == 1) && (d[i]<min))
      { // ��������������� ��������
        min = d[i];
        minindex = i;
      }
    }
    // ��������� ��������� ����������� ���
    // � �������� ���� �������
    // � ���������� � ������� ����������� ����� �������
    if (minindex != 10000)
    {
      for (int i = 0; i<SIZE; i++)
      {
        if (a[minindex][i] > 0)
        {
          temp = min + a[minindex][i];
          if (temp < d[i])
          {
            d[i] = temp;
          }
        }
      }
      v[minindex] = 0;
    }
  } while (minindex < 10000);
  // ����� ���������� ���������� �� ������
  printf("\n���������� ���������� �� ������: \n");
  for (int i = 0; i<SIZE; i++)
    printf("%5d ", d[i]);

  // �������������� ����
  int ver[SIZE]; // ������ ���������� ������
  int end = 4; // ������ �������� ������� = 5 - 1
  ver[0] = end + 1; // ��������� ������� - �������� �������
  int k = 1; // ������ ���������� �������
  int weight = d[end]; // ��� �������� �������

  while (end > 0) // ���� �� ����� �� ��������� �������
  {
    for(int i=0; i<SIZE; i++) // ������������� ��� �������
      if (a[end][i] != 0)   // ���� ����� ����
      {
        int temp = weight - a[end][i]; // ���������� ��� ���� �� ���������� �������
        if (temp == d[i]) // ���� ��� ������ � ������������
        {                 // ������ �� ���� ������� � ��� �������
          weight = temp; // ��������� ����� ���
          end = i;       // ��������� ���������� �������
          ver[k] = i + 1; // � ���������� �� � ������
          k++;
        }
      }
  }
  printf("\n����� ����������� ����\n");
  for (int i = k-1; i>=0; i--)
    printf("%3d ", ver[i]);
  
	return 0;

}

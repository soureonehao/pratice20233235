#include<stdio.h>
void main() {
	int  Matrix1[3][4] = { {1,2,3,4} {5,6,7,8} {9,10,11,12} };	//�����ά���鲢��ʼ��
	int	Matrix2[4][3], i, j;		//����仯������飬ѭ������
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {		
			Matrix2[j][i] = Matrix1[i][j];	//�д�Ϊ��
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {	
			printf("%d", Matrix2[i][j]);	//���ת���������
		}
	}
}
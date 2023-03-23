#include<stdio.h>
void main() {
	int  Matrix1[3][4] = { {1,2,3,4} {5,6,7,8} {9,10,11,12} };	//定义二维数组并初始化
	int	Matrix2[4][3], i, j;		//定义变化后的数组，循环变量
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {		
			Matrix2[j][i] = Matrix1[i][j];	//行存为列
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {	
			printf("%d", Matrix2[i][j]);	//输出转换后的数组
		}
	}
}
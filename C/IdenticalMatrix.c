#include<stdio.h>

int main() {

	int m, n, mat[10][10], i, j, flag = 0;
	printf("Enter the number of rows & coloumns:\n");
	scanf("%d %d", &m, &n);
	if(m == n){
		printf("Enter the elements: \n");
		for( i = 0; i < m; i++)
		{
			for( j = 0; j < n; j++)
			{
				scanf("%d", &mat[i][j]);
			}
		}
		for(i = 0; i < m; i++){
			for(j = 0; j < m; j++){
				if((i == j) && ( mat[i][j] != 1)){
					flag =- 1;
					break; 
				}
				else if(( i != j) && ( mat[i][j] != 0)){
					flag =- 1;
					break;
				}
			}
		}
		if(flag == 0){
			printf("Identical");
		}
		else{
			printf("Not identical");
		}
	}
	else{
		printf("Not a square matrix");
	}
    return 0;
}

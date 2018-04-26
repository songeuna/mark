#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int **snail;
	int i = 0, j =0;	
	int n;
	int count = 0;

	printf("사이즈를 입력하세요 : ");
	scanf("%d",&n);
	
	snail = malloc(sizeof(int *) * n);
	
	for(i = 0; i <= n; i++){
		snail[i] = malloc(sizeof(int *) * n);

	}
	i = 0;


	while(j < n){
		snail[i][j] = ++count;
		j++;	
	}		
		
	if(j == n){
		i++;
		while(i < n) {
			snail[i][j-1] = ++count;
			i++;
		}	
	}
	
	if(i == n){
		j = j-2;
		while(j >= 0){
			snail[i-1][j] = ++count;
			j--;
		}
		j++;
	
	}

	if(j == 0){
		i = i-2;
		while(i > 0){
			snail[i][j] = ++count;
			i--;
		}

	}
	
	





//출력
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			printf("|  %d  |",snail[i][j]);
		printf("\n");
	}
		printf("\n");

	
}

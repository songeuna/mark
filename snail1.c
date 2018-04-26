#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int **snail;
	int i = 0, j = 0, x, z=0;
	int count = 0;
	int data = 0 ; // 저장할 값
	int n; // 입력받는값

	printf("사이즈를 입력하세요 : ");
	scanf("%d",&n);
	
	z=n;	

	snail = malloc(sizeof(int *) * n);

	for(i = 0; i < n; i++)
		snail[i] = malloc(sizeof(int *) * n);
	

	while(data != n*n){
		for(count = 0; count < z; count++){
			snail[i][j] = ++data;
			j = j + x;
		}

		z--;

		j = j - x;
		
		
		for(count = 0; count < z; count++){
			i = i + z;			
			snail[i][j] = ++data;			
		}
	
		x = x * (-1);
	}
	


/*	while (k!=n*n)	
	{

        for (j=0;j<t;j++)

        {

            arr[x][y]=++k;

            y+=reverse;

        }

        t--;y-=reverse;

        for (j=0;j<t;j++)

        {

            x+=reverse;

            arr[x][y]=++k;

        }

        y-=reverse;

        reverse=reverse*(-1);

    }

*/


/*	x=n*2-3;
	
	while(!(x==0)){
		for(j = 0; j < n; j++)
			snail[z][j] = ++data;
		
		for(i = 0; i < n; i++){                          
			  for(j=0; j<n; j++)
				temp[i][j] = snail[i][(n-1)-j];
		}
			x--;
			count++;
			
			if(data == 4){
				count = 0;
				z++;
			}	
	}
*/
















/*i = 0;

	for(j = 0; j < n ;j++)
		snail[i][j] = ++count;
	
	j--;

	for(i = 0; i < n; i++){
		snail[i][j] = ++count;
	}


		
			
	*/
//	}


	
	
	





//출력
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			printf("|  %d  |",snail[i][j]);
		printf("\n");
	}
		printf("\n");

	
}

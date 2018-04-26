#include<stdio.h>
#include<string.h>
#define DEBUG 

void input_c(char *input[51]);

void main(void)
{
	char input[51];
	input_c(&input);
	printf("%s\n",input);


}

void input_c(char *input[51])
{
        int i;

        printf("소문자 문자열을 입력하세요 : ");
        scanf("%s",input);

     	for (i = 0; i < (strlen(input)-1); i++){

                if(!(*input[i] >= 'a' && *input[i] <= 'z')){
			printf("문자가 잘못됐습니다\n");
			printf("종료합니다\n");
			break;
		}	

    }


}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, answer;
	answer = 59;
	int trial = 0; 
	do
	{	
		printf("Guess a number:");
		scanf("%d", &x);
		//입력받은 숟자가 정답보다 큰지 작은지 출력
		 
		if  ( x < answer)
		{
			printf("Low\n");
			trial = trial + 1;
		}		
		else if ( x > answer)
		{
			printf("High\n");
			trial = trial + 1;
		}
			
		else if ( x == answer)
		{
			trial = trial + 1;
			break;
		}
			
	} while (x != answer); //정답과 같은지 여부 판 단 
	
	printf("Congratulation! trials : %d", trial);
 

	return 0;
}

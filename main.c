#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num; num = 0;
	printf("input a string:");
	while((c= getchar()) != '\n') //�Է� ���ڰ� ���๮�ڰ� ���� ������ �ݺ� 
	{
		if (c >= '0' && c <= '9' ) //���ڴ� '0'�̻� '9'�� �� 
			num = num + 1;
		
	}
	
	printf("the number of digits is %d", num);
	 

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;

	printf("���� �ϳ��� �Է��Ͻʽÿ�:");
	scanf("%d", &x);

	if (x<0)
   		printf("���밪�� %i �Դϴ�", -x);
    else if (x>0)
      	printf("���밪�� %i �Դϴ�", x);

	return 0;
}

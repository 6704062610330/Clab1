#include <stdio.h>
int main()
{
	int n1;
	int n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	if (n1>n2){
		int total = n1-n2;
		printf("n1 > n2 = %d",total);
	}else{
		int total = n2-n1;
		printf("n2 > n1 = %d",total);
	}
}

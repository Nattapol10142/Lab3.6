#include<stdio.h>

int main(){
	int score;
	scanf("%d",&score);
	if (score >= 68)
		if (score >= 80)
			printf("A");
		else if (score >= 75)
				printf("B");
	else printf("C");
	if (score <=67)
			printf("D");
	else if (score <= 54)
			printf("F");
	return 0;		
}

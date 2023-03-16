#include <stdio.h>
#include <stdlib.h>

	

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("how many elements your array have?\n");
	scanf("%d",&n);
	
	int array[n];
	int i,j;
	int sum=0;
	
    for(i=0;i<n;i++){
	printf("type your arrays elements\n");
	scanf(" %d",&array[i]);
	
		
}
for(i=0;i<n;i++){
	
sum=sum+array[i];
}
printf(" result : %d",sum);
	return 0;
}
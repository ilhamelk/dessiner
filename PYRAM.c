#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Entrer un nombre:\n");
	scanf("%d",&n);
	for(int  i=1;  i<=n; i++){
	    for(int k=1;k<=n-i;k++) {
	        printf(" ");
	    }
	    for (int j=1;j<=i*2-1;j++){
	        printf("*");
	    }
	    printf("\n");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int P[9],R[9];
int i,j;    
	printf("vedit vuxidnui masiv:" );
	for (i=0;i<9;i++)
	scanf("%d",&R[i]);
    i=9; 
    printf("\n new masiv:");
	for (j=0;j<9;j++)
    {P[j]=R[i];
    i--;
	printf("%d ",R[i]);
	}
	system("pause");
	return 0;
}

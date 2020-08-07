#include <iostream>
#include <math.h>
#include<stdlib.h>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int B[4][6]; 
	int i,j,s,k,l;
	s=1;
	printf("vedit masiv B(4,6)\n");
	for ( i = 0; i < 4; i++ )
	{printf("\n");
	for ( j = 0; j < 6; j++ )
    {
	B[i][j]=rand()% 30 +0;
	printf("%d ",B[i][j]);
	s=s*B[i][j];
	}}
	l=sqrt(sqrt(sqrt(s)));
	k=cbrt(l);
    printf("\n");
    printf("%d ",k);
    system("pause");
    return 0;
}

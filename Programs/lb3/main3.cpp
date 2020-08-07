#include <math.h>
#include<stdlib.h>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int v[5][5]; 
	int l,c,max,i,j;
	int b[25];
	printf("vedit masiv V(5,5)\n");
	
	l=0;
	
	for ( i = 0; i < 5; i++ ) 
	{printf("\n");
   	for ( j = 0; j < 5; j++ )
    {
	v[i][j]=rand()% 9 +0;
	printf("%d ",v[i][j]);
	b[l]=v[i][j];
    l++;
	}}
    
    printf("\n\nNovyu 1 vymirn mas\n");
	
	for ( i = 0; i < 25; i++ ) 
    printf("%d ",b[i]);
	
    printf("\n\n");
	
		
	system("pause"); 
    return 0;
}

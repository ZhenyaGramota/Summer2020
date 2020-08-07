#include <math.h>
#include<stdlib.h>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int U[3][7]; 
	int l,c,max,i,j,zm;
	max=0;
	printf("vedit masiv U(3,7)\n");
	for ( i = 0; i < 3; i++ ) 
	{printf("\n");
   	for ( j = 0; j < 7; j++ )
    {
	U[i][j]=rand()% 9 +0;
	printf("%d ",U[i][j]);
	}}
   	for ( j = 0; j < 7; j++ )
	{
	for ( i = 0; i < 3; i++ ) 
    if(max<U[i][j])
    {max=U[i][j];
    l=i;}
    zm=U[0][j];
    U[0][j]=U[l][j];
    U[l][j]=zm;
	max=0; 
	 }
    printf("\n");
    
    for ( i = 0; i < 3; i++ ) 
	{printf("\n");
   	for ( j = 0; j < 7; j++ )
    {
	printf("%d ",U[i][j]);
	}}	
    printf("\n\n"); 	
	printf("%d ",U[i][j]);
	system("pause"); 
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
             
void Cs(int *a, int n) {  
int sum,i,k,d,c; 
for(i=1;i<n;i++) 
for(k=1;k<n;k++) 
{
d=*(a+i*n+k)/10; 
c=*(a+i*n+k)-d;	 
if(!(c==d)) 
{
printf("\n\nstovbchik %d",i);
sum=0; 
for(i=1;i<n;i++) 
sum=sum+*(a+i*n+k); 
printf("%d",sum); 
}}}
int main (){ 
int *a; 
int i,k,n,l; 
scanf("%d",&n); 
a=(int*)malloc(n*n*sizeof(int));  
for(i=1;i<=n;i++) 
{
printf("\n"); 
for(k=1;k<=n;k++)
{
*(a+i*n+k)=rand()% 89+10;
printf("%d",*(a+i*n+k)); 
}}
if(a==NULL) 
{{
printf("Error"); 
return -1;
}}
Cs(a,n);  
free(a);  
system("pause"); 
return 0;
}


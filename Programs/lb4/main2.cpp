#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a[10][10],n,m, i,j,max,l,k,p;
int b[10];
printf("\n vedit n,m");
scanf("%d %d",&n,&m);
printf("\n masiv A(n,m):");
for (i=0;i<n;i++)
{
b[i]=0;
printf("\n");
for (j=0;j<m;j++)
{a[i][j]=rand()% 10 +1;
printf("%d ",a[i][j]);
if(a[i][j]>max)
max=a[i][j];
}
for (j=0;j<m;j++)
if(max==a[i][j])
b[i]++;
max=0;                          
}
max=0;
for (i=0;i<n;i++)
if(b[i]>=max)
{
l=i+1;
max=b[i];}
printf("\n nomer poslidnogo ryadka %d",l);
system("pause");
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct { 
char  r[100],n[100],k[100]; 
int y,d,v; 
}g; 
void p(g infa){ 
printf("firma %s \t size %d \t price %d \t  \n", infa.n, infa.y,infa.r);
}; 
int main(){ 
int i,n,l,k=0,max=0,t,year;year=2020; 
g *inf; 
printf("n="); 
scanf("%d",&n); 
inf=(g*)calloc(n,sizeof(g)); 
if(inf==0){exit(1);} 
printf("\n"); 
for (i=0;i<n;i++){ 
printf("firma"); 
fflush(stdin); 
gets(inf[i].n); 
printf("size"); 
gets(inf[i].r); 
printf("price"); 
gets(inf[i].k); 
}
for (i=0;i<n;i++) 
{t=inf[i].d; 
if((t>max)&&(inf[i].y>5500)){max=t;l=i;}} 
printf("\n price");p(inf[l]); 
printf("\n \n");
for (k=0;k<n;i++){ 
for (i=0;i<n;i++) 
{if(inf[i].y==year) 
{p(inf[i]); 
}}year=year-1; 
} 
if((t>max)&&(inf[i].y>17)){max=t;l=i;}} 
printf("\n price");p(inf[l]); 
printf("\n \n");
for (k=0;k<n;i++){ 
for (i=0;i<n;i++) 
{if(inf[i].y==year) 
{p(inf[i]); 
}}year=year-1; 
} 
system("pause");
return 0;
}



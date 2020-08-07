#include<stdio.h>
#include<stdlib.h>

double **Allocate(int m, int n)
{
double **a;
int i;
a = (double **)malloc(m*n*sizeof(double) + m*sizeof(double *));
if (a)
{
for(i = 0; i < m; i++)
a[i] = (double *)(a + m) + i*n;
return a;
}
else return NULL;
}

void Init(double **a, int m, int n)
{
int i, j;
for(i = 0; i < m; i++)
for(j = 0; j < n; j++)
a[i][j] =  rand()%20;
}

void Print(double **a, int m, int n)
{
int i, j;
for (i = 0; i < m; i++)
{
for (j = 0; j < n; j++)
printf("%.1f     ", a[i][j]);
printf("\n");
}
}

void func(double **a, int m, int n) {
    int i, j;
    int p=1;
    for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
    if (a[i][j] >2 &&  a[i][j]<10)
    {
	p=p*a[i][j];
    }
	}
	}
	printf("Product of elements for range 2-10 =  %d",p);}


int main()
{
double **a;
int m, n;
printf("M =  ");
scanf("%d", &m);
printf("N =  ");
scanf("%d",&n);
printf("\n   -----Array-----\n");
a = Allocate(m, n);
if (a)
{
Init(a, m, n);
Print(a, m, n);
func(a,m,n);
free(a);
}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double *A(int n) {
return (double *)malloc(n*sizeof(double)); }
double I(double *a, int n) {
int i;
for(i = 0; i < n; i++){
*(a + i) = rand()%13*1.12;}}
void p(double *a, int n) {
int i;
for (i = 0; i < n; i++){
printf("%d ", *(a + i));}}
void Func(double *a, int n) {
int min = 999; int max=0; int modul1;
int k = 0,i, t,j, f;
for (i = 0; i < n; i++)
{
if (*(a+i) > max)
{
max = *(a + i);
}
}printf("\nMax = %d",max);
for (i = 0; i < n; i++)
{
f=*(a + i);}
printf("\nlast element = %d",f);

modul1 = max-f;
printf("\nModule = %d",labs (modul1));
}
int main(){
double *a;
int n;
printf("Enter n = ");
scanf("%d", &n);
while (n<0){
printf("Try again = ");
scanf("%d", &n);
}
a = A(n);
I(a, n);
p(a, n);
Func(a, n);
return 0;
}

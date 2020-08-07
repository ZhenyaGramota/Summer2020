#include <stdio.h>
#include <stdlib.h>

int main()
{
int b,i,c,n=0;
printf("b=");
scanf("%d",&b);
int a[b],*p;
p=a;
for(i=0;i<b;i++){
scanf("%d",&a[i]);
}
c=*(p+1);
for(i=0;i<b;i++){
if(c!=a[i-1]){
n++;
}
}
printf("\nk=%d",n);
system("pause");
return 0;
}

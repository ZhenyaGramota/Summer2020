#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int R[10];  
	int i,s,m1,m2,m3;  
	float k;
	m3=0;
	printf("vedit vuxidnui masiv:");	
    for (i=0;i<10;i++)
	scanf("%d",&R[i]);
    printf("\n ser geometrichne:");
	for (i=0;i<10;i++)
    if(m1<R[i])
    m1=R[i];	
for (i=0;i<10;i++)
    if(m2<R[i]&&R[i]<m1)
    m2=R[i];	
for (i=0;i<10;i++)
    if(m3<R[i]&&R[i]<m2)
    m3=R[i];	
  s=(m1*m2*m3);
  k=cbrt(s);
  printf("%0.2f",k);
  printf("\nmax1 %d",m1);
  printf("\nmax2 %d",m2);
  printf("\nmax3 %d",m3);
  printf("\n");
  for (i=0;i<10;i++)
  printf("%d ",R[i]);
  system("pause");
  return 0;
}

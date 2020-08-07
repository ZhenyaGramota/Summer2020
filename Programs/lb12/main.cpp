#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nomer{  //опис структури
int p;//опис змінної
struct Nomer *l;
}R;
int Spusok (R **head, int p1){
R *s=(R*)malloc(sizeof(R));
s->p=p1;
s->l=*head;
*head=s;
}
void D(R *head){
int b,c;
int k,i;
int d,sum;
for(i=0;i<4;i++)
if(!(i==0)){
printf("\n\t%d",head->p);
d=head->p;
if(i<=2)
sum=sum+d;
if(d%2 == 0)
k++;
head=head->l;
}
printf("\nSum=%d",sum);
printf("\nParni=%d",k);
}
int main(int argc, char *argv[]) {
int i; 
int p1;
R *head=NULL;
printf("vedit 4 chisla:"); 
for (i=0;i<4;i++)
{scanf("%d",&p1);
Spusok(&head,p1);}       
D(head);
while (head )  
{
(head) = (head) -> l;
free(head);
}
printf("\n\nspusok is deleted");
system("pause");
return 0;
}

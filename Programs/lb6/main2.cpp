#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct f {    
char sn[20]; 
char n[20]; 
} 
p; 
int main(int argc,char*argv[]) { 
int i,k=0; 
float oc=90; 
p stud [4]; 
for(i=1;i<2;i++) 
{
printf("enter name:"); 
fflush(stdin); 
gets(stud[i].n); 
printf("enter surname:"); 
fflush(stdin); 
gets(stud[i].sn); 
}
for(i=1;i<2;i++) 
{
{
k=k+1; 
printf("name %s\n",stud[i].n); 
printf("surname %s\n",stud[i].sn); 
}}
printf("odne slovo pochinaetsia s literi M %d",k); 
system("pause"); 
return 0;
}

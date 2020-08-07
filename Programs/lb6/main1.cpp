#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
setlocale(0, "");
int k = 1; 
int m = 1; 
int i = 1, max = 0, min = 0;
int data[30]; 
for(int i = 0; i < (int)(sizeof(data) / sizeof(int)); i++)
{
cout << data[i] << "\t";
if(k != 6)
k++;
else
k = 1;
if(m != 5)
m++;
else
{
m = 1;
cout << endl;
}
}
if(data[i] > max)
max=data[i];
if(data[i] < min)
min=data[i];
cout << "Макс. значення" << max << endl;
cout << "Мін. значення" << min << endl;
return 0;
}

#include <iostream>
#include <math.h>
#include <fstream> 
using namespace std;
int main() 
{
int a, b;
cout <<"Enter value of width a =" <<endl;
cin >>a;
cout <<"Enter value of height b ="<<endl;
cin >> b;
auto c=sqrt(pow(a,2)+pow(b,2));

cout <<"The third side =" <<c<<endl;
 std::ofstream myfile;
 myfile.open ("example.txt");
 if (myfile<<" Three sides of triangle are "<<a<<" "<<b<<" and"<<c);
 myfile.close();  

return 0;
   
}
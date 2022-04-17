#include <iostream>
using namespace std;
void ref1(){
int m=6;
int &n=m;
n=n*4;
cout<<"value of m is: "<<m<<endl;
m=40;
cout<<"value of m is: "<<m<<endl;
}

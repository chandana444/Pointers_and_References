#include <iostream>

using namespace std;
void arr1();
void arr2();
void ref1();
int main()
{   //Single pointer
    int a=4;
    int *b = &a;
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The address of a is:"<<&a<<endl;
    cout<<"The address of a stored in b is:"<<b<<endl;
    cout<<"The value of a which is pointed by b is:"<<*b<<endl;

    //Double pointer
    int **c=&b;
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The address of b stored in c is:"<<c<<endl;
    cout<<"The Value at address c is:"<<*c<<endl;
    cout<<"The Value at address b pointed by c is:"<<**c<<endl;

    //Triple pointer
    int ***d=&c;
    cout<<"The address of c is:"<<&c<<endl;
    cout<<"The address of c stored in d is:"<<d<<endl;
    cout<<"The Value at address d is:"<<*d<<endl;
    cout<<"The Value at address c pointed by d is:"<<**d<<endl;
    cout<<"The Value at address b pointed by c and d is:"<<***d<<endl;

    arr1();//Accessing elements of Single Dimensional array
    arr2();//Accessing elements of Multi Dimensional array
    ref1();//Reference variable
}

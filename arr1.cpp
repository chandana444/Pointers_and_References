#include <iostream>
using namespace std;
void arr1(){
    int v[3] = {2, 4, 6};
    int *ptr;
    ptr = v;
    cout<<"The 1d array:";
    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
}

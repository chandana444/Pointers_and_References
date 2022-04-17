#include <iostream>
using namespace std;
void arr2(){
 int s[3][3]={{1,2,3},{4,5,6}};
 cout<<"The multidimensional array:"<<endl;
 for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<*(*(s + i) + j)<<" ";
    }
    cout<<endl;
 }
}

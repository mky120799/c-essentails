#include<bits/stdc++.h>
using namespace std;
struct rectangle 
{
    int length;
    int breadth ;
    char x;

};  //these are global variable
 

    struct rectangle r1 ;
int main()
{r1={12,3};
r1.breadth=7;
cout<<r1.breadth<<endl;
    //struct rectangle r1 ;
    cout<<"hello world"<<" "<<sizeof(r1)  <<endl;
}
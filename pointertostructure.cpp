#include<bits/stdc++.h>
using namespace std;
struct rectangle 
{
    int length=1;
    int breadth=34;

};
int main()
{
    rectangle r;
    rectangle *rr=&r;
cout<< rr->length;
cout<<endl;    cout<<r.length;


  //  rectangle r={10,5};
   // cout<<r.length<<endl;
   // cout<<r.breadth<<endl;
   /* rectangle *rr;//=&r;
    rr=( rectangle *)malloc(sizeof(rectangle ));
    rr->length=67; 
   cout<< rr->length<<endl;
   return 0;
   rectangle r;
   rectangle *p=&r;*/
   return 0;
}
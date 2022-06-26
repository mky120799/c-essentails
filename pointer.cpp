#include<bits/stdc++.h>
using namespace std;
int main()
{/*
  //  int a=10;
    int *p;
    int b;
  //  &b=a;
   p=(int *)malloc(5*sizeof(int));
   
 //   p[0]=7;p[1]=5;p[2]=8;
    cout<<"first element of dynamic array"<<*(p+1)<<endl;

   // cout<< p<<"  "<<*&a<<"value of b"<<b;*/
   int b=10;
   int *p ;
   *p=&b;
   cout<<*p;
   return 0;

}
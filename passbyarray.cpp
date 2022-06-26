#include<bits/stdc++.h>
using namespace std;

int * arr(int size)
{
    int *p=new int[size];
    for(int i=0;i<size;i++)
    p[i]=1+i;
    return p;
}
int main()
{  //return by array or return by pointer 
 
 
 int size =5;
 int *p= arr(size);
 for(int i;i<size;i++)
 {
    cout<<*(p+i )  <<" "<<endl;
 }
    return 0;


}
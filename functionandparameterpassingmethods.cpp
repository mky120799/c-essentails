#include<bits/stdc++.h>
using namespace std;
void swape(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main()
{
    int a=5, b=6;
    swape(a,b);
    cout<<"value of a "<<a<<endl;
    cout<<"value of b "<<b<<endl;
    return 0;
}
 /*
int add(int a,int b)
{
    int c=a+b;
    return c;

}
int main()
{
    int a=1,b=2;
   cout<<"sum is  "<< add(a,b);
   return 0;


}


*/
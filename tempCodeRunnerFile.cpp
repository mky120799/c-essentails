#include<bits/stdc++.h>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;

};
struct Array arr1={{2,3,4,5,6},10,5};
void display(struct Array arr )

{
    /* data */
    int i;
    cout<<"\n elements are\n";
    for (i=0;i<arr.length;i++)
    cout<<arr.A[i];
}
void Append(struct Array arr,int x)
{
    if(arr.length<arr.size)
    arr.A[arr.length++]=x;  
}
void insert (int index,int x)
{
    int i;
    if(index >=0&& index <=arr1.length )
    { 
        for(i=arr1.length ;i>index;i--)
        arr1.A[i]=arr1.A[i-1];
        arr1.A[index]=x;
        arr1.length++;
    }
     
    }

int main()
{
    
   // Append( arr1,10);
   insert(2,12);
    display(arr1);
    return 0;
}
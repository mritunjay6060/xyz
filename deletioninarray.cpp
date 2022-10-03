#include<iostream>
using namespace std;
void deletion(int arr[],int index,int sizeofarray)
{
    for(int i=index;i<(sizeofarray-1);i++)
    {
        arr[i]=arr[i+1];

    }
    arr[sizeofarray-1]=0;
}
int main()
{
    int arr[5]={0,1,2,3,4};
    deletion(arr,0,5);
    for(int a:arr)
    {
        cout<<a<<" ";
    }
    return 0;
}
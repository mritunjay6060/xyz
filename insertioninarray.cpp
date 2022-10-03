#include<iostream>
using namespace std;
void insertion(int arr[],int value,int index,int lastindex)
{
    for(int i = lastindex;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=value;
}
int main()
{
    int arr[5]={1,2,3,4,0};
    insertion(arr,69,4,3);
    for(auto v:arr)
    {
        cout<<v<<" ";
    }

    return 0;
}
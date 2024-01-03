#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,3,2,1};

    int len=sizeof(arr)/sizeof(arr[0]);

    cout<< "The array is :";
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<< "The sorted array is :";
    for(int i=4;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}








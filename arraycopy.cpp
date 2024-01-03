#include<iostream>
using namespace std;
int main()
{
    int arr1[]={5,2,4,7,8,1};
    int len=sizeof(arr1)/sizeof(arr1[0]);
    cout<< "The array is :"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int arr2[100];
    for(int i=0;i<len;i++)
    {
        arr2[i]=arr1[i];
    }
    cout<<"Copied array is: "<<endl;

    for(int i=0;i<len;i++)
    {
        cout<<arr2[i]<<" ";
    }
}







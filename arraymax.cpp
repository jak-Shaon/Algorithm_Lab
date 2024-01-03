#include<iostream>
using namespace std;
int main()
{
    int arr1[]={5,2,4,7,8,1};
    int mx=0;
    //int i;
    int len=sizeof(arr1)/sizeof(arr1[0]);

    cout<< "The array is :"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int i=0; i<len; i++)
    {
        if(arr1[i]>mx)
            mx=arr1[i];
    }
    cout<<endl<<"Largest element is : "<<mx;
}








#include<iostream>
using namespace std;

int insert(int arr[],int n,int key,int cap , int pos)
{
    if(n==cap)
    {
        return n;
    }

    int indx = pos-1;
    for(int i =n-1 ;i>=indx;i--)
    arr[i+1]=arr[i];

    arr[indx]=key;

return n+1;

}


int main()
{
    int arr[10]={1,2,3,4,5};
    int n =5;
    int cap = 10;
    int key = 11;
    int pos = 3;

    n=insert(arr,n,key,cap,pos);
    cout<<"New array is : "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


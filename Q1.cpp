//name Srijan Pillay
//roll no - 2010992458
//set - 3
//Q1 . 
#include <iostream>
using namespace std;

void swap(int n,int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void replace(int arr[],int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(arr[i-1]>arr[i])
        {
            swap(n,arr,i-1,i);
        }
        else if(arr[i+1]>arr[i])
        {
            swap(n,arr,i+1,i);
        }
        else{
            continue;
        }
    }
}
void print(int arr[],int n)
            {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            }


int main()
{

    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    try{
        if(n==0)
        {
            throw 1;
        }
        else{
            replace(arr,n);
            print(arr,n);
        }
    }
    catch(int t)
    {
        cerr<<"Invalid Array Size";
    }
    


    



    return 0;
}


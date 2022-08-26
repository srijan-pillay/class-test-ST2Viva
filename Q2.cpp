#include <iostream>
using namespace std;

int main()
{   
    int i,j,n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;

    try{
        if(n==0)
        {
            throw 1;
        }
        else{
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(arr[i]+arr[j]==target)
                    {
                        cout<<"Pair Found ("<<arr[i]<<","<<arr[j]<<")"<<endl;
                    }
                    else{
                        cout<<"pair not found"<<endl;
                        
                    }
                    break;
                }
                
            }
                    
        }
    }

    catch(int t)
    {
        cerr<<"invalid array size";
    }

    
    return 0;
}
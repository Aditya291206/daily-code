#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
    cout<<"enter "<<i+1<<" elements of array"<<endl;
    cin>>arr[i];
    }
    cout<<"your entered array is this"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;;
    }
    int x;
    cout<<"enter the element you search"<<endl;
    cin>>x;
    int mid;
    int low=arr[0];
    int high=arr[size-1];
    bool found=false;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            cout<<"found"<<endl;
            found=true;
            break;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;

        }
        else
        {
            low=mid+1;

        }
    }
    if(!found)
    {
        cout<<"not found"<<endl;
    }
    return 0;
}

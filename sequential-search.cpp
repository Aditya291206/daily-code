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
    bool found=false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==x)
        {
           cout<<"your value is found at index "<<i<<endl;
           found=true;
           break;
        }
    }
    if(!found)
    {
        cout<<"please enter valid number"<<endl;
    }
    return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   int a,b;


   cin>>a>>b;
   string arr[]={"one","two","three","four","five","six","seven","eight","nine"};
   for(int i=a;i<=b;i++)
   {
    if(a<b)
    {
      if(i<10 && i>0)
      {
        cout<<arr[i-1]<<endl;
      }
      else if(i>9)
      {
        if(i%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
      }
    }
   }
    return 0;
}

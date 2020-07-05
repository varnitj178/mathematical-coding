#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int a, int b)
{
    cout<<"("<<a<<" "<<b<<")"<<" ";
}
void stk(int arr[],int n )
{
    int c=0;
    for(int i =1;i<n;i++)
    {
        if(arr[i-1]<arr[i])
        {
            cout<<"("<<i-1<<" ";
            i++;
            while(i<n)
            {
                if(arr[i-1]<arr[i])
                {
                    i++;
                }else 
                {
                    break;
                }
            }
            cout<<i-1<<")"<<" ";
                c++;
        }
    }
    if(c==0)
    {
        cout<< "No Profit";
    }
}
int main()
 {
	int test;
	cin>>test;
	
	while(test--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    stk(arr,n);
	    cout<<endl;
	    
	    
	}
	return 0;
}

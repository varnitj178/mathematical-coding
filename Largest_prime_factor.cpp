#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 	cout<<"Enter the number of test cases:  ";
	int test;
	cin>>test;
	
	while(test--)
	{
		cout<<"Enter the number to fing the largest factor: "
	    int n;
	    cin>>n ;
	    
	    while(n%2==0)
	    {
	        n= n/2;
	    }
	    int large = 2;
	    for(int i= 3;i<=sqrt(n);i+=2)
	    {
	        if(n%i==0)
	        {
	            while(n%i==0)
	            {
	                n= n/i;
	            }
	        }
	        if(i>large)
	        {
	           large = i;
	        }
	   
	    }
	    if(n>2 && n>large)
        {
            large=n;
        }
	    cout<<large<<endl;
	}
	return 0;
}

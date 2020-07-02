#include<iostream>
#include<cmath>
using namespace std;


int main()
 {
 	cout<<"Enter the number of test cases: ";
	int test;
	cin>>test;
	while(test--)
	{
		cout<<"Enter the number N amd M:  "; 
	    float n,m ;
	    cin>>n>>m;
	    float inverse_n = 1/n;
	    float value = pow(m,inverse_n);
	    float temp = int(value);
	    float mul = pow(temp,n);
	    if (mul==m)
	    {
	    	
	        cout<<"The "<<n<<"th root of "<<m<<" is : "<<value<<endl;
	    }else
	    {
	        cout<<-1<<endl;
	    }
            
	   
	}
	return 0;
}

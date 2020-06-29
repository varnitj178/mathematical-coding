#include<iostream>
using namespace std;
int main()
 {
	int test;
	cin>>test;
	while(test--)
	{
	    int count=0;
	    int n;
	    cin>>n;
	    while(n)
	    {
	        count+= n&1;
	        n>>=1;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}

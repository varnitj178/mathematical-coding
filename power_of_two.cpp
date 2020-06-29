#include<iostream>
using namespace std;
bool isPowerOfTwo (long long x)  
{  
    return x && (!(x&(x-1)));  
}
int main()
 {
	int test;
	cin>>test;
	while(test--)
	{
	    long long unsigned n;
	    cin>>n;
	    isPowerOfTwo(n)? cout<<"YES\n": cout<<"NO\n";
	}
	return 0;
}

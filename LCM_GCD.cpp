#include<iostream>
using namespace std;
long GCD(long a, long b)
{
    if(a==b)
    {
        return a;
    }
    else if(a>b)
    {
        GCD(a-b,b);
    }else{
        GCD(a,b-a);
    }
}
int main()
 {
	int test;
	cin>>test;
	while(test--)
	{
	    long a,b,gcd,lcm;
	    cin>>a>>b;
	    gcd = GCD(a,b);
	    lcm = (a*b)/gcd;
	    cout<<lcm<<" "<<gcd<<endl;
	}
	return 0;
}

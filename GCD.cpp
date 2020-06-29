#include<iostream>
using namespace std;
int GCD(int a, int b)
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
	    int a,b,res;
	    cin>>a>>b;
	    res = GCD(a,b);
	    cout<<res<<endl;
	}
	return 0;
}

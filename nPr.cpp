#include<iostream>
using namespace std;
long factorial(int n,int r )
{ 
    long  unsigned fac = 1;
    for(int i=r;i<=n;i++)
    {
        fac *= i; 
    }
    return fac;
}
int main()
 {
	int test;
	cin>>test;
	while(test--)
	{
	    long  unsigned n,r,numo,deno,res;
	    cin>>n>>r;
	    deno = n-r+1;
	    numo = factorial(n,deno);
	    cout<< numo<<endl;
	}
	return 0;
}

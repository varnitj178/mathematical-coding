#include<iostream>
using namespace std;
int main()
 {
    int test;
    cin>>test;
    while(test--)
    {
        long a;
        cin>>a;
        int base=1;
        int decimal=0;
        int div1;
        while(a!=0)
        {
            div1 = a%10;
            decimal += div1*base;
            base = base*2;
            a = a/10;
        }
        cout<<decimal<<endl;
        
    }
     
	//code
	return 0;
}

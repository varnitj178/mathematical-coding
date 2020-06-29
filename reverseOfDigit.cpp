#include<iostream>
using namespace std;
int main()
 {

    int test;
    cin>>test;
    while(test--){
        long a ;
        cin>>a;
        long res=0;
        while(a!=0)
        {
            res = res *10 + (a%10);
            a = a/10;
        }
        cout<<res<<endl;
    }
	return 0;
}

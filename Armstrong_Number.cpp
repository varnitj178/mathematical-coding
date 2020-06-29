#include<iostream>
#include<cmath>
using namespace std;
int main()
 {

    int test_cases;
    cout<< "Enter the no. of test cases: ";
    cin>>test_cases;
    while(test_cases--)
    {
        int n1 ;
        cout<<"Enter the no to check whether the no. is armstrong not: "
        cin>>n1;
        int sum=0;
        int div ;
        int n = n1;
        while(n!=0)
        {
            div = n%10;
            sum += pow(div,3);
            n= n/10;
        }
        if (sum ==n1)
        {
            cout<<"Yes";
            
        }else
        {
            cout<<"No";
        }
    }
	return 0;
}

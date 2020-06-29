
#include<iostream>
using namespace std;
int main()
 {
	int test_cases;
	int a1,a2;
	int n ;
	cout<< "Enter the no. of test cases: ";
	cin >>test_cases;
	while(test_cases--)
	{   
	    int a1,a2;
	    int n ;
	    int res;
	    cout<<"Enter the first 2 AP series: ";
	    cin>>a1>>a2;
	    cout<<"Enter the nth series to be found: ";
	    cin>> n;
	    int diff= a2-a1;
	    res = a1 + (diff*(n-1));
	    cout<<res<<endl;
	}
	return 0;
}

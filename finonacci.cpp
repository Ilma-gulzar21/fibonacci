#include<iostream>
using namespace std;
int main() {
	int n;
	int t1=0,t2=1,nextTerm;
	cout<<"enter the number of term"<<endl;
	cin>>n;
	cout<<"Fibonacci Series"<<endl;
	for(int i=0;i<=n;i++) {
		cout<<t1<<" ";
	nextTerm=t1+t2;
	t1=t2;
	t2=nextTerm;
	}
	cout<<n;	
}

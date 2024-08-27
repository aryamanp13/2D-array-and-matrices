//Aryaman Pathak EntcA2 o31 exp8b reverse string

#include <iostream>

using namespace std;

int main()
{
	string a;
	int n;
	cout<<"Enter the string: "<<endl;
	cin>>a;
	n = a.length();
	for(int i=n-1;i>=0;i--){
		cout<<a[i];
	}
}
/**
AUTHOR:- RAJAT SHAHI 

I FOUGHT... I LOST... I FAILED...
GOOD, NOW GO AND FAIL AGAIN...
**/

#include<bits/stdc++.h>
using namespace std;

int gcd_recursive(int a,int b)
{
	if(b==0)
		return a;

	return gcd_recursive(b,a%b);
}



int gcd_iterative(int a,int b)
{
	while(b)
	{
		a=a%b;
		swap(a,b);
	}
	return a;
}



int gcd_oneliner(int a,int b)
{
	return (b==0)?a:gcd_oneliner(b,a%b);
}






int main()
{
	int a,b;
	cin>>a>>b;

	// in euclid algorithm a must be greater than equal to b
	if(a<b)
		swap(a,b);

	cout<<gcd_recursive(a,b)<<endl;
	cout<<gcd_iterative(a,b)<<endl;
	cout<<gcd_oneliner(a,b)<<endl;

}
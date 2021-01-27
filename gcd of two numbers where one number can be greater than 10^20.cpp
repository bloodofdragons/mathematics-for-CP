/*** AUTHOR:- RAJAT SHAHI ***/
/***
I FOUGHT...I LOST...I FAILED...
GOOD! NOW GO AND FAIL AGAIN
***/

#include<bits/stdc++.h>
using namespace std;

/* problem statement:- Given two numbers a and b. find the gcd of both numbers
					   if a<=10^150 and b<=10^9
*/


int gcd(int a,int b)
{
	return (b==0)?a:gcd(b,a%b);
}

int main()
{
	// since the first number is extremely large we will store that number in the string

	string a;
	int b;
	cin>>a>>b;

	// we know that gcd(a,b)=gcd(b,a%b);
	// so we will first find a%b because a is extremely large and our function is for the integer values

	int res=0;

	for(int i=0;i<a.size();i++)
	{
		res=(((res*10)%b)+((a[i]-'0')%b))%b;
	}

	cout<<gcd(res,b)<<endl;
}
/**
AUTHOR:- RAJAT SHAHI 

I FOUGHT... I LOST... I FAILED...
GOOD, NOW GO AND FAIL AGAIN...
**/

#include<bits/stdc++.h>
using namespace std;

/* print the number of prime numbers from 1 to n in O(n*sqrt(n)) time */


bool is_prime(int x)
{
	int factor=0;

	for(int i=1;i*i<=x;i++)
	{
		if(x%i==0 and i*i==x)
			factor++;
		else if(x%i==0)
			factor+=2;
	}

	if(factor==2)
		return true;
	else
		return false;
}


int prime_count(int n)
{
int count=0;

for(int i=1;i<=n;i++)
{
	if(is_prime(i))
		count++;
}
return count;
}




int main()
{
	int n;
	cin>>n;

	int res=prime_count(n);
	cout<<res<<endl;
}
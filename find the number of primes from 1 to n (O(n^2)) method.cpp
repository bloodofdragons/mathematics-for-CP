/**
AUTHOR:- RAJAT SHAHI 

I FOUGHT... I LOST... I FAILED...
GOOD, NOW GO AND FAIL AGAIN...
**/

#include<bits/stdc++.h>
using namespace std;

/* print the number of prime numbers from 1 to n in O(n^2) time */

bool check_prime(int x)
{
	int factors=0;

	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
			factors++;
	}

	if(factors==2)
		return true;
	else
		return false;
}


int prime_count(int n)
{
int count=0;
for(int i=1;i<=n;i++)
{
	if(check_prime(i))
		count++;
}
return count;
}


int main()
{
	int n;
	cin>>n; 

	int res=prime_count(n);
	cout<<res<<endl;  // it will print the number of primes till n
}
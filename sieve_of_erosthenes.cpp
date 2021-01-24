/**
AUTHOR:- RAJAT SHAHI 

I FOUGHT... I LOST... I FAILED...
GOOD, NOW GO AND FAIL AGAIN...
**/

#include<bits/stdc++.h>
using namespace std;

/* print the number of the prime numbers from 1 to n using sieve of erosthenes */
/* the time complexity of sieve of eorsthenes is O(n*log(logn)) */




int sieve_of_erosthenes(int n)
{
	vector<bool> sieve(n+1);

	// 0 AND 1 is not a prime number so we will mark it as false

	sieve[0]=false;
	sieve[1]=false;

	// now we will mark all the elements as TRUE

	for(int i=2;i<=n;i++)
	{
		sieve[i]=true;
	}

	for(int i=2;i*i<=n;i++)
	{
		for(int j=i*i;j<=n;j+=i)
		{
			sieve[j]=false;
		}
	}

	// now we will return the count of all the prime from 1 to n
	int result=count(sieve.begin(),sieve.end(),true);
	return result;
}


int main()
{
	int n;
	cin>>n;

	int res=sieve_of_erosthenes(n);
	cout<<res<<endl;
}
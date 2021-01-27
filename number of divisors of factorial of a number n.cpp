/*** AUTHOR:- RAJAT SHAHI ***/
/***
I FOUGHT...I LOST...I FAILED...
GOOD! NOW GO AND FAIL AGAIN
***/

#include<bits/stdc++.h>
using namespace std;

/* problem statement:- Given a number "n" we have to find the 
					   number of divisors in 'n!'
*/

// first we will make the sieve and find the primes

bool sieve[1007];
vector<int> onlyprimes;

void sieve_of_erosthenes()
{

sieve[0]=false;
sieve[1]=false;

for(int i=2;i*i<=1007;i++)
{
	if(sieve[i]==true)
{		
	for(int j=i*i;j<=1007;j+=i)
	{
		sieve[j]=false;
	}
}
}

// only primes vector will store the primes numbers only
onlyprimes.push_back(2);
for(int i=3;i<=1007;i+=2)
{
	if(sieve[i]==true)
	{
		onlyprimes.push_back(i);
	}
}
}







int fact_divisor(int n)
{
  int total_divisors=1;

  for(int i=0;onlyprimes[i]<=n;i++)
  {
  	int factors=0;
  	int prime=onlyprimes[i];

  	while((n/prime)!=0)
  	{
  		factors+=(n/prime);
  		prime=prime*prime;
  	}

  	total_divisors*=(factors+1);
  }

return total_divisors;


}


int main()
{
	memset(sieve,true,sizeof(sieve));
	int n;
	cin>>n;
	sieve_of_erosthenes();
	int divisors=fact_divisor(n);
	cout<< divisors<<endl;
}

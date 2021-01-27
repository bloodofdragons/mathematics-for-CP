/**
AUTHOR:- RAJAT SHAHI 

I FOUGHT... I LOST... I FAILED...
GOOD, NOW GO AND FAIL AGAIN...
**/

class triplet
{
public:
int gcd;
int x;
int y;
};

triplet extended_euclid(int a,int b)
{
	if(b==0)
	{
		triplet temp;
		temp.x=1;
		temp.y=0;
		temp.gcd=a;
		return temp;
	}
	triplet smallop=extended_euclid(b,a%b);

	triplet answer;
	answer.x=smallop.y;
	answer.y=(smallop.x-((a/b)*smallop.y));
	answer.gcd=smallop.gcd;
	return answer;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;

	triplet ans=extended_euclid(a,b);
	cout<<"x="<<ans.x<<endl;
	cout<<"y="<<ans.y<<endl;
	cout<<"gcd="<<ans.gcd<<endl;
}
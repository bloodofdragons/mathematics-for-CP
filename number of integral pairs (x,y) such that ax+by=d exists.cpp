/*** AUTHOR:- RAJAT SHAHI ***/
/***
I FOUGHT...I LOST...I FAILED...
GOOD! NOW GO AND FAIL AGAIN
***/


// problem:- We have to find the number of integral pairs of (x,y) such that
// the equation ax+by=d is satisfied.
#include<bits/stdc++.h>
using namespace std;


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

  triplet op;
  triplet smallop=extended_euclid(b,a%b);
  op.x=smallop.y;
  op.y=(smallop.x)-(a/b)*smallop.y;
  op.gcd=smallop.gcd;

  return op;
}

int modinverse(int a,int m)
{
  triplet res=extended_euclid(a,m);
  int ans=res.x;

  ans=(ans%m+m)%m;
  return ans;
}

int main()
{ 
  int t;
  cin>>t;
  while(t--)
  {
  int a,b,d;
  cin>>a>>b>>d;
  int GCD=__gcd(a,b);
  if(d%GCD) // the solution only exists when d is multiple of GCD
  {
    cout<<"0"<<endl;
    continue;
  }

  if(d==0)
  {
    cout<<"1"<<endl;
    continue;
  }

  a/=GCD;
  b/=GCD;
  d/=GCD;

  // lets find the first value of y

  int y1=((d%a)*modinverse(b,a))%a;

  int firstvalue=d/b;

  if(d<y1*b)
  {
    // koi answer nahi milega'
    cout<<0<<endl;
    continue;
  }

  int n=(firstvalue-y1)/a;
  int ans=n+1;
  cout<<ans<<endl;

  // we converted this equation in Ax+By=D form
}
}
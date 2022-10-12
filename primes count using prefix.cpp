#include<iostream>
using namespace std;
typedef long long ll;
const ll maxn=1e6+5;
ll primes[maxn];
ll prefix[maxn];
void gen_seive()  
{
	int i,j;
	for(i=0; i<=maxn; i++) 
	{
		primes[i]=1;       
	}
	primes[0]=primes[1]=0;  
	for(i=1; i*i<=maxn; i++) 
	{
		if(primes[i]==1)
		{
			for(j=i*i; j<=maxn; j+=i)
			{
				primes[j]=0;
			}
		}
	}
	prefix[0]=0;
	for(i=1; i<=maxn; i++)
	{
		prefix[i]=prefix[i-1]+primes[i];
	}
}

int main()
{
	ll q;
	cin>>q;
	while(q--)
	{
		ll n;
		cin>>n;
		gen_seive();
		cout<<prefix[n]<<"\n";
	}
}


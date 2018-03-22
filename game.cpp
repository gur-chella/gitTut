#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define boost ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define N 111111
#define ipair pair<int, int>
int n;
int arr[100005];
int main()
{
	boost;
	cin>>n;
	int i,j,k,an=0,var=500000;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i]<=var)
			an=max(an,arr[i]-1);
		else
		{
			an=max(an,1000000-arr[i]);
		}

	}
	cout<<an;
	return 0;
}
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	
	// your code here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
					int ans=0;
		cin>>n;
		int m[n],w[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
			
		}
		for(int i=0;i<n;i++)
		cin>>w[i];
		sort(m,m+n);
		sort(w,w+n);
		for(int i=0;i<n;i++)
		{

			ans+=m[i]*w[i];
		}
		cout<<ans<<endl;
	}

	return 0;
}

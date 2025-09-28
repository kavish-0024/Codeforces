#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
#define vl vector<ll>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a={0,0,0,0,0};
        int i=4;
        while(n!=0)
        {
            a[i]=n%10;
            i--;
            n=n/10;
        }
        vector<int>ans;
        for(i=0;i<5;i++)
        {
            if(a[i]!=0)
            ans.push_back(a[i]*pow(10,4-i));
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;

    }
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define F(i,s,e) for(ll i=s;i<e;i++)
// #define FR(i,e,s) for (ll i=e;i>=s;i--)
// #define vl vector<ll>
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// int main()
// {
//     IOS;
//     int t;
//     cin>>t;
// while(t--){
	
	
// 	int n;
// 	cin>>n;
	
// 	vector<int> vect;
// 	int j=0;
// 	while(n>0){
// 		if(n%10)
//         {
// 			int ans=pow(10,j);
// 			ans*=(n%10);
// 		    vect.push_back(ans);
// 		}
// 		n/=10;
		
// 		++j;
// 	}
	
// 	int len=vect.size();
	
// 	cout<<len<<endl;
	
// 	for(int i=0;i<len;i++){
// 	  cout<<vect[i]<<" ";
// 	}
	
// 	cout<<endl;
// }
// }
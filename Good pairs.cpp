#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() {
	// your code goes here
	int tes;cin>>tes;
	while(tes--){
	    int n;cin>>n;
	    int a[n];
	    
	    unordered_map<int,int> m;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        m[a[i]]+=1;
	    }
	    
	    int ans=0;
	    
	    for(auto i:m){
	        if(i.second==2){
	            ans++;
	        }
	        if(i.second>2){
	            int t=i.second;
	            ans+=(t*(t-1))/2;
	        }
	    }
	    
	    cout<<ans<<"\n";
	    
	}
	return 0;
}

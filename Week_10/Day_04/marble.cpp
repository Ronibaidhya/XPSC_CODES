#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t = 1;
    while(true){
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0){
            break;
        }
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<"CASE# "<<t++<<":\n";
        while(q--){
            int x;
            cin>>x;
            int l=0,r=n-1,ans = -1;
            while(l<=r){
                int mid = (l+r)/2;
                if(v[mid]==x){
                    while(mid>0 && v[mid-1]==x){
                        mid--;
                    }
                    ans = mid;
                    break;
                }
                if(v[mid]>x){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            if(ans!=-1){
                cout<<x<<" found at "<<ans+1<<'\n';
            }
            else{
                cout<<x<<" not found\n";
            }
        }
    }
    return 0;
}

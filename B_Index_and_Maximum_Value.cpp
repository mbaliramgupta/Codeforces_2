#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>vec(n);
        int v=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            v=max(v,vec[i]);
        }
        for(int i=0;i<m;i++){
        char c;
        int l,r;
        cin>>c>>l>>r;
        if(l<=v && v<=r){
            if(c=='+')v+=1;
            else v-=1;
        }

        cout<<v<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}
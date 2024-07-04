#include<iostream>
using namespace std;
int solve(){
    long long w,h;
    cin>>w>>h;
    long long maxo=0;
    for(int i=0;i<4;i++){
        long long k;
        cin>>k;
        long long x,y;
        cin>>x;
        k--;
        while(k--){
            cin>>y;
        }
        if(i<2){
            maxo=max(maxo,(y-x)*h);
        }
        else{
            maxo=max(maxo,(y-x)*w);
        }
    }
    cout<<maxo<<"\n";
    return 0;
}
int main()
{
    long long tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    long long n,c,k;
    cin>>n;
    while(n--){
        cin>>c>>k;
        long long div=k/c;
        long long ext=k%c;
        long long ans=0,mid=0;
        for(int i=0;i<c;i++){
            mid=div;
            if(ext>0){
                mid++;
                ext--;
            }
            ans+=mid*mid;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
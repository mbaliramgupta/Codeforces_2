#include<iostream>
#include<vector>
using namespace std;
long long gcd(long long a,long long b){
    long long res=0;
    while(b!=0){
      res=a%b;
      a=b;
      b=res;
    }
    return a;
}
long long lcm(long long a,long long b){
    return (long long)a*b/gcd(a,b);
}
int main()
{
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>k(n);
        for(int i=0;i<n;i++)cin>>k[i];
        long long z=1;
        for(int i=0;i<n;i++)z=lcm(z,k[i]);
        long long suma=0;
        for(int i=0;i<n;i++){
            suma+=z/k[i];
        }
      if(suma<z){
        for(int i=0;i<n;i++){
            cout<<z/k[i]<<" ";
        }
        cout<<endl;
      }
      else{
        cout<<-1<<endl;
      }
    }
    return 0;
}
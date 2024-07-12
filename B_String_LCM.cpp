#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string check(string s,long long n){
    string res="";
    while(n--){
        res+=s;
    }
    return res;
}
int main()
{
    int q;
    cin>>q;
    while(q--){
        string s1,s2;
        cin>>s1>>s2;
        int g=__gcd(s1.size(),s2.size());
        if(check(s1,s2.length()/g)==check(s2,s1.length()/g))
             cout<<check(s1,s2.length()/g)<<"\n";
             else{
                cout<<-1<<"\n";
             }
    }
    return 0;
}
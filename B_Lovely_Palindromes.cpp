#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string rev=s;
    reverse(rev.rbegin(),rev.rend());
    cout<<s+rev<<"\n";
    return 0;
}
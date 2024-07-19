#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long temp=0,x=0,y=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    priority_queue<int> pq(v.begin(),v.end());
    x=pq.top();
    pq.pop();
    y=pq.top();
    pq.pop();
     temp=(x*k+y)*(m/(k+1))+x*(m%(k+1));
    cout<<temp;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y,z;
    int sum_x=0,sum_y=0,sum_z=0;
    while(n--){
        cin>>x>>y>>z;
        sum_x+=x;
        sum_y+=y;
        sum_z+=z;
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}
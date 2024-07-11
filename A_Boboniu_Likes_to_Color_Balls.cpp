#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    long long a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    long long even=0,odd=0;
    for(int i=0;i<4;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
        if((even==3 && odd==1)|| (even==4)){
            cout<<"Yes"<<"\n";
        }
    else{
    int cnt=0,j=2;
    while(j--){
        if(a[0]<=0 || a[1]<=0 || a[2]<=0)break;
        a[0]--,a[1]--,a[2]--;
        a[3]+=3;
        even=0,odd=0;
        for(int i=0;i<4;i++){
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==3 && odd==1 || even==4){
            cnt=1;
            break;
        }
        else{
            cnt=0;
        }
    }
      if(cnt==1){
        cout<<"Yes"<<"\n";
      }
      else{
        cout<<"No"<<"\n";
      }
    }
    }
    return 0;
}
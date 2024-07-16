#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
        
        long long int previous=0;
        long long int energy=0;
        long long int money=0;

        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            energy+=previous-x;
            if(energy<0){
                money+=abs(energy);
                 energy=0;
            }
           
            previous=x;
        }
        cout<<money;
    return 0;
}
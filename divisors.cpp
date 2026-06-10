// This is A Problem to find no of divisors to a number used in problem where we have to find sum of digits used in a number to compare it with power or sum 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to find no of divisors "<<endl;
    cin>>n;
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                count++;
            }
            else{
                count+=2;
            }
        }
    }
    cout<<"No of Divisors is "<<count<<endl;
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int divisor(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return n/i;
        }
    }
    return 1;
}
int main() {
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        while(n>0){
            int ans=divisor(n);
            n=n-ans;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

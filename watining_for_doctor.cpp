#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int sum=0;
        
        int m=10-x;
        if(m>0){
        for(int i=1;i<n;i++){
            sum+=(m);
        }
        cout<<sum<<endl;
    }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}

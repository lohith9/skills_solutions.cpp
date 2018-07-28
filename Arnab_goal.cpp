#include <iostream>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int count1=0,count2=0;
    while(z>1){
        if(x%z==0){
            count1++;
            x--;
        }
        if(y%z==0){
            count2++;
            y--;
        }
        z--;
    }
    cout<<count1<<" "<<count2<<endl;
}
}

#include<bits/stdc++.h>
using namespace std;
void sol(){
    int na,ka,da,wa;
    cin>>na>>ka>>da>>wa;
    int x[na];
    for(int i=0;i<na;i++)
{
    cin>>x[i];
}

int ans=0, done=1, l=0;
for(int i=1;i<na;i++){
    if(done<ka && x[i]-(x[l]+wa)<=da){
        done++;
    }
    else{
        l=i; done=1; ans++;
    }
}
if(done!=0){
    ans++;
    cout<<ans<<endl;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void add(){
    cout<<"enter the rows and column="<<endl;
    int r,c;
    cin>>r>>c;
    int a[r][c];
    cout<<"enter the matrix1="<<endl;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }}
    int b[r][c];
    cout<<"enter the matrix2="<<endl;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>b[i][j];
    }}
    int ans[r][c];
    cout<<"The addition matrix="<<endl;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        ans[i][j]=a[i][j]+b[i][j];
        cout<<ans[i][j]<<" ";
    }cout<<endl;
    }

}
void mul(){
     cout<<"enter the rows and column for matrix 1="<<endl;
    int r1,c1;
    cin>>r1>>c1;
     cout<<"enter the rows and column for matrix 2="<<endl;
    int r2,c2;
    cin>>r2>>c2;
    if(c1!=r2) {cout<<"NOT POSSIBLE!!"<<endl; return;}
     int a[r1][c1];
     cout<<"enter the matrix1="<<endl;
    for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>a[i][j];
    }}
    int b[r2][c2];
    cout<<"enter the matrix2="<<endl;
    for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        cin>>b[i][j];
    }}
    int ans[r1][c2];
    cout<<"The multiplication matrix="<<endl;
    for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        ans[i][j]=0;
        for(int k=0;k<r2;k++){
        ans[i][j]+=a[i][k]*b[k][j];
         } cout<<ans[i][j]<<" ";
    }cout<<endl;
    }
}
void trans(){
    cout<<"enter the rows and column="<<endl;
    int r,c;
    cin>>r>>c;
    int a[r][c];
    cout<<"enter the matrix="<<endl;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }}
    int ans[r][c];
    cout<<"The transpose matrix="<<endl;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        ans[i][j]=a[j][i];
        cout<<ans[i][j]<<" ";
    }cout<<endl;
    }
}
void saddpt(){
    cout<<"enter the rows and column="<<endl;
    int r,c;
    cin>>r>>c;
    int a[r][c];
    cout<<"enter the matrix="<<endl;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }}
    int mini,maxi,rm,cm;
    for(int i=0;i<r;i++){
        mini=a[r][0];
        for(int j=0;j<c;j++){
            if(a[i][j]<mini){mini=a[i][j]; cm=j;}
        }
        maxi=a[0][cm];
        for(int j=0;j<r;j++){
            if(maxi<a[j][cm]){ maxi=a[j][cm]; rm=j;}
        }
    }
    if(maxi==mini){ cout<<"saddle point="<<maxi<<"("<<rm<<","<<cm<<")"<<endl;}
}
int main(){
    int o=0;
    while(1){
        cout<<"enter the choice:1)addition 2)multiplication 3)transpose 4)saddlepoint="<<endl;
        cin>>o;
        if(o==0 || o>4) break;
        switch(o){
            case 1:add();
            break;
            case 2:mul();
            break;
            case 3:trans();
            break;
            case 4:saddpt();
            break;
        }
    }
    return 0;
}
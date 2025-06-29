#include<bits/stdc++.h>
using namespace std;

int hi(){
    vector<int>v={5,3,0,7,4};
    int res=0,n=v.size();
    sort(v.begin(),v.end());
    
    for(int i=2;i<n;i++){
        int j=0,k=i-1;
        while(j<k){
            if(v[j]+v[k]>v[i]){
                res+=k-j;
                k--;
            }else{
                j++;
            }
        }
    }
    return res;
}

string shi(){
    string res;
    vector<int>v={5,3,0,7,4};
    int n=v.size(),i=0,c=0;
    sort(v.begin(),v.end(),greater<int>());
    while(i<n){
        if(v[i]==0){break;}
        int a=v[i],b=(i<n-1)?v[i+1]:0;
        int r=a+b+c;
        c=r/10;
        res+='0'+(r%10);
        cout<<res<<endl;
        i+=2;
    }
    if(c){res+='0'+c;}
    reverse(res.begin(),res.end());
    return res==""?"0":res;
}

void lh(){
    int k=2,n=5;
    for(int i=1;i<20;i+=2){
        cout<<bitset<4>(i)<<endl;
    }
}

int main(){
    // cout<<hi()<<endl;
    // cout<<shi()<<endl;
    lh();
    return 0;
}
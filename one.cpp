#include<bits/stdc++.h>
using namespace std;

int hi(){
    vector<int>v={4,3,6,7};
    int res=0,n=v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=lower_bound(v.begin(),v.end(),v[i]+v[j])-v.begin();
            res+=k-j+1;
        }
    }
    return res;
}

int main(){
    cout<<hi()<<endl;
    return 0;
}
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
    // int k=2,n=5;
    // for(int i=1;i<20;i+=2){
    //     cout<<bitset<4>(i)<<endl;
    // }
    int n=13;
    vector<int>v{1000,500,100,50,20,10,5,2,1};
    vector<int>res;
    int i=0;
    while(n>0 and i<9){
        if(v[i]<=n){
            int r=n/v[i];
            n-=r*v[i];
            while(r--){res.push_back(v[i]);}
        }
        i++;
    }
    for(auto x:res){cout<<x<<" ";}
    // return res;
}

void dq(){
    vector<int>v{4,2,1,4,4};
    vector<int>res;
    deque<int>q;
    int k=3;
    for(int i=0;i<v.size();i++){
        if(!q.empty() and q.front()<=i-k){q.pop_front();}
        while(!q.empty() and v[q.back()]<=v[i]){q.pop_back();}
        q.push_back(i);
        if(i>=k-1){res.push_back(v[q.front()]);}
    }
    for(auto x:res){cout<<x<<" ";}
}

int pq(int n){
    int res=0,l=sqrt(n);
    int p[l+1];
    for(int i=1;i<=l;i++){p[i]=i;}
    for(int i=2;i*i<=n;i++){
        if(p[i]==i){
            for(int j=i*i;j<=l;j+=i){
                if(p[j]=j){p[j]=i;}
            }
        }
    }
    for(int i=2;i<=l;i++){
        int x=p[i],y=p[i/p[i]];
        if(x*y==i and y!=1 and x!=y){res++;}
        else if(p[i]==i and pow(i,8)<=n){res++;}
    }
    return res;
}

int main(){
    // cout<<hi()<<endl;
    // cout<<shi()<<endl;
    // lh();
    // dq();
    cout<<pq(100)<<endl;
    return 0;
}
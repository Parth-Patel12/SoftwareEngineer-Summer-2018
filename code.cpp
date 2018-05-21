#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#define MAX_INJ 1000000
int main(){
    int t,health,inj,i,j,defeated = 0,x,pos;
    vector<int>v,d;
    // take input in memory i.r store it into array/vector.
    fstream ip("input.txt");
       // cout<<"rr";
        if(ip.is_open()){
        while(ip>>x)
            v.push_back(x);
        }
    ip.close();
    cout<<v.size()<<"\n";
    t = v.size();
    d.resize(t);
    d[0]=0;
    for(int i=1;i<=t;i++){
        health = 100;
        inj = 1;
        pos = j=i;
        int tmp_defeated = 0;
        while(health>=v[j] && j <= t){
            health-=v[j];
            inj*=v[j];
            j++;
            tmp_defeated++;
        }
        defeated = max(defeated, tmp_defeated);
        d[i] = tmp_defeated;
    }
    cout<<defeated<<"\n";

    for(i=1;i<=t;i++) if(d[i]==defeated) cout<<i<<" ";

}

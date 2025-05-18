//Swap Two Pairs
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>a = {1,2};
    pair<int,int>b = {2,3};
    
    swap(a,b);
    cout<<a.first<<" "<<a.second<<endl;
    cout<<b.first<<" "<<b.second<<endl;
    
    return 0;
    
}


//Compare Two Pairs
#include<bits/stdc++.h>
using namespace std;

int main()
{
   pair<int,int>p1 = {1,3};
   pair<int,int>p2 = {1,9};
   
   if(p1>p2){
       cout<<"Greater Pair: "<<p1.first<<" "<<p1.second<<endl;
       cout<<"Smaller Pair: "<<p2.first<<" "<<p2.second<<endl;
   }
   else{
       cout<<"Greater Pair: "<<p2.first<<" "<<p2.second<<endl;
       cout<<"Greater Pair: "<<p1.first<<" "<<p1.second<<endl;
   }
   
   return 0;
}


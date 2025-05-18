//Store and Print Student Marks
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<pair<string, int>> students(n);
   for(int i = 0; i < n; ++i) 
    {
    cin >> students[i].first >> students[i].second;
    }
    for(const auto &p : students) 
    {
    cout << p.first << ": " << p.second << endl;
    }
}


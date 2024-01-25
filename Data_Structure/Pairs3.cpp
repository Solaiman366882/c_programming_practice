#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b)
{
    if(a.first < b.first) return true;
    else if(a.first > b.first) return false;
    else return a.second > b.second;
}


int main()
{
    vector<pair<string,int>> v;
    int n;
    cin >> n;
    for(int i=0;i < n; i++)
    {
        string name;
        int val;
        cin >> name >> val;
        pair<string,int> p;
        p.first = name;
        p.second = val;
        v.push_back(p);
    }
    sort(v.begin(),v.end(),cmp);
    for(pair<string,int> val: v)
    {
        cout << val.first << " " << val.second << endl;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    string word;
    getline(cin,sentence);
    stringstream ss(sentence);
    map<string,int>mp;
    while(ss >> word)
    {
        mp[word]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

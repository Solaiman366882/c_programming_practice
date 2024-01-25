#include <bits/stdc++.h>

using namespace std;



int main()
{
    string sentence;
    string word;
    getline(cin,sentence);
    stringstream ss(sentence);
    map<string,int> mp;
    pair<string,int>maxCount;
    while(ss >> word)
    {
        mp[word]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second > maxCount.second)
        {
            maxCount.first = it->first;
            maxCount.second = it->second;
        }
    }
    cout << maxCount.first << " " << maxCount.second << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp.insert({"Sakib Al Hasan",75});
    mp.insert({"Tamim Iqbal",19});
    mp.insert({"Shamim",98});
    mp["Rakib"] = 29;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    if(mp.count("Rakib")) cout << "Ase" << endl;
    else cout << "Nai" << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp.insert({"Sakib Al Hasan",75});
    mp.insert({"Tamim Iqbal",19});
    mp["Musfiq"] = 39;
    mp["Solaiman"] = 0;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << mp["Solaiman"] << endl;
    if(mp.count("salman")) cout << "Ase" << endl;
    else cout << "Nai" << endl;\
    return 0;
}

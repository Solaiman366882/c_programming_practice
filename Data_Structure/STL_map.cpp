#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp.insert({"Sakib al hasan",75});
    mp.insert({"Tamim Iqbal",89});
    mp.insert({"Shamim",9});

    for(auto it = mp.begin();it != mp.end(); it++)

    {
        cout << it->first << " " << it->second << endl;
    }
    mp["rakib"] = 25;
    if(mp.count("rakib")) cout << "Ase" << endl;
    else cout << "Nai" << endl;

    return 0;
}

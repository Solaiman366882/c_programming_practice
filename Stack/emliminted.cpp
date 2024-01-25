#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;
    cin >> t;
    for(int i=0; i < t; i++)
    {
        string s ;
        stack <char> st;
        cin >> s;
        for(char c : s)
        {
            if(c == '0') st.push(c);
            else
            {
                if(!st.empty())
                {
                    if(st.top() == '0' && c == '1') st.pop();
                }
            }
        }

        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}


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
        stack <char> st2;
        cin >> s;
        for(char c : s)
        {
            if(c == '0') st.push(c);
            else
            {
                st2.push(c);
                if(!st.empty() && !st2.empty())
                {
                    st2.pop();
                    st.pop();
                }
            }
        }

        if(st.empty() && st2.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}




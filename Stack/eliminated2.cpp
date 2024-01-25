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
            else if(c == '1' && !st2.empty())
            {
                if(!st.empty())
                {
                    if(st.top() == '0' && c == '1')
                    {
                        st.pop();
                        st2.pop();
                    }
                }
            }
            else
            {
                if(!st.empty())
                {
                    if(st.top() == '0' && c == '1') st.pop();
                }
                else
                {
                    st2.push(c);
                }
            }
        }

        if(st.empty() && st2.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}



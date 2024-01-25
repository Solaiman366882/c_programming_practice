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
            else if(c == '1') st2.push(c);

        }
        while(!st.empty() && !st2.empty())
        {
            if(st.top() == '0' && st2.top() == '1')
            {
                st.pop();
                st2.pop();
            }
        }
        if(st.empty() && st2.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

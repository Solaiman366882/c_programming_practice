#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int val;
    Person(string name,int val)
    {
        this->name = name;
        this->val = val;
    }
};

class cmp
{
public:
    bool operator()(Person a, Person b)
    {
        if(a.name > b.name) return true;
        else if(a.name < b.name) return false;
        else
        {
            if(a.val < b.val) return true;
            else return false;
        }
    }
};

int main()
{
    priority_queue<Person,vector<Person>,cmp> pq;
    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        string name;
        int val;
        cin >> name >> val;
        Person obj(name,val);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << endl;
        pq.pop();
    }


    return 0;
}


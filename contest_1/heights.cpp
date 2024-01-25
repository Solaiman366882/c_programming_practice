#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i =0; i < n; i++)
    {
        int beforeHeight = -1;
        int afterHeight = -1;
        if(i == 0)
        {
            for(int j =i+1; j < n-1 ; j++)
            {
                if(afterHeight < arr[j])
                {
                    afterHeight = arr[j];
                }
            }
        }
        else if(i == n-1)
        {
            for(int j =i; j >= 0 ; j--)
            {
                if(beforeHeight < arr[j])
                {
                    beforeHeight = arr[j];
                }
            }
        }
        else
        {
            for(int j =i+1; j < n; j++)
            {
                if(afterHeight < arr[j])
                {
                    afterHeight = arr[j];
                }
            }
            for(int j = i-1; j >= 0 ; j--)
            {
                if(beforeHeight < arr[j])
                {
                    beforeHeight = arr[j];
                }
            }
        }

        cout << beforeHeight << " " << afterHeight << endl;

    }


    return 0;
}


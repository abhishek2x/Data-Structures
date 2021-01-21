/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ios ::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;

    // stack<char> st;
    int top = -1;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '<')
        {
            top += 1;;
        }
        else if (str[i] == '>')
        {
            if (top == -1)
            {
                top -= 1;
                break;
            }
            else
            {
                top -= 1;
            }
        }
    }

    if (top == -1)
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not balanced";
    }

    return 0;
}

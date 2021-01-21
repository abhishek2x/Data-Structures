#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll next_greater[n], next_smaller[n];

    stack<ll> s;
    s.push(0);

    for (ll i = 1; i < n; i++)
    {
        while (!s.empty() && a[i] > a[s.top()])
        {
            next_greater[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty())
    {
        next_greater[s.top()] = -1;
        s.pop();
    }

    s.push(0);
    for (ll i = 1; i < n; i++)
    {
        while (!s.empty() && a[s.top()] > a[i])
        {
            next_smaller[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty())
    {
        next_smaller[s.top()] = -1;
        s.pop();
    }

    for (int i = 0; i < n; i++)
    {
        if (next_greater[i] != -1 && next_smaller[next_greater[i]] != -1)
        {
            cout << a[next_smaller[next_greater[i]]] << " ";
        }
        else
            cout << "-1 ";
    }
    return 0;
}
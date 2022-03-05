#include<bits/stdc++.h>
using namespace std;
//#define for(int i=0;i<n;i++) f(n)


vector<int> prefix_function(string s) {

    int n = (int)s.length();
    vector<int> pi(n+n+1);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];

        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

int main()
{
    string s;cin>>s;
    vector<int> v;
    v=prefix_function(s);
    for (int i =0 ; i < s.length(); i++)
    {
        cout<<v[i]<<" ";
    }

}



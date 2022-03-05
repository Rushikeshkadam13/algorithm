#include<bits/stdc++.h>
using namespace std;
vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {

        cout<<endl;
        cout<<i<<"th case"<<endl;

        cout<<i<<" "<<l<<" "<<" "<<r<<endl;

        if (i <= r)
        {
            z[i] = min (r - i + 1, z[i - l]);
            cout<<min (r - i + 1, z[i - l])<<endl;
        }


        cout<<s[z[i]]<<" "<<s[i+z[i]]<<endl;

        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
             z[i]=z[i]+1;

        cout<<"z["<<i<<"]="<<z[i]<<endl;
        if (i + z[i] - 1 > r)
           {

           l = i, r = i + z[i] - 1;
           cout<<i<<" "<<l<<" "<<" "<<r<<endl;
           cout<<"l="<<l<<endl;
           }
    }
    return z;
}

int main()
{
   string s="bbb#aaabbb";
   vector<int>z=z_function(s);
   for(int i=0;i<z.size();i++)
   {
       cout<<z[i]<<" ";
   }
   cout<<endl;
}


#include <bits/stdc++.h>
#include <string.h>
using namespace std;
 

void norepeat(string s1, string s2)
{
    
    string s3 = s1 + " " + s2 + " ";
    string S = " ";
    int i = 0;
 
    
    for (auto x : s3) {
        if (x == ' ') {

            if (s1.find(S) == string::npos || s2.find(S) == string::npos)
                cout << S;
 
           
            S = " ";
        }
        else {
            S = S + x;
        }
    }
}
 
int main()
{
    string s1 = "I have go a pen";
    string s2 = "I want to go park";
    norepeat(s1, s2);
    return 0;
}
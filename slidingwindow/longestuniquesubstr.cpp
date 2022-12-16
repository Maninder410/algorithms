
using namespace std;
#include<bits/stdc++.h>
int longestUniqueSubsttr(string s){
      int i = 0,j = 0;
      int n = s.length();
        int maxi = -100;
        unordered_map<char,int> m;
        while(j<n){
            m[s[j]]++;
            if(m.size() == j-i+1){
                maxi = max(maxi,j-i+1);
                j++;
            }
            else if(m.size()<j-i+1){
            
                while(m.size()<j-i+1){
                    m[s[i]]--;
                    if(m[s[i]] == 0){
                        m.erase(s[i]);
                    }
                    i++;
                }
                maxi= max(maxi,j-i+1);
                j++;
            }
        }
        return maxi;
      
    }
int main(){
    
    return 0;
}
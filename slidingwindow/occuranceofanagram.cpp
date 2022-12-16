#include<bits/stdc++.h>
#include<iostream>
using namespace std;
	int search(string s2, string s1) {
	int n= s1.size();
	int k = s2.size();
	int i = 0;
	int j= 0;
	int ans = 0;
map<char,int> m;
for(auto i:s2){
    m[i]++;
}
map<char,int> m2;
while(j<n){
 m2[s1[j]]++;
  if(j-i+1<k){
      j++;
  } 
  else if(j-i+1==k){
      if(m2== m){
          ans++;
      }
      m2[s1[i]]--;
      if(m2[s1[i]] == 0){
          m2.erase(s1[i]);
      }
      i++;
      j++;
  }
}
return ans;
}
int main(){
    
    return 0;
}
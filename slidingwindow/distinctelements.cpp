#include<bits/stdc++.h>
using namespace std;
   vector <int> countDistinct (int A[], int n, int k)

    {
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++)
        {
            mp[A[i]]++;
        }
        vector<int> ans;
        ans.push_back(mp.size());
        
        for(int i=k;i<n;i++)
        {  
            if(mp[A[i-k]]>1)
            mp[A[i-k]]--;
            else mp.erase(A[i-k]);
            mp[A[i]]++;

            ans.push_back(mp.size());
        }
        return ans;
    }
int main(){
    
    return 0;
}
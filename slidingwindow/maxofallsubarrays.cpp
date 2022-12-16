#include<bits/stdc++.h>
using namespace std;
vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
          map<int,int> mp;
        for(int i=0;i<k;i++)
        {
            mp[arr[i]]++;
        }
        vector<int> ans;
        ans.push_back(mp.rbegin()->first);
        
        for(int i=k;i<n;i++)
        {  
            if(mp[arr[i-k]]>1)
            mp[arr[i-k]]--;
            else mp.erase(arr[i-k]);
            mp[arr[i]]++;

            ans.push_back(mp.rbegin()->first);
        }
        return ans;
    }


int main(){
    
    return 0;
}
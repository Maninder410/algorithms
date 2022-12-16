#include<bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int N, long long int K) {
    vector<long long> ans;
        int i = 0,j = 0;
        deque<long long int> dq;

        while(j<N){
           if(arr[j]<0){
               dq.push_back(arr[j]);
           }
            if(j-i+1<K ){
                j++;
               
            }
           else{
             
                if(dq.size() == 0){
                     ans.push_back(0);
              
                }
                else{
                ans.push_back(dq.front());
                }
                    if(arr[i]<0){
                        dq.pop_front();
                      
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
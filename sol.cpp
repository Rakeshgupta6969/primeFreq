class Solution {
    private:
   
       bool check(int n){
   
           if(n<2) return false;
   
   
           for(int i = 2; i*i<=n; i++){
               if(n%i == 0) return false;
           }
   
        return  true;
           
       }
   
   
       
   public:
       bool checkPrimeFrequency(vector<int>& nums) {
             unordered_map<int,int>mp;
           for(auto & i: nums){
               mp[i]++;
           }
   
   
   
           for(auto &j: mp){
               if(check(j.second)){
                   return true;
               }
           }
   
   
           return false;
       }
   };
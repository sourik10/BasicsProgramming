//remove duplicate elements in an array(in place)

//bruteforce appraoch
//time O(n*log n) +O(n)
//space O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int k=st.size();
        int j=0;
        for(auto it:st){
            nums[j++]=it;
        }
        return k;
        
    }
};


//efficient solution
//time O(n),space O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};

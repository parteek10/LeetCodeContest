//https://leetcode.com/contest/biweekly-contest-89/problems/minimize-maximum-of-array/

class Solution {
    public int minimizeArrayValue(int[] nums) {
     
        int max = nums[0];
        
        for(int ele : nums) max = Math.max(max,ele);
        
        int l = 0 , h = max;
        int ans = h;
        
        while(l <= h) {
            
            int mid = l + (h - l) / 2;
            
            if(isP(nums,mid)) {
                
                ans = mid;
                h = mid - 1;
            }
            else{
                
                l = mid+1;
            }
        }
        
        return ans;
    }
    
    boolean isP(int[] a,int val) {
        
        long s = 0;
        
        for(int ele : a) {
            
            if(ele < val) {
             
                s += val - ele;
            }
            else if(ele > val) {
                
                s -= ele - val;
            }
            
            if(s < 0) return false;
        }
        
        return true;
    }
} 
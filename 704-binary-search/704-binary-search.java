class Solution {
    public int search(int[] nums, int target) {
        int len = nums.length;
        int lo = 0;
        int hi = len-1;
        
        while(lo<=hi){
            int mid = lo + (hi-lo) /2 ;
            if(nums[mid]==target){
                return mid;
            }
            if(target>nums[mid]){
                lo = mid + 1;
                
            }
            else{
                hi = mid -1 ;
            }
        }
        return -1;
    }
}
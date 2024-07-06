public class Solution239 {
    public int[] MaxSlidingWindow(int[] nums, int k) {
       
        int left = 0, right = 0;
        int resLength = nums.Length - k + 1;
        int[] res = new int[resLength];
        // PriorityQueue<int, it> pq = new PriorityQueue<int, int>(Comparer<int>.Create((a, b) => b - a));
        List<int> q = new List<int>();
       
    
        while(right<nums.Length){
           while(q.Count> 0 && nums[right] > q[q.Count - 1]){
                q.RemoveAt(q.Count - 1);
           }
            q.Add(nums[right]);
            
            if(right - left > k - 1){
                if(q.Count > 0 && q[0] == nums[left])  q.RemoveAt(0);;
                ++left;
            }
            
            if(q.Count > 0 && right >= k - 1) res[right - k + 1] = q[0];
            
            ++right;
        }

        return res;
    }
}
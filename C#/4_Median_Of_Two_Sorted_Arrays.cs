public class Solution4 {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {
        int totalLength = nums1.Length + nums2.Length;
        int halfLength = (totalLength ) /2;
        

        if (nums1.Length > nums2.Length) {
            int[] temp = nums1;
            nums1 = nums2;
            nums2 = temp;
        }

        int leftIdx = 0, rightIdx = nums1.Length - 1 ;
        while(true){
            int midIdx1 = (leftIdx>rightIdx) ? -1 :(rightIdx  + leftIdx )/2 ;
            // int midIdx2 = (halfLength - midIdx1 - 2 >= nums2.Length) ? halfLength - midIdx1 - 2 : nums2.Length -1;
            int midIdx2 = halfLength - midIdx1 - 2;

            int first1 = (midIdx1>=0) ? nums1[midIdx1 ] : int.MinValue;
            int second1 = (midIdx1 + 1 < nums1.Length) ? nums1[midIdx1 + 1] : int.MaxValue;
            int first2 = (midIdx2>=0) ? nums2[midIdx2] : int.MinValue;
            int second2 = (midIdx2>=0 && midIdx2 + 1 < nums2.Length) ? nums2[midIdx2 + 1] : int.MaxValue;
            if(first1 <= second2 && first2 <= second1){
                if(totalLength%2 == 1){
                    return Math.Max(first1, first2);
                }
                
                return (Math.Max(first1, first2) + Math.Min(second1, second2)) / 2.0;
                
            }
            else if(first1 > second2){
                rightIdx = midIdx1 - 1;
            }
            else {
                leftIdx = midIdx1 + 1;
            }
            
        }
    }
}
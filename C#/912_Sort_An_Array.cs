public class Solution912 {
    public int[] SortArray(int[] nums) {
        // var watch = System.Diagnostics.Stopwatch.StartNew();

        QuickSort(nums, 0, nums.Length - 1);
        // watch.Stop();
        // var elapsedMs = watch.ElapsedMilliseconds;
        // Console.WriteLine(elapsedMs);
        return nums;
    }

    public void QuickSort(int[] nums, int startIdx, int endIdx){
        if(startIdx < endIdx){
            int pivot = Partition(nums, startIdx, endIdx);
            QuickSort(nums, startIdx, pivot - 1);
            QuickSort(nums, pivot + 1, endIdx);
        }
    }

    public int Partition(int[] nums, int startIdx, int endIdx){
        int pivot = startIdx + (endIdx - startIdx) / 2;
        Swap(ref nums[pivot], ref nums[endIdx]);
        pivot = endIdx;
        --endIdx;
        while(startIdx <= endIdx){
            while(nums[startIdx] < nums[pivot]) ++startIdx;
            while(nums[endIdx] > nums[pivot]) --endIdx;
            if(startIdx <= endIdx) {
                Swap(ref nums[startIdx], ref nums[endIdx]);
                ++startIdx;
                --endIdx;
            }
        }
        Swap(ref nums[startIdx], ref nums[pivot]);
        pivot = startIdx;
        return pivot;
    }

    public void Swap(ref int a, ref int b){
        int temp = a;
        a = b;
        b = temp;
    }
}

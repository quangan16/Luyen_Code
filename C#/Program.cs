
string s = "cabwefgewcwaefgcf";
string t = "cae";

Solution239 solution = new Solution239();

int[] nums = {7,2,4};
int[] res = solution.MaxSlidingWindow(nums, 2);
foreach(var item in res){
    Console.Write(item + " ");
}

public class Solution76 {
    public string MinWindow(string s, string t) {
        if(t.Length > s.Length) return "";
        Dictionary<char, int> occur = new Dictionary<char, int>();
        Dictionary<char, int> traverse = new Dictionary<char, int>();
        
        foreach(var item in t){
            if(!occur.ContainsKey(item)) occur.Add(item, 1);
            else ++occur[item];
            if(!traverse.ContainsKey(item)) traverse.Add(item, 0);
        }
        int left = 0, right = -1;
        (int left, int right, int length) res = (left, right, s.Length);
        int tracker = 0, need = occur.Count;
        
        while(res.right < s.Length ){
            if(res.right == s.Length - 1 && tracker < need){
                if(res.left <= 0) return "";
                return s.Substring(res.left - 1, res.length);
            } 
            if(tracker < need){
                 ++res.right;
                if(traverse.ContainsKey(s[res.right])){
                    ++traverse[s[res.right]];
                    if(traverse[s[res.right]] == occur[s[res.right]]) ++tracker;
                } 
            }
            else if(tracker >= need){
                res.length = Math.Min(res.length, res.right - res.left + 1);
                if(traverse.ContainsKey(s[res.left])){
                    if(traverse[s[res.left]] == occur[s[res.left]]) --tracker;
                    --traverse[s[res.left]];
                } 
                ++res.left;

            }
            
        }
        return s.Substring(res.left - 1, res.length);
    }
}
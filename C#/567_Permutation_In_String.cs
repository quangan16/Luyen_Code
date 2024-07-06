using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;


// public class Solution567 {
//     public bool CheckInclusion(string s1, string s2) {
//         // Dictionary<char, int> defaultOccur = new Dictionary<char, int>();

//         int iter = 0;
//         int first = 0;
//         int second = 0;

//        Dictionary<char, int> occur = CalculatePermuOccurence(s1);
        
      
//         while(second < s2.Length){
            
//             if(occur.ContainsKey(s2[second])){
//                 if(occur[s2[second]] > 0){
//                     --occur[s2[second]];
//                     ++second;
                   
//                 }
//                 if(CheckEmptyOccur(occur)) return true;
               
//             }
//             else{
//                 first = second + 1;
//                 second = first;
//                 occur = CalculatePermuOccurence(s1);
//             }
            
//         }
       
//         return false;
//     }

//     public  Dictionary<char, int> CalculatePermuOccurence(string s1  ){
//         Dictionary<char, int> occur = new Dictionary<char, int>();
//          foreach(var item in s1){
//              if(!occur.ContainsKey(item)){
//                 occur.Add(item, 1);
//             }else{
//                 ++occur[item];
//             }
//         }
//         return occur;
//     }

//     public bool CheckEmptyOccur( Dictionary<char, int> occur){
//         foreach(var pair in occur){
//             if(pair.Value > 0) return false;
//         }
//         return true;
//     }

// }


public class Solution567{
    Dictionary<char, int> dict_s1 = new Dictionary<char, int>();
    Dictionary<char, int> dict_s2 = new Dictionary<char, int>();
    public bool CheckInclusion(string s1, string s2){
        int windowLength = s1.Length;
        int first = 0, second = windowLength -1;
        dict_s1 = CalculateOccurence(s1, 0, windowLength);
        dict_s2 = CalculateOccurence(s2, first, second + 1);
        while(second < s2.Length-1){
            if(dict_s1.Equals(dict_s2) ) return true;
            else{
                --dict_s2[s2[first]];
                if(dict_s2[s2[first]]<= 0) dict_s2.Remove(s2[first]);
                ++first;
                ++second;
                if(!dict_s2.ContainsKey(s2[second])){
                    dict_s2.Add(s2[second], 1);
                }else{
                     ++dict_s2[s2[second]];
                }
               
            }
        }
        return false;
        
    }

    public Dictionary<char, int> CalculateOccurence(string input, int startIdx, int length){
        Dictionary<char, int> res = new Dictionary<char, int>();
        for(int i = startIdx; i < length; i++){
            if(!res.ContainsKey(input[i])){
                res.Add(input[i], 1);
            }else{
                ++res[input[i]];
            }
        }
        return res;
    }
}
using System;
using System.Linq;

public class Solution {
    public int[] solution(int[] num_list) {
        int[] answer = new int[num_list.Length-5];
        
        Array.Sort(num_list);
        for(int i=0;i<num_list.Length-5;i++){
            answer[i] = num_list[i+5];
        }
        
        return answer;
    }
}
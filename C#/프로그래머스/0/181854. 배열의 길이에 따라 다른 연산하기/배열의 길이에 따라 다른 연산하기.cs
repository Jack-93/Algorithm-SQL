using System;

public class Solution {
    public int[] solution(int[] arr, int n) {
        int[] answer = new int[arr.Length];
        
        for(int i=0;i<arr.Length;i+=2){
            if(arr.Length % 2 ==1 ){
                // 0, 2, 4,
                // i=0 -> 0, i=1 -> 2, i=2 -> 4
                arr[i] += n;
            }
            else{
                // 1, 3, 5
                // i=0 -> 1, i=1 -> 3
                arr[i+1] += n;
            }
        }
        answer = arr;
        return answer;
    }
}
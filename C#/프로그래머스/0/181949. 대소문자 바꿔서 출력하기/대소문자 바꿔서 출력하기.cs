using System;

public class Solution {
    public static void Main() {
        string s = Console.ReadLine();
        string result = "";

        for (int i = 0; i < s.Length; i++) {
            if (char.IsLower(s[i])) {
                result += char.ToUpper(s[i]);
            } else if (char.IsUpper(s[i])) {
                result += char.ToLower(s[i]);
            }
        }

        Console.WriteLine(result);
    }
}

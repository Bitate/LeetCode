#include <string>

using namespace std;

class Solution {
public:
    /**
     * Difficult:
     *  How to satisfy the condition: "result is the smallest in lexicographical order among all possible results." ?
     * 
     *      Symbols' meanings:
     *      1. result string -> result
     *      1. current char -> current
     *      2. last char of result string -> result_last
     *  
     *  Cases for process current char (denoted by s[i] in source code):
     *      1. If current is less than the result_last and it's unique, then add it into result.
     *      2. If current is less than the result_last and it's duplicate, then ignore it.
     *      3. If current is greater than the result_last and it is unique, then it's added into result string.
     *      4. If current is greater than the result_last and it is duplicate, then we discard the result_last and add current into result string.
     */
    string removeDuplicateLetters(string s) {
        string result;
        for(int i = 0;i < s.size(); ++i)
        {
            /**
             *  If the char (s[i]) is already in the result string, we move to next iteration.
             *  Otherwise, we need to pop or push it from/into the result string.
             */
            if(result.find(s[i]) != string::npos) continue;

            /**
             * While result string's last char is lexicographically greater than current char
             * and it still has duplicates of current char, we discard/pop_back the last char in result string.
             * 
             * s.find(result.back(), i) means that: 
             * to find the same character result.back() within s from position i to last character of s.
             */
            while(!result.empty() && result.back() > s[i] && s.find(result.back(), i) != string::npos)
                result.pop_back();
            
            /**
             * Finally, push back current to result string.
             */
            result.push_back(s[i]);
        }
        return result;
    }
};
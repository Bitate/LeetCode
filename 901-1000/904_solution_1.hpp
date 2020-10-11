#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int l = -1, sl = -1;
        int cl = 0;
        
        int ans = 0, curr = 0;
        for(int e: tree) 
        {
            if(l == e || sl == e) 
            {
                ++curr;
            } 
            else // l != e && sl != e
            {
                curr = cl + 1;
            }
            
            if(l == e) 
                ++cl;
            else // l != e
                cl = 1;
            
            if(e != l) 
            {
                sl = l;
                l = e;
            }
            
            ans = max(ans, curr);
        }
        return ans;
    }
};
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        /**
         * Sort all salaries in ascending order.
         */
        sort(salary.begin(), salary.end());
        
        double sum = 0;
        
        for(int i = 1; i < salary.size()-1; ++i)
        {
            sum += salary[i];
        }
        
        return sum/(salary.size()-2);
    }
};
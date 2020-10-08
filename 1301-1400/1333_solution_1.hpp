#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Tags: Sorting, Array
     */
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<vector<int>> tmp_restaurants;
        for(auto& restaurant : restaurants)
        {
            if(veganFriendly && restaurant[2]==0 || restaurant[3]>maxPrice || restaurant[4]>maxDistance) continue;
            tmp_restaurants.push_back(restaurant);
        }

        /**
         * This is the key part. 
         * If lhs[1]==rhs[1] (Ratings are same)
         * We compare lhs[0]>rhs[0] (Compare the Id instead).
         * 
         * Here use lambda as a binary predicate to sort the vector.
         * The lambda returns:
         *  True: lhs goes before the rhs.
         *  False: rhs goes before the lhs.
         */
        sort(
            tmp_restaurants.begin(), 
            tmp_restaurants.end(), 
            [](auto& lhs, auto& rhs){ return lhs[1]==rhs[1] ? lhs[0]>rhs[0] : lhs[1]>rhs[1]; }
        );
        
        vector<int> result;
        for(auto& e: tmp_restaurants)
            result.push_back(e[0]);

        return result;
    }
};
class Solution {
public:
    static bool compare(int a, int b) {
       
        int bitCountA = __builtin_popcount(a);
        int bitCountB = __builtin_popcount(b);

       
        if (bitCountA == bitCountB) {
            return a < b;
        }
        
        
        return bitCountA < bitCountB;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        // Use the compare function to sort the vector
        sort(arr.begin(), arr.end(), compare);
        
        // Return the sorted vector
        return arr;
    }
};
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans = 0;
        int currentCapacity = capacity;
        
        for(int i = 0; i < plants.size(); i++) {
            // If current plant needs more water than current capacity
            if(plants[i] > currentCapacity) {
                // Go back to the river and refill
                ans += 2 * i; // Steps to go back and return
                currentCapacity = capacity; // Refill the can
            }
            
            // Water the current plant
            ans += 1; // Step to water the plant
            currentCapacity -= plants[i];
        }
        
        return ans;
    }
};

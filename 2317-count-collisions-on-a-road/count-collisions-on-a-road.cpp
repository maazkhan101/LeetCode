class Solution {
public:
    int countCollisions(string dir) {
        int count = 0;
        int i = 0, j = dir.length()-1;
		
		// remove left moving cars from begining
        while(i < dir.length() and dir[i] == 'L')
            i++;
        
		// remove right moving cars from ending
        while(j >= 0 and dir[j] == 'R')
            j--;
        
		//  All cars betwee 'i' index ad 'j' index will Collide
		// Count right moving and left moving only
        while(i <= j) {
            count += (dir[i] == 'R');
            count += (dir[i] == 'L');
            i++;
        }
        return count;
    }
};
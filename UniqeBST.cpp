/* 
  	input = 3;
    output = 5

              1            1                   2                    3               3
	           \            \                 / \                  /               /
    	        3             2              1   3                2               1
               /               \                                 /                 \
              2                 3                              1                    2
                     i = 1                   i = 2                       i = 3           
(i = root node)
*/

/*
class Solution {
public:
    int numTrees(int n) {
        
        if( n<= 1) return 1;
        int ans = 0;

        for(int i=1;i<=n;i++){
         
         ans+=numTrees(i-1) * numTrees(n-i);

        }
        return ans;
    }
};
*/
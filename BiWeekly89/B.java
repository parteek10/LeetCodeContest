//https://leetcode.com/contest/biweekly-contest-89/problems/range-product-queries-of-powers/

import java.util.*;

class Solution {
    public int[] productQueries(int n, int[][] q) {
        
        List<Integer> l = new ArrayList<>();
        
        for(int i=0;i<31;i++) {
            
            int mask = 1 << i;
            
            if((mask & n) > 0) {
                
                l.add(1 << i);
            }
        }
        
        int[] ans = new int[q.length];
        int i = 0;
        
        for(int[] a : q) {
            
            long p = 1 ; 
            
            for(int j=a[0];j<=a[1];j++) p = (p * l.get(j)) % (1000000000 + 7);
            
            ans[i++] = (int)p;
        }
        
        return ans;
    }
}
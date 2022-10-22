//https://leetcode.com/contest/biweekly-contest-89/problems/number-of-valid-clock-times/

class Solution {
    
    int ans;
    public int countTime(String s) {
        
        char[] ch = new char[]{s.charAt(0),s.charAt(1),s.charAt(3),s.charAt(4)};
        
        ans = 0;
        
        sol(0,ch,false);
        
        return (ans == 0) ? 1 : ans;
    }
    
    void sol(int idx,char[] ch,boolean flag) {
        
        if(idx == ch.length) {
         
            String s = new String(ch);
            String st = s.substring(2);
            
            if(flag) {
                
                if(s.compareTo("24") < 0 && st.compareTo("60") < 0) ans++;
            }
            
            return;
        }
        
        char t = ch[idx];
        
        if(t == '?') {
            
            for(char i = '0' ; i <= '9' ; i++) {
                
                ch[idx] = i;
                sol(idx+1,ch,true);
            }
            
            ch[idx] = '?';
        }
        else{
            
            sol(idx+1,ch,flag);
        }
    }
}
// https://leetcode.com/contest/weekly-contest-310/problems/longest-increasing-subsequence-ii/

class SegmentTree{
		public:
        vector<int> t;
        int n;
        
        SegmentTree(int n){
            this->n = n;
            t.assign(4*n,0);
        }
        
        int get(int v,int l,int r,int tl,int tr){
            if(l>r) return 0;

            if(l==tl&&tr==r){
                return t[v];
            }

            int m = (tl+tr)/2;

            int left = get(2*v,l,min(m,r),tl,m);
            int right = get(2*v+1,max(m+1,l),r,m+1,tr);

            return max(left,right);
        }
        void update(int v, int tl, int tr, int pos, int new_val) {
            if (tl == tr) {
                t[v] = new_val;
            } 
            else {
                int tm = (tl + tr) / 2;
                if (pos <= tm)
                    update(v*2, tl, tm, pos, new_val);
                else
                    update(v*2+1, tm+1, tr, pos, new_val);
                t[v] = max(t[v*2], t[v*2+1]);
            }
        }
        
    };
    int lengthOfLIS(vector<int>& nums, int k) {
        int n = nums.size();
        SegmentTree tr(100002);
        int ans = 0;
        for(int i : nums){
            int val = tr.get(1, max(i-k,0), max(i-1,0), 0, 1e5);
            ans = max(ans,val+1);
            tr.update(1, 0, 1e5, i, val+1);
        }
        return ans;    
    }
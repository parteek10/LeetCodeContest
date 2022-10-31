class Solution {
public:
double calculateTax(vector<vector<int>>& brackets, int income) {
    
    vector <int> ans;
    
    if(brackets[0][0] > income)
        return income*(brackets[0][1]/100.0);
    
    income -= brackets[0][0];
    ans.push_back(brackets[0][0]);
    
    for(int i = 1 ; i < brackets.size(); i++){
        int dif = brackets[i][0] - brackets[i-1][0];
        if( dif >= income){
            ans.push_back(income);
            break;
        }else{
            income -= dif;
        }
        ans.push_back(dif);
    }
    
    double tax = 0;
    
    for(int i = 0; i < ans.size();i++){
        tax += (brackets[i][1]/100.0)*ans[i];    
    }
    
    return tax;
}
};
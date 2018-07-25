class Solution {
public:
    void parentheses(vector<vector<int>> &res, vector<int> &tempRes, int &n);
    
    vector<string> generateParenthesis(int n) {
        vector<vector<int>> res;
        vector<int> tempRes(2*n,0);
        parentheses(res, tempRes, n);
        
        string tempStr;
        vector<string> resStr;
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++){
                if(res[i][j]==-1) tempStr.push_back('(');
                if(res[i][j]==1) tempStr.push_back(')');
            }
            resStr.push_back(tempStr);
        }
        return resStr;
    }
};

//-1 is (, +1 is )
void parentheses(vector<vector<int>> &res, vector<int> &tempRes, int &n){
    if(2*n==tempRes.size()){
        res.push_back(tempRes);
        return;
    }
    int balance;
    for(auto i:tempRes)
        balance+=i;
    if(balance>=0){ //need more "("
        tempRes.push_back(-1);
        parentheses(res,tempRes,n);
        tempRes.pop_back();
    }
    if(balance<=0){ //need more ")"
        tempRes.push_back(1);
        parentheses(res,tempRes,n);
        tempRes.pop_back();
    }
}

bool compareVec(vector<int> a, vector<int> b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
class Solution {
public:
    int operation(int num1,int num2, char op){
        if(op=='+') return num1+num2;
        else if( op=='-') return num1-num2;
        else if(op=='*') return num1*num2;
        else return num1/num2;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(int i=0;i<tokens.size();i++) {
            int num = tokens[i]-'0';
            if(num>=0 and num<=9) stk.push(num);
            else {
                int num1 = stk.pop();
                int num2 = stk.pop();
                int ans = operation(num1, num2, tokens[i]);
                stk.push(ans);
            }
        }
        return stk.pop();
    }
};
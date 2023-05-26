#include <iostream>
#include <vector>
#include <stack>

using namespace std;
class Rpn
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++)
        {

            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                /// 2 elements
                int v1 = st.top();
                st.pop();
                int v2 = st.top();
                st.pop();

                if (tokens[i] == "+")
                {
                    st.push(v2 + v1); /// push result inside stack
                }
                else if (tokens[i] == "-")
                {
                    st.push(v2 - v1); /// push result inside stack
                }
                else if (tokens[i] == "*")
                {
                    st.push(v2 * v1); /// push result inside stack
                }
                else if (tokens[i] == "/")
                {
                    st.push(v2 / v1); /// push result inside stack
                }
            }

            else
            {
                /// operands
                st.push(stoi(tokens[i]));
            }
        }

        /// one element inside the stack

        return st.top();
    }
};

int main()
{
    Rpn rpn;
    vector<string> vect = {"4", "13", "5","4", "/", "+","*"}; //(4 + (13 / 5)) = 6
    cout << rpn.evalRPN(vect);
    // vect.
    return 0;
}
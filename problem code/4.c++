// .Write a program to check if a given bracket sequence is valid or not. The sequence will contain 3 types of brackets -> First Bracket ( ) , Second Bracket { } and Third Bracket [ ]. You can use builtin Stack for this problem.		      10

// Input
// Output
// {[][]()(())}
// Yes
// {[][]()(()))}
// No
// {[](})
// No

// ------------- Solution -----------------------]
#include <bits/stdc++.h>
using namespace std;

bool valid_bracket_sequence(const string& symbol) {
    stack<char> st;
    for (char bracket : symbol) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            st.push(bracket);
        } else if (bracket == ')') {
            if (st.empty() || st.top() != '(') {
                return false;
            } else {
                st.pop();
            }
        } else if (bracket == '}') {
            if (st.empty() || st.top() != '{') {
                return false;
            } else {
                st.pop();
            }
        } else if (bracket == ']') {
            if (st.empty() || st.top() != '[') {
                return false;
            } else {
                st.pop();
            }
        }
    }
    return st.empty();
}

int main() {
    string symbol;
    cin >> symbol;
    if (valid_bracket_sequence(symbol)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}





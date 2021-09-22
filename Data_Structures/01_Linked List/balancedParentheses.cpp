// #include <bits/stdc++.h>
// using namespace std;
// // func. to check whether char. are opening & closing of some types
// bool ArePair(char opening, char closing){
// 	if(opening == '(' && closing == ')') return true;
// 	else if(opening == '{' && closing == '}') return true;
// 	else if(opening == '[' && closing == ']') return true;
// 	return false;
// }
// bool AreParenthesesBalanced(string exp){
// 	stack<char> S;
// 	for(int i=0; i<exp.length(); i++){
// 		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
// 			S.push(exp[i]);
// 		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
// 			if(S.empty() || !ArePair(S.top) exp[i]) 
// 				return false;
// 			else 
// 				S.pop();
// 		}
// 	}
// 	return S.empty() ? true:false;
// }
// int main(){
// 	string expression;
// 	cout<<"Enter an expression: ";
// 	cin>>expression;
// 	if(AreParenthesesBalanced(expression))
// 		cout<<"Balanced";
// 	else
// 		cout<<"Not Balanced";
// }





// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;
 
// function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{ 
    stack<char> s;
    char x;
 
    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }
 
        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;
 
        switch (expr[i]) {
        case ')':
             
            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
 
    // Check Empty Stack
    return (s.empty());
}
 
// Driver code
int main()
{
    string expr = "{()}[]";
 
    // Function call
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
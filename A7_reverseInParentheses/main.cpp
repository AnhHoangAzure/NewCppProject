#include <iostream>
#include <vector>
using namespace std;
string revertString(int i_Left,int j_Right,string input){
    string tmp;
    string res;
    for(int k = j_Right; k >= i_Left; k--){
        tmp += input[k];
    }
    bool isReverting = false;
    for(int x = 0 ; x < input.size();x++)
    {
        if(x < i_Left || x > j_Right)
            res += input[x];
        else if(!isReverting)
        {
            res = res + tmp;
            isReverting = true;
        }
    }
    return res;
}
std::string reverseInParentheses(std::string inputString) {
    int i = 0;
    int j = inputString.size()-1;
    int index_i = 0, index_j = 0;
    bool isLeft = false, isRight = false;
    string res ="", tmpStr = "";
    while (i<j) {
        if(inputString[i] == '(' && isLeft == false){
            index_i = i;
            isLeft = true;
        }
        if(inputString[j] == ')' && isRight == false){
            index_j = j;
            isRight = true;
        }
        //function revert
        if(isRight == true && isLeft == true)
        {
            tmpStr = revertString(index_i, index_j, inputString);
            isLeft = false;
            isRight = false;
        }
        i++;
        j--;
    }
    for(int t = 0 ; t < tmpStr.size(); t++)
    {
        if(tmpStr[t] != '(' && tmpStr[t] != ')')
            res += tmpStr[t];
    }
    return res;
}
/*
 * string reverseString(string s){
    for(int i = 0;i < s.length()/2;i++){
        char t = s[s.length()-1-i];
        s[s.length()-1-i] = s[i];
        s[i] = t;
    }
    return s;
}
string reverseInParentheses(string s) {
    int beg = 0;
    int end = s.length() - 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(')
            beg = i;
        if(s[i] == ')'){
            end = i;
            string temp = s.substr(beg + 1, end - beg - 1);
            return reverseInParentheses(s.substr(0, beg) + reverseString(temp) + s.substr(end + 1));
         }
    }
    return s;
}
*/

int main()
{

    string inputString = "foo(bar)baz";
    string res = reverseInParentheses(inputString);
    cout << "HResult res = " <<res<< endl;
    return 0;
}

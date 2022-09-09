#include<iostream>
using namespace std;

char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string s){
    int start = 0;
    int end = s.size() - 1;
    while (start<=end)
    {
        if (isalnum(s[start]) == 0)
        {
            start++;
        }
        else if (isalnum(s[end]) == 0)
        {
            end++;
        }
        else if(toLowercase(s[start]) != toLowercase(s[end])){

            return false;
        }
        else {
            start++;
            end--;

        }
    }
    return true;
}
int main(){

   char ch[10] = {'L', 'e', 'v', 'e', 'l'};

   if(isPalindrome(ch) == true){
    cout<<"palindrome or not "<<" -- > Yes";
   }
   else{
        cout<<"palindrome or not "<<" -- > No";
   }


}
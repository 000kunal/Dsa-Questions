#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

bool valid(char ch){

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

char isLowercase(char ch){

    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPlaindrome(string a){
    int s = 0;
    int e = a.length() - 1;
    while (s<=e)
    {
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s){

    // faltu char ko hatana h
    string temp = "";
    for (int j = 0 ; j < s.length() ; j++)
    {
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }

    //Lowercase me kardo
    for(int j = 0; j<s.length(); j++){
        temp[j] = isLowercase(temp[j]);
    }

    //check palindrome
    return checkPlaindrome(temp);

}

int main(){

    string str =  "A man, a plan, a canal: Panama";

    cout<<"The answer is :  " <<isPalindrome(str);


}
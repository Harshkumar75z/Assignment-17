#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s){
    int i=0;
    int j=s.length()-1;
    if(s[i]!=s[j]){
     return false;
    i++;
    j--;
    }return true;
}
int main(){
    string s;
    cout<<"Enter Your String : ";
    getline(cin,s);
    if(palindrome(s)==true)
        cout<<"The String is Palindrome";
    else
        cout<<"The String is not Palindrome";

}

// Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    int n=s.length();
    int i=n/2;
    int j=n-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    int n=s.length();
    int c;
    for(int i=0;i<n;i++){
       c *= 10;
       c +=s[i]-48;
    }cout<<s;
}

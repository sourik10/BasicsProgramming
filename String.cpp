#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
    int l=0,h=str.size()-1;
    while(l<=h){
        if(str[l]!=str[h]){
            return false;
        }
        else{
            l++,h--;
        }
    }
    return true;
}

void countVowelsConsonants(string str){
    for(int i=0;i<str.size();i++) str[i]=tolower(str[i]);
    int vowels=0,consonants=0,whiteSpaces=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') vowels++;
        else if(str[i]>='a' && str[i]<='z') consonants++;
        else if(str[i]==' ') whiteSpaces++;
    }
    cout<<vowels<<" "<<consonants<<" "<<whiteSpaces;
}

//ascii character
char ch='s';
cout<<int(ch)<<endl;


string removeVowels(string str){
    for(int i=0;i<str.size();i++){
         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
             str=str.substr(0,i)+str.substr(i+1);
             i--;
         }
    }
    return str;
}

string removeWhitespaces(string &str){
    string ans;
    for(int i=0;i<str.size();i++){
        if(str[i]==' ') continue;
        else ans.push_back(str[i]);
    }
    return ans;
}

string removeCharacter(string str){
    string ans="";
    for(int i=0;i<str.size();i++){
        int ch=int(str[i]);
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)) ans.push_back(str[i]);
    }
    return ans;
}




 

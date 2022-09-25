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

//Remove Characters from first String present in the Second String
string remove(string str1,string str2){
    string ans="";
    unordered_map<char,int>mp;
    for(int i=0;i<str2.size();i++) mp[str2[i]]=1;
    for(int i=0;i<str1.size();i++){
        if(!mp[str1[i]]) ans.push_back(str1[i]);
    }
    return ans;
}

//Print all the duplicates in the string
void printDuplicates(string str){
    unordered_map<char,int>mp;
    for(int i=0;i<str.size();i++) mp[str[i]]++;
    for(auto it:mp){
        if(it.second > 1) cout<<it.first<<" ";
    }
}

//Remove brackets from an algebraic expression
string removeBrackets(string str){
    string ans="";
    for(int i=0;i<str.size();i++){
        if(str[i]!='(' && str[i]!=')' && str[i]!='{' && str[i]!='}' && str[i]!='[' && str[i]!=']') ans.push_back(str[i]);
    }
    return ans;
}

//Sum of the Numbers in a String
https://takeuforward.org/data-structure/sum-of-the-numbers-in-a-string/

//Capitalize first and last character of each word of a string
string capitalize(string str){
    str[0]=toupper(str[0]); //first position
    for(int i=1;i<str.size()-1;i++){
        if(str[i]==' ') {
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
    str[str.size()-1]=toupper(str[str.size()-1]); //last position
    return str;
}

//Calculate Frequency of characters in a String
void findFrequency(string str){
    map<char,int>mp;
    for(int i=0;i<str.size();i++) mp[str[i]]++;
    for(auto it:mp){
       cout<<it.first<<it.second<<" ";
    }
    cout<<endl;
}

//nonRepeating characters in a string
void nonRepeat(string str){
    map<char,int>mp;
    for(int i=0;i<str.size();i++) mp[str[i]]++;
    for(auto it:mp){
        if(it.second==1) cout<<it.first<<" ";
    }
    cout<<endl;
}

//Check if two Strings are anagrams of each other
bool checkAnagram(string str1,string str2){
    if(str1.length()!=str2.length()) return false;
    int freq[26]={0};
    for(int i=0;i<str1.length();i++) freq[str1[i]-'A']++;
    for(int i=0;i<str2.length();i++) freq[str2[i]-'A']--;
    for(int i=0;i<26;i++){
        if(freq[i]!=0) return false;
    }
    return true;
}


https://takeuforward.org/data-structure/maximum-occurring-character-in-a-string/
https://takeuforward.org/data-structure/remove-all-duplicates-from-a-string/

 

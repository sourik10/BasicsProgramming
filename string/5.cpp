#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

string removeSpaces(string str)
{
    // To keep track of non-space character count
    int count = 0;
 
    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
   	//str[count] = '\0';
   return str;
}

int main(){
	string s="sourik is very weak in coding ";
	cout<<removeSpaces(s)<<endl;

	/*
	int l=s.length();
	int c=count(s.begin(),s.end(),' ');
	remove(s.begin(),s.end(),' ');
	s.resize(l-c);
	cout<<s<<endl;
	*/

	
}
	

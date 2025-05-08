#include<bits/stdc++.h>
using namespace std;

int fiboS(int num){
    if (num == 0 )
    {
        cout<<"enter valid input"<<endl;
        return 0;
    }
    else if (num == 1 || num == 2 || num == 3)
    {
        return 1;
    }
    else{
        return fiboS(num-1)+fiboS(num-2);
    }
}

string anagram(string s1,string s2){
    if (s1.length() != s2.length()) {
    cout << "not an anagram" << endl;
} else {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2) {
        cout << "is an anagram" << endl;
    } else {
        cout << "not an anagram" << endl;
    }
}

}

string removeVowels(string str) {
    string newStr = "";
    for (char c : str) {
        c = tolower(c); // convert to lowercase
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            newStr += c;
        }
    }
    return newStr;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout<<fiboS(num)<<endl;

    string s1 = "silent";
    string s2 = "listen";

    anagram(s1,s2);

    string str = "This is a sentence ,Adarsh";
    cout << removeVowels(str) << endl;


    return 0;
}



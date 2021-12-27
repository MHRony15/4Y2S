#include <bits/stdc++.h>
using namespace std;
string encrypt(string text, int s){
    string result = "";
    for (int i=0;i<text.length();i++){
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
        else if(islower(text[i]))
            result += char(int(text[i]+s-97)%26 +97);
        else result+=text[i];
    }
        return result;
}
string decryption(string text, int s){
    string result = "";
    for (int i=0;i<text.length();i++){
        if (isupper(text[i]))
            result += char(int(text[i]-s-65)%26 +65);
        else if(islower(text[i]))
            result += char(int(text[i]+s-97)%26 +97);
        else result+=text[i];
    }
        return result;
}

int main(){
    string plaintext,cipher,plain;
    int key;
    cout<<"Enter the plain text:";
    cin>>plaintext;
    cout<<"Enter The key:";
    cin>>key;
    cipher = encrypt(plaintext, key);
    cout << "Cipher: " << cipher;
    plain = decryption(cipher, key);
    cout <<endl<< "Plain Text: " << plain;
    return 0;
}

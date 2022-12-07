#include <iostream>
#include<string>
using namespace std;

string KeyGenerator(string text, string key)
{
    int i = 0;
    while (key.size() != text.size())
    {
        key.push_back(key[i]);
        i++;
    }
    return key;
  
}

string VigenreCipherEncrypt(string text, string key)
{
    string ciphertext="";
    for (int i = 0; i < text.size(); i++)
    {
        char x = (text[i]-'a'+ key[i]-'a') % 26;
        x += 'a';
        ciphertext.push_back(x);
    }
    return ciphertext;
}

string VigenreCipherDecrypt(string ciphertext, string key)
{
    string text;
    for (int i = 0; i < ciphertext.size(); i++)
    {
        char x = (ciphertext[i]-'a'-key[i]+'a'+26)%26;
        x += 'a';
        text.push_back(x);
    }
    return text;
}

int main()
{
    int Choice;
    string key, text, ciphertext;
    cout << "Enter key: ";
    cin >> key;
    cout << "Enter text: ";
    cin >> text;
    key = KeyGenerator(text, key);
    ciphertext = VigenreCipherEncrypt(text, key);
    cout << "Cipher Text: " << ciphertext << endl;
    cout << "Original Text: " << VigenreCipherDecrypt(ciphertext, key);
    return 0;
}
at
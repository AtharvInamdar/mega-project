#include<bits/stdc++.h>
using namespace std ;
#include<bits/stdc++.h>
using namespace std ;
#include<bits/stdc++.h>
using namespace std ;
#include<bits/stdc++.h>
using namespace std ;
string caesarCipher(string plainText , int shift)
{
   string cipherText = "";
   for(auto x : plainText)
   {
      if(isupper(x))
        cipherText.push_back(char(int((x - 'A' + shift)%26) + 'A'));
      else
        cipherText.push_back(char(int((x - 'a' + shift)%26) + 'a'));
   }
   return cipherText;
}
signed main()
{
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    // #endif

    cout << "Enter Plain Text : ";
    string plainText;
    cin >> plainText;
    int shift;
    cout << "\nEnter Shifts :";
    cin >> shift;
    string cipherText = caesarCipher(plainText , shift);
    cout << "Cipher Text : " << cipherText << "\n";
    
   return 0;
}
string caesarCipher(string plainText , int shift)
{
   string cipherText = "";
   for(auto x : plainText)
   {
      if(isupper(x))
        cipherText.push_back(char(int((x - 'A' + shift)%26) + 'A'));
      else
        cipherText.push_back(char(int((x - 'a' + shift)%26) + 'a'));
   }
   return cipherText;
}
signed main()
{
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    // #endif

    cout << "Enter Plain Text : ";
    string plainText;
    cin >> plainText;
    int shift;
    cout << "\nEnter Shifts :";
    cin >> shift;
    string cipherText = caesarCipher(plainText , shift);
    cout << "Cipher Text : " << cipherText << "\n";
    
   return 0;
}



#include<bits/stdc++.h>
using namespace std ;
#include<bits/stdc++.h>
using namespace std ;
string caesarCipher(string plainText , int shift)
{
   string cipherText = "";
   for(auto x : plainText)
   {
      if(isupper(x))
        cipherText.push_back(char(int((x - 'A' + shift)%26) + 'A'));
      else
        cipherText.push_back(char(int((x - 'a' + shift)%26) + 'a'));
   }
   return cipherText;
}
signed main()
{
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin);
    //   freopen("output.txt", "w", stdout);
    // #endif

    cout << "Enter Plain Text : ";
    string plainText;
    cin >> plainText;
    int shift;
    cout << "\nEnter Shifts :";
    cin >> shift;
    string cipherText = caesarCipher(plainText , shift);
    cout << "Cipher Text : " << cipherText << "\n";
    
   return 0;
}
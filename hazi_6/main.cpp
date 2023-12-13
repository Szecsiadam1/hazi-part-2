#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Egy szo=";
    string str1;
    cin >> str1;
    int length=str1.length(), k;
    string forgatottszo;
    cout << "Hanyszor akarjuk jobbra forditani a szot=";
    cin >> k;
    if(k<=5){
      k=k%length;
    forgatottszo = str1.substr(length-k)+str1.substr(0, length-k);
    }else if(k>5){
       cout << "A 'k' szam kisebb vagy egyenlo kell legyen, mint 5. ";
    }
    cout << "A forgatott szo=" << forgatottszo << endl;
    return 0;
}

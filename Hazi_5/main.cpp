#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "String=";
    cin >> str1;
    for(char mh:str1){
        if(mh == 'a'  ||  mh == 'e' || mh=='i' || mh=='o' || mh=='u'){
            str2=str2+"mpZm";
        }else{
        str2=str2+mh;
        }
    }
    cout << str2;
    return 0;
}

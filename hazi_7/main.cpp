#include <iostream>
using namespace std;
bool prim(int szam){
 if(szam<=1){
    return false;
 }
 for(int i=2;i<szam/2+1;i++){
    if(szam%i==0){
        return false;
    }
 }
   return true;
}
int hatvany(int n){
    int sprim=n,shatvany=n, hatvany;
    for (int i = 2; i < n; i++) {
    if (prim(i)) {
        hatvany = 0;
        for (int temp = n; temp % i == 0; hatvany++) {
            temp = temp / i;
        }
        if (hatvany > 0 && (hatvany < shatvany || (hatvany == shatvany && i < sprim))) {
            sprim = i;
            shatvany = hatvany;
        }
    }
}
    return sprim;
}
int main()
{
 int n;
 cout << "Szam=";
 cin >> n;
 int eredmeny=hatvany(n);
 cout << eredmeny << endl;
    return 0;
}

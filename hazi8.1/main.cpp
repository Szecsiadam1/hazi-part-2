#include <iostream>

using namespace std;

bool prim(int szam)
{
    for(int i=2;i<=szam/2+1;i++){
        if(szam%i==0){
            return false;
        }
    }
    return true;
}
void primek(int n, int &x, int &y)
{
    x=0;
    y=0;
    for(int i=n-1;i>=2;i--){
        if(prim(i)){
            if(x==0){
                x=i;
            }else if(y==0){
            y=i;
            }
        }
    }
}
int main()
{
   int n, x=0, y=0;
   cout << "Az n erteke=";
   cin >> n;
   primek(n,x,y);
   cout << "x=" << x << endl << "y=" << y;
    return 0;
}

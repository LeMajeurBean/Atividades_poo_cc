#include<iostream>

using namespace std;

int conta(int a, int b){
    int res=0;
    if(a>b){
        res = (a + b) - 10;
    }else if(b>a){
        res = (b-a) + 10;
    }
    else{
        res = (a*b) * 10;
    }
return res;
}

int main(){

    int res=0;
    int a=0, b=0;

    cin >> a;
    cin >> b;

    res = conta(a,b);

    cout << res << "\n";
return 0;
}

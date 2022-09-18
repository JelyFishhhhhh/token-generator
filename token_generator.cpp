#include<bits/stdc++.h>
#include<windows.h>
#define ll long long
using namespace std;

random_device rd;
mt19937_64 generator(time(NULL));
normal_distribution<double> nor(0.0, 1.0);
double ran1,ran2;
ll x,k=50;
vector<ll> token_ASCII(k);
string token;

signed main(){

    for(x=0;x!=k;x++){
        ran1 = abs(nor(generator));
        ran2 = abs(nor(generator));
        ran1*=ran2;
        token_ASCII[x]=int(1/ran1)%96+33;
    }
    for(x=0;x!=k;x++){
        token+=char(token_ASCII[x]);
    }
    ofstream mFile("TOKEN.txt");
    mFile<<token;
    mFile.close();
    //system("pause");
}
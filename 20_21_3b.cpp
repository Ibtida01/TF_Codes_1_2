#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include<iomanip>
#include<cstring>
#define dbg(x) cout << #x << " = " << x << endl;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pans cout << ans << "\n";
#define endl "\n"
#define pb push_back
#define mp make_pair
#define MAX 1000000000
#define pii pair<int,int>
// const ll mod=1e9+7;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

using namespace std;
void solve(char* filename) {
//took help from google
    FILE *fp;
    long long sz;
//    string s;
//    strcpy(s,filename);
    fp = fopen(filename, "r");
    if(fp == nullptr)
    {
        cout<<"file not found"<<endl;
        return;
    }
    fseek(fp,0,SEEK_END);
    sz = ftell(fp);
    cout<<sz<<" Bytes"<<endl;
    fclose(fp);
}

int main(int argc,char* argv[])
{
//    fast_io;
//    int t;
//    cin>>t;
//    while(t--)
        solve(argv[1]);
}

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int  main() 
{

 int n; cin>> n;
    string s; cin>>s; 
    int cnt=0; 

    for(int i=0; i<s.size(); i++) {
        if(s[i] == s[i+1]){
          cnt++;
        }
        
    }

    cout<< cnt << endl;

}
 

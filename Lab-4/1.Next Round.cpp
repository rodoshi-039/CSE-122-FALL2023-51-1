#include <iostream>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;

    int cnt=0;

    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        if(x>b){
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}

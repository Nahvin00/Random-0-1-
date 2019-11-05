#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int x=(rand()%1), num;
    char y;
    cout<<"Enter either 'H' or 'T': "<<endl;
    cin>>y;
    while(y!='H'&& y!='T'){
        cout<<"Invalid character. Re-enter: "<<endl;
        cin>>y;
    }
    switch(y){
        case 'H':
            num=1;
            break;
        case 'T':
            num=0;
            break;
    }
    if(x==num){
        cout<<"You win.";
    }
    else{
        cout<<"You lose.";
    }
    return 0;
}

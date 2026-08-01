#include <iostream>
using namespace std;

int main(){
  int row,col;
    for(int i=1;i<=5;i++){
        for(int j =1;j<=5;j++){
            int val;
            cin>>val;
            if(val==1){
                row=i;col=j;
                break;
            }
        }
    }
    cout<<(max(3,row)-min(3,row)+max(3,col)-min(3,col))<<endl;
    return 0;
}
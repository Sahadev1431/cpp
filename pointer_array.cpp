#include <iostream>
using namespace std;
int main(){
    int marks[4]={};
    // int marks[4]={23,25,99,100};
    // cout<<"the marks 1 is "<<marks[0]<<endl;
    // cout<<"the marks 2 is "<<marks[1]<<endl;
    // cout<<"the marks 3 is "<<marks[2]<<endl;
    // cout<<"the marks 4 is "<<marks[3]<<endl;

    for (int s =0;s<4;s++){
        cout<<"enter marks "<<s+1<<":";
        cin>>marks[s]; 
       
    }
    // for (int j =0;j<4;j++){
    //     cout<<"your marks "<<j+1<<" is "<<marks[j]<<endl;
    // }
    int *p = marks;
    for (int i = 0;i<4;i++){
        cout<<"the value of marks "<<i+1<<" is "<<*(p+i)<<endl;
    }


    // int *p = marks;
    // cout<<"the value of marks[0] is "<<*p<<endl;
    // cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"the value of marks[3] is "<<*(p+3)<<endl;
}
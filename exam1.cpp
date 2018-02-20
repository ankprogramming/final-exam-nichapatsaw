#include <iostream>
using namespace std;

int main() {
    int a,b,cmd,reusult_1,reusult_2,reusult_3,reusult_4;
    cout << "Welcome to CLI Calculator V1.00" << endl;
    cout << "Number 1 :";
    cin >> a;
    cout << "Number 2 :";
    cin >> b;

    do{
        cout << "menu\n1.+\n2.-\n3.*\n4./\n5.quit" << endl;
        cin >> cmd;
        if(cmd==1){
            reusult_1=a+b;
            cout << "Reusult ="<<reusult_1 << endl;
        }else if(cmd==2){
            reusult_2=a-b;
            cout << "Reusult ="<<reusult_2 << endl;
        }else if(cmd==3){
            reusult_3=a*b;
            cout << "Reusult ="<<reusult_3 << endl;
        }else if(cmd==4){
            reusult_4=a/b;
            cout << "Reusult ="<<reusult_4 << endl;
            }{break;}
        }while(1);
        return 0;
        }



#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    int cmd;
    string name;
    string line;
    ofstream writefile;
    ifstream readfile;

    do{
        cout << "MENU" << endl;
        cout << "1.Add student." << endl;
        cout << "2.List student." << endl;
        cout << "3.Search list student." << endl;
        cout << "4.Quit." << endl;
        cout << "Please Enter MENU :";
        cin >> cmd;

        if(cmd==1){
            cout << "Enter Std name :";
            cin >> name;

            writefile.open("std.txt",fstream::app);
            if (writefile.is_open())
                {
                writefile << name << endl;
                writefile.close();

            }else
            {
                cout << "unable to open file";
            }

        } else if (cmd==2){
            readfile.open("std.txt");
            if (readfile.is_open())
                {
                while (getline(readfile,line))
                {
                    cout << line << endl;
                }
            readfile.close();
            }

        }else {
        break;}
    }while(1);

        return 0;
}

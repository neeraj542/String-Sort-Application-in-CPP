#include<algorithm>
#include<iostream>
#include<string>

using namespace std;

int strSort(string str){

    int checkPress;
    cout << "Press 1 to sort" << endl;
    cin >> checkPress;

    if(checkPress==1){
        sort(str.begin(), str.end());
        cout << str;
    }else{
        cout << "Sorry!!, You didn't press 1. Try Again";
    }
}
int main (){
    cout << "String Sort Application" << endl;
    cout << "Enter String: ";
    string str;
    getline(cin, str);

    strSort(str);

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {

    double usrInput1;
    cout << "Please input your first value! " << endl;
    cin >> usrInput1;
    string usrOperator;
    cout << "Please input your operator! " << endl;
    cin >> usrOperator;
    double usrInput2;
    cout << "Please input your second value! " << endl;
    cin >> usrInput2;

    double result;
    if(usrOperator == "+"){
       result = usrInput1+usrInput2;
    }else if(usrOperator == "-"){
        result =usrInput1-usrInput2;
    }else if(usrOperator == "*"){
        result = usrInput1*usrInput2;
    }else if(usrOperator == "/"){
        result = usrInput1/usrInput2;
    }else{
        cout << "You input an invalid operator!" << endl;
    }
    cout << result << endl;
    return 0;
}

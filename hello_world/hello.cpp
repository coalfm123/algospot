#include <iostream>
#include <string>

using namespace std;

int main(void){
    int cases;
    int i = 0;

    string str;

    cin >> cases;

    for(i=0; i<cases; i++){
        cin >> str;
        cout << "Hello, " << str << "!" << endl;
    }
    return 0;
}

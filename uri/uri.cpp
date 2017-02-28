#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
    int cases = 0, i = 0, j = 0;

    string uri, word;

    size_t pos = 0;

    char buffer[4];

    cin >> cases;

    for(i = 0; i < cases; i++){
        cin >> uri;
        while(1){
            pos = uri.find("%");
            if(pos == string::npos)
                break;
            uri.replace(pos, 1, "#");
        }

        while(1){
            pos = uri.find("#");
            if(pos == string::npos)
                break;
            buffer[uri.copy(buffer, 3, pos)] = '\0';

            if(strncmp(buffer, "#20", 3) == 0)
                word = " ";
            else if(strncmp(buffer, "#21", 3) == 0)
                word = "!";
            else if(strncmp(buffer, "#24", 3) == 0)
                word = "$";
            else if(strncmp(buffer, "#25", 3) == 0)
                word = "%";
            else if(strncmp(buffer, "#28", 3) == 0)
                word = "(";
            else if(strncmp(buffer, "#29", 3) == 0)
                word = ")";
            else if(strncmp(buffer, "#2a", 3) == 0)
                word = "*";


            uri.replace(pos, 3, word);
        }
        cout << uri << endl;
    }

    return 0;
}

#include <iostream>
#include <stack>

using namespace std;

int operation(int x, int y, char operation){
    switch(operation){
        
        case '+':
            return x + y;
            break;
        case '-':
            return x - y;
            break;
        case '*':
            return x * y;
            break;
        case '/':
            return x / y;
            break;
        default:
            return -1;
    }
}

int main(){

    string str;
    stack<float> stk;

    cout << "Enter the string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++){ // scanning
        if(str[i] >= 48 && str[i] <= 57) // 48 - 57
            stk.push(str[i] - '0');
        else if (str[i] >= 40 && str[i] <= 47){ // 40 - 47
            float x = stk.top();
            stk.pop();
            float y = stk.top();
            stk.pop();
            cout << x << " " << y << " " << str[i] << endl;
            stk.push(operation(y, x, str[i]));
        }
    }

    cout << stk.top() << endl;

}
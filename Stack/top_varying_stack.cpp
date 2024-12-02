#include <iostream>

using namespace std;


class Stack{
    int top =-1, maxsize, *stack;
    
    public:

        Stack(){
            int option, num;

            cout << "Enter the max size of array: ";
            cin >> maxsize;
            stack = new int[maxsize];

            do{
                cout << "\nStack Operations" << endl;
                cout << "1. Push" << endl;
                cout << "2. Pop" << endl;
                cout << "3. Peek" << endl;
                cout << "4. Display" << endl;
                cout << "5. Exit" << endl;
                cout << "Enter an option: ";
                cin >> option;

                    switch(option){
                    case 1:
                    cout << "Enter a number: ";
                    cin >> num;
                    push(num);
                    break;

                    case 2:
                    display();
                    cout << "Enter a index: ";
                    cin >> num;
                    break;

                    case 3:
                    cout << peek() << endl;
                    break;

                    case 4:
                    display();
                    break;

                    case 5:
                    cout << "Exiting..." << endl;
                    break;

                    default:
                    cout << "Invalid option" << endl;
                }

            }

            while(option != 5);

        }

        int push(int data){
            if(top == maxsize-1){
                cout << "Stack Overflow" << endl;
                return 0;
            }
            stack[++top] = data;
            return 1;
        }

        int pop(){
            if(top == -1){
                cout << "Stack Underflow" << endl;
            }
            return stack[top--];
        }

        int peek(){
            if(top == -1){
                cout << "Stack is empty" << endl;
                return 0;
            }
            return stack[top];
        }

        void display(){
            if(top == -1){
                cout << "Stack is empty" << endl;
                return;
            }
    
            for(int i = top; i >= 0; i--){
                cout << i << " " << stack[i] << endl;
            }
            cout << endl;
        }
};


int main(){
    Stack s;    
    return 0;
}
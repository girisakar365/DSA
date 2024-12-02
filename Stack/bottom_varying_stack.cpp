#include <iostream>

using namespace std;

class Stack{
    int bottom = 0, maxsize, *stack;


    public:
        Stack (){
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
                        pop();
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
            if(bottom == maxsize){
                cout << "Stack Overflow" << endl;
                return 0;
            }
            for (int i = bottom; i > 0; i--){
                stack[i] = stack[i - 1];
            }
            stack[0] = data;
            bottom += 1;
            return 1;
        }

        int pop(){
            if(bottom == 0){
                cout << "Stack Underflow" << endl;
            }
            int item = stack[0];
            bottom--;
            for (int i = 0; i <= bottom; i++){
                stack[i] = stack[i + 1];
            }
            return item;
        }

        int peek(){
            if(bottom == -1){
                cout << "Stack is empty" << endl;
                return 0;
            }
            return stack[bottom];
        }

        void display(){
            if(bottom == -1){
                cout << "Stack is empty" << endl;
                return;
            }
    
            for(int i = bottom; i >= 0; i--){
                cout << i << " " << stack[i] << endl;
            }
            cout << endl;
        }
    
};

int main(){
    Stack s;    
    return 0;
}
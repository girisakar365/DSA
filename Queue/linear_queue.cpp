#include <iostream>

using namespace std;


class Queue{
    int front = -1, rear = -1, maxsize, option, num;
    int* arr;
    
    public:

        Queue(){
            cout << "Enter the max size of array: ";
            cin >> maxsize;
            arr = new int[maxsize];

            do{
                cout << "\nStack Operations" << endl;
                cout << "1. Enqueue" << endl;
                cout << "2. Dequeue" << endl;
                cout << "3. Display" << endl;
                cout << "4. Exit" << endl;
                cout << "Enter an option: ";
                cin >> option;

                switch(option){
                case 1:
                cout << "Enter a number: ";
                cin >> num;
                enqueue(num);
                break;

                case 2:
                dequeue();
                break;

                case 3:
                display();
                break;

                case 4:
                cout << "Exiting..." << endl;
                break;

                default:
                cout << "Invalid option" << endl;
            }

            }

            while(option != 5);

        }
    
        void enqueue(int value) {
            if (rear == maxsize - 1) {
                cout << "Queue is full\n";
                return;
            }
            arr[++rear] = value;
        }

        int dequeue() {
            if (front == rear) {
                cout << "Queue is empty\n";
                return -1;
            }
            int value = arr[front++];
            for(int i = 0; i < rear; i++){
                arr[i] = arr[i + 1];
            }
            rear --;
            return value;
        }

        void display(){
            if(rear == -1){
                cout << "Stack is empty" << endl;
                return;
            }
    
            for(int i = 0; i <= rear; i++){
                cout << i << " " << arr[i] << endl;
            }
            cout << endl;
        }
};


int main(){
    Queue q;
    return 0;
}
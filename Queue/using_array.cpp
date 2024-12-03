#include <iostream>

using namespace std;

class Queue {
    int front = 0, rear = -1, size, option, num;
    int* array;

    public:
        Queue() {
            cout << "Enter the size of queue: ";
            cin >> size;
            array = new int[size];

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

        void enqueue(int x){
            if(rear == size - 1){
                cout << "Queue is full" << endl;
                return;
            } 
            array[++rear] = x;
        }

        int dequeue(){
            if(front > rear){
                cout << "Queue is empty" << endl;
                return -1;
            }
            return array[front++];
        }

        void display(){
            if(front > rear){
                cout << "Queue is empty" << endl;
                return;
            }
            for(int i = front; i <= rear; i++){
                cout << i  << " " << array[i] << endl;
            }
            cout << endl;
        }
};

int main(){
    Queue q;
    return 0;
}
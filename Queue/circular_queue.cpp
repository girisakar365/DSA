#include <iostream>

using namespace std;

class Queue {
    int front = -1, rear = -1, size, option, num;
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
                    cout << "Dequeued: " << dequeue() << endl;
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
            if(rear == -1){
                front = rear = 0;
                array[rear] = x;
            }

            else{
                if(front == (rear + 1) % size){
                    cout << "Queue is full" << endl;
                    return;
                } 
                
                else{
                    rear = (rear + 1) % size;
                    array[rear] = x;
                }
            }
        }

        int dequeue(){
            if (front == -1){
                cout << "Queue is empty" << endl;
                return -1;
            }

            else{
                int x = array[front];
                if(front == rear){
                    front = rear = -1;
                }

                else{
                    front = (front + 1) % size;
                }
                return x;
            }
        }

        void display(){
            int i = front - 1;
            while(i != rear){
                i = (i + 1) % size;
                cout << i << " " << array[i] << endl;
            }
        }
};

int main(){
    Queue q;
    return 0;
}
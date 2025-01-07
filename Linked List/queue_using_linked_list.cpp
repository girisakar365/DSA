#include <iostream>

using namespace std;

struct Node {
public:
    int data;
    Node* next;
};


class Queue {
    Node* front;
    Node* rear;
    public:
        Queue() {
            front = NULL;
            rear = NULL;
        }

        void enqueue(int x) {
            Node* temp = new Node();
            temp->data = x;
            temp->next = NULL;
            if (front == NULL && rear == NULL) {
                front = rear = temp;
                return;
            }
            rear->next = temp;
            rear = temp;
        }

        void dequeue() {
            if (front == NULL) {
                cout << "Queue is Empty" << endl;
                return;
            }
            if (front == rear) {
                front = rear = NULL;
            } else {
                Node* temp = front;
                front = front->next;
                cout << temp->data << " is out of queue." << endl; 
                delete temp;
            }
        }

        int Front() {
            if (front == NULL) {
                cout << "Queue is Empty" << endl;
                return -1;
            }
            return front->data;
        }

        bool isEmpty() {
            return front == NULL;
        }

        void display() {
            Node* temp = front;
            cout << endl;
            while(temp != NULL) {
                cout << temp->data << "\n";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main() {
    Queue q;
    int opt;

    do {
        cout << "\nQueue Operation:\n" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Option: ";
        cin >> opt;

        switch(opt) {
            case 1:
                int x;
                cout << "Enter Element: ";
                cin >> x;
                q.enqueue(x);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                cout << "Front Element: " << q.Front() << endl;
                break;
            case 4:
                cout << "Is Empty: " << q.isEmpty() << endl;
                break;
            case 5:
                q.display();
                break;
            case 6:
                break;
            default:
                cout << "Invalid Option" << endl;
        }
    } while(opt != 6);

    return 0;
}
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
    Node* top;
    int size;
    public:
        Stack() {
            top = NULL;
            size = 0;
        }

        void push(int x) {
            Node* temp = new Node();
            temp->data = x;
            temp->next = top;
            top = temp;
            size += 1;
        }

        void pop() {
            if (top == NULL) {
                cout << "Stack is Empty" << endl;
                return;
            }
            // Node* temp = top;
            top = top->next;
            // delete temp;
            size -= 1;
        }

        int Top() {
            if (top == NULL) {
                cout << "Stack is Empty" << endl;
                return -1;
            }
            return top->data;
        }

        int length() {
            return size;
        }

        bool isEmpty() {
            return top == NULL;
        }

        void display() {
            Node* temp = top;
            cout << endl;
            while(temp != NULL) {
                cout << temp->data << "\n";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main() {
    Stack s;
    int opt;


    do{
        cout << "\nStack Operation Menu" << endl;

        cout << "1. Push\n2. Pop\n3. Top\n4. Is Empty\n5. Display\n6. size\n7. Exit\nEnter your option: " ;
        
        cin >> opt;

        switch(opt) {
                case 1:
                    int x;
                    cout << "Enter the element to push: ";
                    cin >> x;
                    s.push(x);
                    break;
                case 2:
                    s.pop();
                    break;
                case 3:
                    cout << "Top element: " << s.Top() << endl;
                    break;
                case 4:
                    cout << "Is Empty: " << s.isEmpty() << endl;
                    break;
                case 5:
                    s.display();
                    break;
                case 6:
                    cout << "Size: " << s.length() << endl;
                    break;
                case 7:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid Option" << endl;
            }

    }

    while(opt != 7);

    return 0;

}
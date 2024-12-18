#include <iostream>
using namespace std;

class Deque {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;

public:

    Deque(int cap) 
    {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    ~Deque() {
        delete[] arr;
    }

    bool isFull() {
        return size == capacity;
    }


    bool isEmpty() {
        return size == 0;
    }

    void addFront(int item) {
        if (isFull()) {
            cout<<"Deque is full";
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else {
            front = (front - 1 + capacity) % capacity;
        }
        arr[front] = item;
        size++;
    }


    void addRear(int item) {
        if (isFull()) {
            cout<<"Deque is full";
        }
        if (rear == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        arr[rear] = item;
        size++;
    }


    void deleteFront() {
        if (isEmpty()) {
            cout<<"Deque is empty";
        }
        if (front == rear) {  
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        size--;
    }


    void deleteRear() {
        if (isEmpty()) {
            cout<<"Deque is empty";
        }
        if (front == rear) {  
            front = -1;
            rear = -1;
        } else {
            rear = (rear - 1 + capacity) % capacity;
        }
        size--;
    }


    void display() {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return;
        }

        cout << "Deque elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the deque: ";
    cin >> capacity;

    Deque dq(capacity);
    int choice, value;

    do {
        cout << "\nDeque Menu:\n";
        cout << "1. Add to Front\n";
        cout << "2. Add to Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display Deque\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "Enter value to add to front: ";
                cin >> value;
                
                    dq.addFront(value);
                
                
                break;
            case 2:
                cout << "Enter value to add to rear: ";
                cin >> value;
                break;
            case 3:
                
                    dq.deleteFront();
                    cout << "Deleted from front." << endl;
                break;
            case 4:
                    dq.deleteRear();
                    cout << "Deleted from rear." << endl;
                
                break;
            case 5:
                dq.display();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

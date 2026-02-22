//---------------------------Queue---------------------------
// #include <iostream>
// #include <stdexcept>

// using namespace std;

// static const int maxSize = 5;

// class Queue
// {
// private:
//     int queueArray[maxSize];
//     int front;
//     int rear;
//     int count;

// public:
//     Queue();
//     bool isEmpty();
//     bool isFull();
//     void enqueue(int data);
//     int dequeue();
//     int peek();
//     void display();
//     int size();
// }; // End of class Queue

// Queue::Queue()
// {
//     front = 0;
//     rear = -1;
//     count = 0;
// } // End of Queue()

// bool Queue::isEmpty()
// {
//     return (count == 0);
// } // End of isEmpty()

// bool Queue::isFull()
// {
//     return (count == maxSize);
// } // End of isFull()

// void Queue::enqueue(int data)
// {
//     if (isFull())
//     {
//         cout << "Queue Overflow\n";
//     }
//     else
//     {
//         rear = (rear + 1) % maxSize;
//         queueArray[rear] = data;
//         count++;
//     }
// } // End of enqueue()

// int Queue::dequeue()
// {
//     if (isEmpty())
//         throw runtime_error("Queue is empty");

//     int retValue = queueArray[front];
//     front = (front + 1) % maxSize;
//     count--;

//     return retValue;
// } // End of dequeue()

// int Queue::peek()
// {
//     if (isEmpty())
//         throw runtime_error("Queue is empty");

//     return queueArray[front];
// } // End of peek()

// int Queue::size()
// {
//     return count;
// } // End of size()

// void Queue::display()
// {
//     if (isEmpty())
//     {
//         cout << "Queue is empty\n";
//     }
//     else
//     {
//         int index = front;
//         for (int i = 0; i < count; i++)
//         {
//             cout << queueArray[index] << "\n";
//             index = (index + 1) % maxSize;
//         }
//     }
// } // End of display()

// int main()
// {
//     Queue q;

//     try
//     {
//         q.enqueue(1);
//         q.enqueue(2);
//         q.enqueue(3);
//         q.enqueue(4);

//         cout << "Queue Items : \n";
//         q.display();

//         cout << "Front Item : " << q.peek() << "\n";
//         cout << "Total items : " << q.size() << "\n";
//         cout << "Dequeued Item : " << q.dequeue() << "\n";

//         cout << "Queue Items : \n";
//         q.display();

//         q.enqueue(5);

//         cout << "Queue Items : \n";
//         q.display();

//         cout << "Dequeued Item : " << q.dequeue() << "\n";
//         cout << "Dequeued Item : " << q.dequeue() << "\n";
//         cout << "Dequeued Item : " << q.dequeue() << "\n";
//         cout << "Dequeued Item : " << q.dequeue() << "\n";

//         cout << "Queue Items : \n";
//         q.display();
//     }
//     catch (const exception& e)
//     {
//         cout << e.what() << "\n";
//     }

//     return 0;
// } // End of main()


//----------------TRaversal_linked_lists
// TRAVERSAL
#include <iostream>
using namespace std;

struct Node{
    public: 
        int data;
        Node* next;
};
void printList(Node* next){
    cout << " Traversing the list: ";
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* head = new Node(5, nullptr);
    head->next =  new Node(10, nullptr);
    head->next->next = new Node(15, nullptr);

    printList(head);
}
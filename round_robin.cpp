#include <iostream>
using namespace std;

struct Node {
    int userId;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insertUser(int userId) {
        Node* newNode = new Node();
        newNode->userId = userId;

        if (head == nullptr) {
            head = newNode;
            newNode->next = head; // Point back to itself to form a circle
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void roundRobinScheduling(int timeQuantum) {
        if (head == nullptr) {
            cout << "No users in the list." << endl;
            return;
        }

        Node* current = head;
        cout << "Printing Task Schedule:" << endl;
        do {
            cout << "User " << current->userId << " is printing." << endl;
            // Simulating printing task
            // Assuming it takes one time unit to print
            for (int i = 0; i < timeQuantum; ++i) {
                // Print time unit
            }
            current = current->next;
        } while (current != head);
    }

    void displayMenu() {
        cout << "Menu:\n"
             << "1. Add User\n"
             << "2. Simulate Round-Robin Scheduling\n"
             << "3. Exit\n";
    }
};

int main() {
    CircularLinkedList userList;
    int choice, userId, timeQuantum;

    do {
        userList.displayMenu();
        cout << "Enter your choice: ";
        
        // Validate input to ensure it's an integer
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear(); // clear input buffer to restore cin to a usable state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore last input
        }

        switch (choice) {
            case 1:
                cout << "Enter user ID: ";
                while (!(cin >> userId)) {
                    cout << "Invalid input. Please enter a number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                userList.insertUser(userId);
                break;
            case 2:
                if (userList.head == nullptr) {
                    cout << "No users in the list. Please add users first." << endl;
                    break;
                }
                cout << "Enter time quantum for round-robin scheduling: ";
                while (!(cin >> timeQuantum)) {
                    cout << "Invalid input. Please enter a number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                userList.roundRobinScheduling(timeQuantum);
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 3);

    return 0;
}
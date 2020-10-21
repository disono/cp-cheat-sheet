#include "main.h"
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

// function prototype
void voidFunction();

int funcWithParams(int amount, int workHours);

// parameters with pass by reference
int funcTotal(float &total);

string funcOptParams(string value = "Default Value");

string funcWithArrays(string names[]);

struct students {
    string name;
    int age;
};

class BankAccount {
private:
    float balance;

public:
    BankAccount();

    void Deposit(float);

    void WithDraw();

    float getBalance();
};

void BankAccount::WithDraw() {
    balance = 0;
}

float BankAccount::getBalance() {
    return balance;
}

void BankAccount::Deposit(float dep) {
    balance = balance + dep;
}

BankAccount::BankAccount() {
    cout << "Constructor" << endl;
}

struct Node {
    int data;
    Node *link;
};
typedef Node *nodePtr;

void insert(nodePtr &head, int data);

int main() {
    // data representation
    // declare variables
    const int c = 3;                // Constants must be initialized, cannot assign to
    bool bolTrue = true;            // true or false, may also use int (1 or 0)
    int a10[10];                    // Array of 10 ints (a[0] through a[9])
    int a3[] = {0, 1, 2};           // Initialized array (or a[3]={0,1,2}; )
    a10[0] = 1;
    cout << c << ", " << bolTrue << ", " << a3[0] << "\n";

    // get input from user
    int qty = 0;
    std::cout << "Enter number: ";
    std::cin >> qty;
    std::cout << "Quantity: " << qty << "\n";;

    // flow control
    // conditions
    // if then
    // boolean operators: <, >, ==, >=, <=, !=
    std::string sayHello = "hello";
    if (sayHello == "hello") std::cout << "Hello True" << "\n";
    int xNum = 3;
    if (xNum > 3) {
        std::cout << "xNum is greater than 3" << endl;
    } else if (xNum < 3) {
        std::cout << "xNum is less than 3" << endl;;
    }
    if (xNum > 0 && xNum <= 3) {
        std::cout << "xNum is correct range" << endl;;
    }

    // switch case
    int xSwitch = 3;
    switch (xSwitch) {
        case 1:
            cout << "xSwitch Value: 1";
            break;
        case 2:
            cout << "xSwitch Value: 2";
            break;
        case 3:
            cout << "xSwitch Value: 3";
            break;
        default:
            cout << "Default";
    }

    // loop
    // for
    int intFor = 10;
    for (int i = 0; i < intFor; i++) {
        cout << "For Number: " << i << endl;
    }

    // while
    int intLoop = 0;
    while (intLoop < 3) {
        cout << "While Number: " << intLoop << endl;
        intLoop++;
    }

    // Do While
    int intDoWhile = 0;
    do {
        cout << "Do While Number: " << intDoWhile << endl;
        intDoWhile++;
    } while (intDoWhile < 3);

    string correctPassword = "1234";
    string userPassword;
    do {
        cout << "Your Password: " << endl;
        cin >> userPassword;
    } while (correctPassword != userPassword);

    // functions
    // cctype functions: isdigit(char), isalpha(char), islower(char)
    // sctdlib: rand(), srand(int)
    cout << "Password Length: " << correctPassword.length() << endl;
    voidFunction();
    cout << "Salary: " << funcWithParams(1, 10) << endl;
    float addressTotal = 0;
    cout << "Total: " << funcTotal(addressTotal) << ", " << addressTotal << endl;
    cout << "Function with default param value: " << funcOptParams() << endl;
    string names[2] = {"Name 1", "Name 2"};
    cout << funcWithArrays(names) << endl;

    // file open
    ifstream inputFileA;
    ifstream inputFileB;
    string passPhrase;
    inputFileA.open("sample.txt");
    if (!inputFileA.fail()) {
        while (inputFileA >> passPhrase) {
            cout << "The phrase is: " << passPhrase << endl;
            cout << "What is your answer?";
        }
    }
    inputFileA.close();

    // file content append
    // remove ios::app overwrite (Seek to end before each write.)
    ofstream outputFileA;
    outputFileA.open("sample.txt", ios::app);
    outputFileA << "Write" << 200 << endl;
    outputFileA.close();

    // data types
    students student1;
    student1.name = "Student 1";
    student1.age = 10;
    cout << student1.name << student1.age << endl;
    students classRoom[100];
    classRoom[0].name = "Student 2";
    classRoom[1].name = "Student 3";
    cout << classRoom[0].name << ", " << classRoom[1].name << endl;

    // class
    BankAccount checking;
    BankAccount savings;
    checking.Deposit(100);
    cout << "Checking: " << checking.getBalance() << endl;

    // pointers
    int v1 = 0;
    int *p1;
    p1 = &v1;    // point to v1 or assign address of pointer, holds the address v1
    *p1 = 42;    // change value of v1
    cout << "v1: " << v1 << " p1: " << *p1 << endl;

    // linked list
    nodePtr head;
    head = new Node;
    head->data = 20;
    head->link = NULL;

    insert (head, 30);

    nodePtr tmp;
    tmp = head;

    while (tmp != NULL) {
        cout << tmp->data << endl;
        tmp = tmp->link;
    }

    return 0;
}

// function header
void voidFunction() {
    cout << "Void function call";
}

int funcWithParams(int amount, int workHours) {
    return amount * workHours;
}

int funcTotal(float &total) {
    total = total + 1;
    return total;
}

// function with default value in param
string funcOptParams(string value) {
    return value;
}

string funcWithArrays(string names[]) {
    return names[0];
}

///////////////////////////////////////////////////
// Function to create a new node, and add it to the front of the list
///////////////////////////////////////////////////
void insert(nodePtr& head, int data) {
    nodePtr tempPtr;
    tempPtr = new Node;
    tempPtr->data = data;
    tempPtr->link = head;
    head = tempPtr;
}


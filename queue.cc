#include<bits/stdc++.h>
using namespace std;
#define max 10
int queue1[max];
int front = -1, rear = -1;

void enqueue(int value){
    if(rear == max - 1){
        cout << "Queue Overflow" << endl;
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        queue1[rear] = value;
    }
}


int dequeue(){
    if(front == -1 || front > rear){
        cout << "Queue Underflow" << endl;
        return -1;
    }
    else{
        int val = queue1[front];
        front++;
        return val;
    }
}


void print(){
    if(front == -1 || front > rear){
        cout << "Queue is empty" << endl;
    } else {
        for(int i = front; i <= rear; i++){
            cout << queue1[i] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int value;
    int choice;
    while(true){
        cout << "Enter Your Choice" << endl << "choice 1 = enqueue" << endl << "choice 2 = dequeue" << endl << "choice 3 = print" << endl << "Choice 4 = Exit" << endl;
        cin >> choice;
        switch(choice){
            case 1:
            cin >> value;
            enqueue(value);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            print();
            break;

            case 4:
            cout << "Exited" << endl;
            return 0;

            default:
            cout << "invalid choice" << endl;
            break;
        }
    }
}

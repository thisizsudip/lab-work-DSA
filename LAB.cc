#include<bits/stdc++.h>
using namespace std;
#define max 10
int stack1[max];
int top = -1;
void push(int value){
    if(top == max - 1){
        cout << "Error! Stack Overflow" << endl;
    }
    else{
        top++;
        stack1[top] = value;
    }
}



int pop(){
    if(top == -1){
        cout << "Error! Stack Underflow" << endl;
        return -1;
    }
    else{
        stack1[top--];
        return stack1[top--];
    }
}

void print(){
    for(int i = 0; i < max; i++){
        cout << stack1[i] << " ";
    }
    cout << endl;
}
int main(){
    int value;
    int choice;
    while(true){
        cout << "push = 1" << endl << "pop = 2" << endl << "exit = 3" << endl << "array out = 4" << endl;
        cin >> choice;
    switch(choice){
    case 1:
        cin >> value;
        push(value);
        break;

    case 2:
        pop();
        break;

    case 3:
        cout << "EXITED";
        break;

    case 4:
        for(int i = 0; i < max; i++){
            cout << stack1[i] << " ";
            }
            cout << endl;
        print();
            break;
    default:
        cout << "invalid input << endl";
        break;
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
#define max 10
int stack1[max];
int top = -1;
/*
void push(int value){
    if(top == max - 1){
        cout << "Error! Stack Overflow" << endl;
    }
    else{
        top++;
        stack1[top] = value;
    }
}
*/
void decimal(int n){
    while(n > 0){
        int temp = n % 2;
        top++;
        stack1[top] = temp;
        n = n / 2;
    }
}


/*int pop(){
    if(top == -1){
        cout << "Error! Stack Underflow" << endl;
        return -1;
    }
    else{
        stack1[top--];
        return stack1[top--];
    }
}
*/

void print(){
    int m = top;
    for(int i = 0; i < m; i++){
        cout << stack1[top--] << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    decimal(n);
    print();
}

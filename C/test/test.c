#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

struct Node {
    int data;
    struct Node* next;
};//เป็นโครงสร้างข้อมูลที่ใช้เก็บข้อมูลและตำแหน่งของโหนดใน linked list สำหรับ stack ของเรา โค้ดด้านล่างนี้เป็นส่วนของโครงสร้างนี้:

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}//ฟังก์ชันนี้ใช้สำหรับสร้างโหนดใหม่ใน linked list

void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
}//ฟังก์ชันนี้ใช้เพิ่มโหนดใหม่ลงใน stack โดยให้โหนดใหม่เป็นโหนดบนสุด:+



int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Error: Stack is empty\n");
    }
    struct Node* temp = *top;
    *top = (*top)->next;
    int poppedValue = temp->data;
    free(temp);
    return poppedValue;
}//ฟังก์ชันนี้ใช้ลบโหนดบนสุดออกจาก stack และคืนค่าข้อมูลในโหนดนั้น:-

int performOperation(char op, int op1, int op2) {
    int result;
    if (op == '+') {
        result = op1 + op2;
    } else if (op == '-') {
        result = op1 - op2;
    } else if (op == '*') {
        result = op1 * op2;
    } else if (op == '/') {
        result = op1 / op2;
    } else if (op == '^') {
        result = pow(op1,op2);
    } else {
        printf("Error: Invalid operator\n");
    }
    return result;
}

int evaluatePostfix(char postfix[]) {
    struct Node* stack = NULL;
    printf("=====================\n");
    printf("Step   Symbol   Stack\n");
    printf("=====================\n");

    for (int i = 0; postfix[i] != '\0'; i++) {
        printf("%-6d %-8c ", i + 1, postfix[i]);
        if (isdigit(postfix[i])) {
            push(&stack, postfix[i] - '0');
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);

            int result = performOperation(postfix[i], operand1, operand2);
            push(&stack, result);
        }
        struct Node* temp = stack;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    return pop(&stack);
}

int main() {
    char postfix[100];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);

    return 0;
}
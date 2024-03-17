#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Node {
    union {
        int data;
        char str[100];
    };
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* createNodeStr(char* data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->str, data);
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

void push(struct Stack* stack, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

void pushStr(struct Stack* stack, char* data) {
    struct Node* newNode = createNodeStr(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

int popInt(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    int data = stack->top->data;
    struct Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

char* popStr(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    char* data = strdup(stack->top->str);
    struct Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

int performOperationInt(int operand1, int operand2, char operator) {
    switch (operator) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        default:
            printf("Error: Unknown operator\n");
            exit(EXIT_FAILURE);
    }
}

char* performOperationStr(char* operand1, char* operand2, char operator) {
    char result[100];
    switch (operator) {
        case '+': 
            sprintf(result, "(%s+%s)", operand2, operand1);
            break;
        case '-': 
            sprintf(result, "(%s-%s)", operand2, operand1);
            break;
        case '*': 
            sprintf(result, "(%s*%s)", operand2, operand1);
            break;
        case '/': 
            sprintf(result, "(%s/%s)", operand2, operand1);
            break;
        default:
            printf("Error: Unknown operator\n");
            exit(EXIT_FAILURE);
    }
    return strdup(result);
}

void printStack(struct Stack* stack) {
    struct Node* temp = stack->top;
    while (temp != NULL) {
        if (isdigit(temp->str[0])) {  // Check for integer type
            printf("%d ", temp->data);
        } else {
            printf("%s ", temp->str);
        }
        temp = temp->next;
    }
    printf("\n");
}

int evaluatePostfixInt(char* expression) {
    struct Stack stack;
    stack.top = NULL;

    int step = 1;
    for (int i = 0; expression[i] != '\0'; ++i) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
            // printStack(&stack);
            printf("%d\t%c\t", step, expression[i]);
            printStack(&stack);
            printf("\n");
            step = step + 1;
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            int operand2 = popInt(&stack);
            int operand1 = popInt(&stack);
            int result = performOperationInt(operand1, operand2, expression[i]);
            push(&stack, result);
            step++;
            printf("%d\t%c\t", step, expression[i]);
            printStack(&stack);
            printf("\n");

        }
    }
    return popInt(&stack);
}

char* evaluatePostfixStr(char* expression) {
    struct Stack stack;
    stack.top = NULL;

    int step = 1;
    for (int i = 0; expression[i] != '\0'; ++i) {
        if (isalpha(expression[i])) { // ตรวจสอบว่าเป็นตัวอักษร
            char operand[2] = {expression[i], '\0'};
            pushStr(&stack, operand);
            printf("%d\t%c\t", step, expression[i]);
            printStack(&stack);
            printf("\n");
            step++;
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            char* operand2 = popStr(&stack);
            char* operand1 = popStr(&stack);
            char* result = performOperationStr(operand1, operand2, expression[i]);
            pushStr(&stack, result);
            printf("%d\t%c\t", step, expression[i]);
            printStack(&stack);
            printf("\n");
            step++;
        }
    }

    return popStr(&stack);
}

int main() {
    char postfixExpression[100];
    char a;  // ประกาศตัวแปร a
    
    printf("Enter: ");
    scanf("%s", &a);  // เพิ่ม & เพื่อรับค่าตัวแปร a

    if (a == '1') {
        printf("Enter: ");
        scanf("%s", postfixExpression);

        int result = evaluatePostfixInt(postfixExpression);  // ส่งผ่านนิพจน์ไปยังฟังก์ชัน
        printf("Result: %d\n", result);  // แสดงผลลัพธ์ที่ถูกต้อง

    } else {
        printf("Enter: ");
        scanf("%s", postfixExpression);

        char* result = evaluatePostfixStr(postfixExpression);  // ส่งผ่านนิพจน์ไปยังฟังก์ชัน
        printf("Result: %s\n", result);  // แสดงผลลัพธ์ที่ถูกต้อง

        free(result); // ปล่อยหน่วยความจำที่จองไว้
    }

    return 0;
}
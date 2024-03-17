#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAX_STR 100

typedef struct Node {
    char data[MAX_STR];
    struct Node* next;
} Node;

Node* top = NULL;

// function เพิ่มข้อมูลลง stack
void push(const char* x) {
    Node* n = malloc(sizeof(Node));
    strcpy(n->data, x);
    n->next = top;
    top = n;
}

// function ลบข้อมูลตัวสุดท้าย/ตัวบนสุด ใน stack และส่งคืนค่าที่ลบออก
char* pop() {
    if (top == NULL) {
        return NULL;
    }

    char* p = malloc(MAX_STR * sizeof(char));
    Node* n = top;
    top = top->next;
    strcpy(p, n->data);
    free(n);
    return p;
}

// function เช็คข้อมูลตัวสุดท้าย/ตัวบนสุด(top) ใน stack ว่าว่างหรือไม่ และส่งคืนข้อมูลที่อยู่ตำแหน่ง top
char* stacktop() {
    if (top == NULL) {
        return NULL;
    } else {
        return top->data;
    }
}

// function เช็ค operator
void calculate(char* ck) {
    char* operand2 = pop();
    char* operand1 = pop();
    char temp[MAX_STR];

    if (*ck == '+' || *ck == '-' || *ck == '*' || *ck == '/' || *ck == '^') {
        sprintf(temp, "(%s%c%s)", operand1, *ck, operand2);
        push(temp);
    }

    free(operand1);
    free(operand2);
}

void printstack() {
    Node* current = top;
    int count = 0;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    for (int i = 0; i < count; i++) {
        Node* step = top;
        for (int j = count - i - 1; j > 0; j--) {
            step = step->next;
        }
        printf("%s", step->data);
        if (i != count - 1) {
            printf(", ");
        }
    }
}

int main() {
    printf("Enter postfix expression: ");
    char str[MAX_STR];
    scanf("%s", str);

    printf("----------------------------------------------------\n");
    printf("   %-10s%-13s%s\n", "Step", "Symbol", "Stack");
    printf("----------------------------------------------------\n");
    for (int i = 0; i < strlen(str); i++) {
        printf("    %-10d %-11c", i + 1, str[i]);
        if (isalpha(str[i]) || isdigit(str[i])) {
            char temp[MAX_STR];
            sprintf(temp, "%c", str[i]);
            push(temp);
        } else {
            calculate(&str[i]);
        }
        printstack();
        printf("\n");
    }
    printf("----------------------------------------------------\n");
    printf("Ans = %s\n", stacktop());

    while (top != NULL) {
        free(pop());
    }

    return 0;
}

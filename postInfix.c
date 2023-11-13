#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack
{
    int top;
    char items[MAX_SIZE];
};
void push(struct Stack *s, char value);
char pop(struct Stack *s);
int isOperand(char ch);
int isOperator(char ch);
void postfixToInfix(char postfix[], char infix[]);

int main() 
{
    char postfix[MAX_SIZE];
    char infix[MAX_SIZE];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    postfixToInfix(postfix, infix);
    
    printf("Infix expression: %s\n", infix);

    return 0;
}

void push(struct Stack *s, char value) 
{
    if (s->top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    s->items[++s->top] = value;
}

char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return s->items[s->top--];
}

int isOperand(char ch) 
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int isOperator(char ch) 
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

void postfixToInfix(char postfix[], char infix[]) 
{
    struct Stack stack;
    stack.top = -1;

    for (int i = 0; postfix[i] != '\0'; i++) 
    {
        if (isOperand(postfix[i])) 
        {
            push(&stack, postfix[i]);
        } 
        else if (isOperator(postfix[i])) 
        {
            char operand2 = pop(&stack);
            char operand1 = pop(&stack);
            snprintf(infix, MAX_SIZE, "(%c%c%c)", operand1, postfix[i], operand2);
            push(&stack, infix[0]);
        }
    }

    if (stack.top != 0) 
    {
        printf("Invalid postfix expression\n");
        exit(EXIT_FAILURE);
    }
}
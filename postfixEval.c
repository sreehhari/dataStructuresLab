#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

struct Stack 
{
    int top;
    int items[MAX_SIZE];
};

void push(struct Stack *stack, int value);
int pop(struct Stack *stack);
int isOperator(char c);
int precedence(char c);
int isAlphanumeric(char c);
int evaluatePostfix(char postfix[]);

int main() 
{
    char postfix[MAX_SIZE];

    printf("Enter postfix expression ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);

    if (result != -1) 
    {
        printf("Result %d\n", result);
        exit(0); 
    } 
    else 
    {
        fprintf(stderr, "Invalid \n");
        exit(1); 
    }

    return 0;
}

void push(struct Stack *stack, int value) 
{
    if (stack->top == MAX_SIZE - 1) 
    {
        fprintf(stderr, "Stack overflow\n");
        exit(1); 
    }
    stack->items[++stack->top] = value;
}

int pop(struct Stack *stack) 
{
    if (stack->top == -1) 
    {
        fprintf(stderr, "Stack underflow\n");
        exit(1); 
    }
    return stack->items[stack->top--];
}

int isOperator(char c) 
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char c) 
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else
        return 0;
}

int isAlphanumeric(char c) 
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

int evaluatePostfix(char postfix[]) 
{
    struct Stack stack;
    stack.top = -1;

    for (int i = 0; postfix[i] != '\0'; i++) 
    {
        if (isdigit(postfix[i]))
        {
            push(&stack, postfix[i] - '0');
        } 
        else if (isOperator(postfix[i])) 
        {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);

            switch (postfix[i]) 
            {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0) 
                    {
                        fprintf(stderr, "invalid\n");
                        return -1; 
                    }
                    push(&stack, operand1 / operand2);
                    break;
                default:
                    fprintf(stderr, "invalid\n");
                    return -1; 
            }
        } 
        else 
        {
            fprintf(stderr, " Invalid\n");
            return -1; 
        }
    }

    if (stack.top == 0) 
    {
        return pop(&stack);
    } 
    else 
    {
        fprintf(stderr, " Invalid \n");
        return -1;
    }
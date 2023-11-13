#include <stdio.h>

void readPolynomial(int poly[], int n) 
{
    printf("Enter the coefficients for the polynomial:\n");
    for (int i = 0; i <= n; i++) 
    {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly[i]);
    }
}

void displayPolynomial(int poly[], int n) 
{
    for (int i = n; i >= 0; i--) 
    {
        if (i == 0) 
        {
            printf("%d", poly[i]);
        } 
        else 
        {
            printf("%dx^%d + ", poly[i], i);
        }
    }
    printf("\n");
}

void addPolynomials(int poly1[], int poly2[], int result[], int n) 
{
    for (int i = 0; i <= n; i++) 
    {
        result[i] = poly1[i] + poly2[i];
    }
}

int main() 
{
    int degree;
    printf("Enter the degree of the polynomials: ");
    scanf("%d", &degree);

    int poly1[degree + 1], poly2[degree + 1], result[degree + 1];

    printf("For the first polynomial:\n");
    readPolynomial(poly1, degree);

    printf("For the second polynomial:\n");
    readPolynomial(poly2, degree);

    addPolynomials(poly1, poly2, result, degree);

    printf("First Polynomial: ");
    displayPolynomial(poly1, degree);

    printf("Second Polynomial: ");
    displayPolynomial(poly2, degree);

    printf("Resultant Polynomial: ");
    displayPolynomial(result, degree);

    return 0;
}



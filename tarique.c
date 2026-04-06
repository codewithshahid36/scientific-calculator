/* project: scientific calculator
    language:c

    description:
    This program performs basic and scientific calculator
    Such as addition,subtraction,square root
    trigonometric funtion etc
    
    Author: Shahid Hussain
  */  
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

void Menu();
void addition();
void subtraction();
void multiplication();
void division();
void square_root();
void cube_root();
void square();
void cube();
void power();
void factorial();
void trigonometry();
void inverse_trigonometry();
void logarithm();
void degree_to_radian();
void radian_to_degree();
long long fact(int n);
void permutation();
void combination();
void matrix_add();
void matrix_sub();
void matrix_mul();

int main()
{
    int choice;
    char cont;

    do
    {
        Menu();
        printf("\t\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: square_root(); break;
            case 6: cube_root(); break;
            case 7: square(); break;
            case 8: cube(); break;
            case 9: power(); break;
            case 10: factorial(); break;
            case 11: trigonometry(); break;
            case 12: inverse_trigonometry(); break;
            case 13: logarithm(); break;
            case 14: permutation(); break;
            case 15: combination(); break;
            case 16: degree_to_radian(); break;
            case 17: radian_to_degree(); break;
            case 18: matrix_add(); break;
            case 19: matrix_sub(); break;
            case 20: matrix_mul(); break;
            case 0:
                printf("\t\t\tCalculator Closed.\n");
                return 0;
            default:
                printf("\t\t\tInvalid choice!\n");
        }

        printf("\n\t\t\tDo you want to continue?: ");
        printf("\n\t\t\tEnter 1 for Yes or 0 for No :\n");
        scanf(" %c", &cont);

    } while (cont == '1');

    printf("\t\t\tCalculator Closed.\n");
    return 0;
}

// ================= MENU =================
void Menu()
{
    printf("\n\t\t\t+-----------------------------------------+\n");
    printf("\t\t\t|       SCIENTIFIC CALCULATOR             |\n");
    printf("\t\t\t+-----------------------------------------+\n");
    printf("\t\t\t| 1. Add          2. Subtract             |\n");
    printf("\t\t\t| 3. Multiply     4. Divide               |\n");
    printf("\t\t\t| 5. sqrt(x)      6. cbrt(x)              |\n");
    printf("\t\t\t| 7. x^2          8. x^3                  |\n");
    printf("\t\t\t| 9. x^y          10. Factorial           |\n");
    printf("\t\t\t| 11. Trigo       12. Inverse Trigo       |\n");
    printf("\t\t\t| 13. Log         14. nPr                 |\n");
    printf("\t\t\t| 15. nCr         16. Deg->Rad            |\n");
    printf("\t\t\t| 17. Rad->Deg    18. Matrix Add          |\n");
    printf("\t\t\t| 19. Matrix Sub  20. Matrix Mul          |\n");
    printf("\t\t\t| 0. Exit                                 |\n");
    printf("\t\t\t+-----------------------------------------+\n");
}

// ================= BASIC =================
void addition() {
    double a, b;
    printf("\t\t\tEnter the first number: ");
    scanf("%lf", &a);
    printf("\t\t\tEnter the second number: ");
    scanf("%lf",&b);
    printf("\t\t\tAddition = %.2lf\n", a + b);
}

void subtraction() {
    double a, b;
    printf("\t\t\tEnter the first number: ");
    scanf("%lf", &a);
    printf("\t\t\tEnter the second number: ");
    scanf("%lf",&b);
    printf("\t\t\tSubtraction = %.2lf\n", a - b);
}

void multiplication() {
    double a, b;
    printf("\t\t\tEnter the first number: ");
    scanf("%lf", &a);
    printf("\t\t\tEnter the second number: ");
    scanf("%lf",&b);
    printf("\t\t\tMultiplication = %.2lf\n", a * b);
}

void division() {
    double a, b;
    printf("\t\t\tEnter the  first number: ");
    scanf("%lf", &a);
    printf("\t\t\tEnter the second number");
    scanf("%lf",&b);
    if (b == 0) {
        printf("\t\t\tError: Division by zero\n");
        return;
    }
    printf("\t\t\tDivision = %.2lf\n", a / b);
}

// ================= POWER =================
void square_root() {
    double x;
    printf("\t\t\tEnter the number: ");
    scanf("%lf", &x);
    if (x < 0) { printf("\t\t\tError!  Try Again :\n"); return; }
    printf("\t\t\tsquare root = %.2lf\n", sqrt(x));
}

void cube_root() {
    double x;
    printf("\t\t\tEnter the number: ");
    scanf("%lf", &x);
    printf("\t\t\tcube root = %.2lf\n", cbrt(x));
}

void square() {
    double x;
    printf("\t\t\tEnter the number: ");
    scanf("%lf", &x);
    printf("\t\t\tx^2 = %.2lf\n", x * x);
}

void cube() {
    double x;
    printf("\t\t\tEnter the number: ");
    scanf("%lf", &x);
    printf("\t\t\tx^3 = %.2lf\n", x * x * x);
}

void power() {
    double a, b;
    printf("\t\t\tEnter  the base: ");
    scanf("%lf", &a);
    printf("\t\t\tEnter the power: ");
    scanf("%lf",&b);
    printf("\t\t\tpower (a^b) = %.2lf\n", pow(a, b));
}

// ================= FACTORIAL =================
void factorial() {
    int n;
    long long f = 1;
    printf("\t\t\tEnter the number: ");
    scanf("%d", &n);
    if (n < 0) { printf("\t\t\tError!  Try Again :\n"); return; }
    for (int i = 1; i <= n; i++) f *= i;
    printf("\t\t\tFactorial = %lld\n", f);
}

// ================= TRIGO =================
void trigonometry() {
    int ch;
    double angle, rad;
    printf("\t\t\t1.sin\n");
    printf("\t\t\t2.cos\n");
    printf("\t\t\t3.tan\n");
    printf("\t\t\tEnter the choice: ");
    scanf("%d",&ch);
    printf("\t\t\tEnter the angle : ");
    scanf("%lf",&angle);
    rad = angle * (PI / 180);

    if (ch == 1) 
    printf("\t\t\tsin(%.2lf) = %.2lf\n",angle,sin(rad));
    else if (ch == 2)
     printf("\t\t\tcos(%.2lf)  = %.2lf\n",angle,cos(rad));
    else if (ch == 3)
     printf("\t\t\ttan(%.2lf)  = %.2lf\n",angle,tan(rad));
}

// ================= INVERSE =================
void inverse_trigonometry() {
    int ch;
    double x;
    printf("\t\t\t1.asin\n");
    printf("\t\t\t2.acos\n");
    printf("\t\t\t3.atan\n");
    printf("\t\t\tEnter the choice: ");
    scanf("%d", &ch);
    printf("\t\t\tEnter the value : ");
    scanf("%lf",&x);

    if (ch == 1 && x >= -1 && x <= 1)
        printf("\t\t\tasin(%lf) = %.2lf\n",x,asin(x) * 180 / PI);
    else if (ch == 2 && x >= -1 && x <= 1)
        printf("\t\t\tacos(%lf) = %.2lf\n",x,acos(x) * 180 / PI);
    else if (ch == 3)
        printf("\t\t\tatan(%lf) = %.2lf\n",x,atan(x) * 180 / PI);
}

// ================= LOG =================
void logarithm() {
    int ch;
    double x;
    printf("\t\t\t1.log10\n"); 
    printf("\t\t\t2.ln\n");
    printf("\t\t\tEnter the choice: ");
    scanf("%d", &ch);
    printf("\t\t\tEnter the value :");
    scanf("%lf",&x);

    if (x <= 0) { printf("\t\t\tError!  Try Again :\n"); return; }

    if (ch == 1)
     printf("\t\t\tlog10(%lf) = %.2lf\n",x,log10(x));
    else if (ch == 2)
     printf("\t\t\tln(%lf) = %.2lf\n",x,log(x));
}

// ================= CONVERSION =================
void degree_to_radian() {
    double d;
    printf("\t\t\tEnter  the degree: ");
    scanf("%lf", &d);
    printf("\t\t\tRadian = %.2lf\n", d * (PI / 180));
}

void radian_to_degree() {
    double r;
    printf("\t\t\tEnter  the radian: ");
    scanf("%lf", &r);
    printf("\t\t\tDegree = %.2lf\n", r * (180 / PI));
}

// ================= P&C =================
long long fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

void permutation() {
    int n, r;
    printf("\t\t\tEnter the n: ");
    scanf("%d", &n);
    printf("\t\t\tEnter the r: ");
    scanf("%d",&r);
    if (r > n) { printf("\t\t\tError!  Try Again :\n"); return; }
    printf("\t\t\tnPr = %lld\n", fact(n) / fact(n - r));
}

void combination() {
    int n, r;
    printf("\t\t\tEnter the n: ");
    scanf("%d", &n);
    printf("\t\t\tEnter the r: ");
    scanf("%d",&r);
    if (r > n) { printf("\t\t\tError!  Try Again :\n"); return; }
    printf("\t\t\tnCr  = %lld\n", fact(n) / (fact(r) * fact(n - r)));
}

// ================= MATRIX =================
void matrix_add() {
    int r, c, a[10][10], b[10][10];
    printf("\t\t\tEnter the rows   : ");
    scanf("%d",&r);
    printf("\t\t\tEnter the coloumns: ");
    scanf("%d",&c);

    printf("\t\t\tEnter matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\t\t\tEnter matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("\t\t\tMatric C = Matrix A + Matrix B :\n");
    printf("\t\t\tMatric C :\n");
    for (int i = 0; i < r; i++) {
        printf("\t\t\t");
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
}

void matrix_sub() {
    int r, c, a[10][10], b[10][10];
    printf("\t\t\tEnter the rows   : ");
    scanf("%d",&r);
    printf("\t\t\tEnter the coloumns: ");
    scanf("%d",&c);
    
    printf("\t\t\tEnter matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\t\t\tEnter matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("\t\t\tMatric C = Matrix A - Matrix B :\n");
    printf("\t\t\tMatric C :\n");
    for (int i = 0; i < r; i++) {
        printf("\t\t\t");
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }
}

void matrix_mul() {
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], res[10][10];
    printf("\t\t\tEnter the rows(r1)  : ");
    scanf("%d",&r1);
    printf("\t\t\tEnter the coloumns(c1): ");
    scanf("%d",&c1);

    printf("\t\t\tEnter the rows(r2)   : ");
    scanf("%d",&r2);
    printf("\t\t\tEnter the coloumns(c2): ");
    scanf("%d",&c2);
   

    if (c1 != r2) {
        printf("\t\t\tNot possible\n");
        return;
    }

    printf("\t\t\tEnter matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("\t\t\tEnter matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    printf("\t\t\tMatric C = Matrix A x Matrix B :\n");
    printf("\t\t\tMatric C :\n");
    for (int i = 0; i < r1; i++) {
        printf("\t\t\t");
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
                res[i][j] += a[i][k] * b[k][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <tgmath.h>

void dane(double *a, double *b, double *c);

void brakRozwiazan();

void jedenWynik(double a, double b, double x1);

void rozne(double a, double b, double x1, double x2, double delta);

int main() {
    double a, b, c;
    double x1, x2;
    double delta;

    dane(&a, &b, &c);
    delta= (b*b)-(4*a*c);
    printf("delta = %lf\n", delta);

    if (delta < 0){
        brakRozwiazan();
    }
    if (delta == 0){
        jedenWynik(a, b, x1);
    }
    if (delta > 0){
        rozne(a, b, x1, x2, delta);
    }
    return 0;
}

void rozne(double a, double b, double x1, double x2, double delta) {
    x1 = (-b - sqrt(delta)) / 2 * a;
    x2 = (-b+sqrt(delta))/2*a;
    printf("Rozwiązanie x1=%lf, x2=%lf\n", x1, x2);
}

void jedenWynik(double a, double b, double x1) {
    x1 = -b / (2 * a);
    printf("Rozwiązanie %lf", x1);
}

void brakRozwiazan() { printf("delta nie ma rozwiązań"); }

void dane(double *a, double *b, double *c) {
    printf("Podaj a: ");
    scanf("%lf" , a);
    printf("Podaj b: ");
    scanf("%lf" , b);
    printf("Podaj c: ");
    scanf("%lf" , c);
}
#include "iostream"



using namespace std;




long double r;
long double function(int x) {
    long double result = r * x * (1 - x);
    cout << r;
    cout << x;
    cout << 1 - x;
    printf("%Lf\n", result);
    return result;

}


int x_main() {
    cout << "give r and first x";
    long double x;
    unsigned long long int count = 0;


    scanf("%Lf", &r);
    scanf("%Lf", &x);
    printf("%s %Lf %s %Lf\n", "first r : ", r, "\tx : ", x);

    while (true) {
        count++;
        printf("%s %llu %s %Lf\n", "count : ", count, "\tx : ", x);
        long double result = function(x);
        x = result;
    }
}
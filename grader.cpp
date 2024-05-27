#include <iostream>
#include <cstdio>
#include "diam.h"
using namespace std;

int main(){
    int n;
    double eps;
    scanf("%d %lf", &n, &eps);
    init(n, eps);
    for (int i = 1; i <= n; ++ i){
        int op, x, y;
        scanf("%d %d %d", &op, &x, &y);
        modify(op, x, y);
    }
    printf("%.2lf\n", report());
    return 0;
}
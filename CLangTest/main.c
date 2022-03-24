//
//  main.c
//  CLangTest
//
//  Created by 김미향 on 2022/03/20.
//

#include <stdio.h>

char star[20];
int f(int n) {
    if(n>0){
        f(n-1);
        star[n]='*';
        printf("%s\n", star+1);
    }
    return 0;
}

main() {
    int n;
    scanf("%d", &n);
    f(n);
    
}


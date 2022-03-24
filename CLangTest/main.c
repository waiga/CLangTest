//
//  main.c
//  CLangTest
//
//  Created by 김미향 on 2022/03/20.
//

#include <stdio.h>

main() {
    int *p, i;
    int a[5] = {100, 90, 80, 70, 60};
    p=a;
    for(i=0; i<5; i++)
        printf("%d ", a[i]);
    printf("\n");
    for(i=0; i<5; i++)
        printf("%d ", *(p+i));
    printf("\n");
    printf("%d", *(p+0));
}



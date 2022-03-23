//
//  main.c
//  CLangTest
//
//  Created by 김미향 on 2022/03/20.
//

#include <stdio.h>

main() {
    int num;
    do {
        scanf("%d", &num);
        if (num > 0)
            if (num % 2 == 1) printf("홀수\n");
            else printf("짝수\n");
    } while (num > 0);
    
}



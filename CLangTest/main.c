//
//  main.c
//  CLangTest
//
//  Created by 김미향 on 2022/03/20.
//

#include <stdio.h>

main() {
    int num;
    while (1) {
        printf("숫자를 입력하세요 : ");
        scanf("%d", &num);
        if (num < 0) break;
        if (num == 0) continue;
        if (num % 2 == 1) printf("홀수\n");
        else printf("짝수\n");
    }
}



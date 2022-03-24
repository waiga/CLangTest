//
//  main.c
//  CLangTest
//
//  Created by 김미향 on 2022/03/20.
//

#include <stdio.h>

main() {
    int A[4][2], s, i, j;
    for(i=0; i<4; i++) {
        printf("%d번의 영어, 수학 성적을 입력하시오. :", i+1);
        for(j=0; j<2; j++)
            scanf("%d", &A[i][j]);
    }
    for(i=0; i<4; i++) {
        s=0;
        printf("%d번 총 점수 : ", i+1);
        for(j=0; j<2; j++)
            s += A[i][j];
        printf("%d\n", s);
    }
}



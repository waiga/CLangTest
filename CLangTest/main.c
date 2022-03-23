//
//  main.c
//  CLangTest
//
//  Created by 김미향 on 2022/03/20.
//

#include <stdio.h>

main() {
    int score1, score2, score3;
    printf("점수를 입력하세요 : ");
    scanf("%d", &score1);
    printf("점수를 입력하세요 : ");
    scanf("%d", &score2);
    printf("점수를 입력하세요 : ");
    scanf("%d", &score3);
    
    if (score1 >= score2 && score1 >= score3)
        printf("%d\n", score1);
        else if (score2 >= score1 && score2 >= score3)
            printf("%d\n", score2);
    else
        printf("%d\n", score3);
}



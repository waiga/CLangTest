//
//  main.c
//  CLangTest
//
//  Created by 김미향 on 2022/03/20.
//

#include <stdio.h>


main() {
    char ch;
    printf("영어 소문자를 입력하세요: ");
    scanf("%c", &ch);
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("모음\n"); break;
        default: printf("자음\n");
    }
}

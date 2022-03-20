//
//  main.c
//  CLangTest
//
//  Created by 김미향 on 2022/03/20.
//

#include <stdio.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    printf("Git Commit");
//    return 0;
//}

main() {
    int n, i, t, sum = 0;
    printf("number of integer?");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        printf("%d integer?: ", i);
        scanf("%d", &t);
        sum = sum + t;
        
    }
    printf("sum: %d\n", sum);
    printf("average: %f\n", (float)sum/n);
    return 0;
}

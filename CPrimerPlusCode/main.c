//
//  main.c
//  CPrimerPlusCode
//
//  Created by Jymn_Chen on 16/1/19.
//  Copyright © 2016年 com.timedancing. All rights reserved.
//

#include <stdio.h>

void test_sizeof() {
    printf("int has %tu bytes\n", sizeof(int));
    printf("char has %tu bytes\n", sizeof(char));
    printf("long has %tu bytes\n", sizeof(long));
    printf("long long has %tu bytes\n", sizeof(long long));
    printf("float has %tu bytes\n", sizeof(float));
    printf("double has %tu bytes\n", sizeof(double));
}

int main(int argc, const char * argv[]) {
    test_sizeof();
    
    return 0;
}

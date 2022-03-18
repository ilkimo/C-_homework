#include <stdlib.h>
#include <stdio.h>
#include "unity.h"
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>

#define ARGUMENT_EXCEPTION 1

static void testSomething() {
    TEST_ASSERT_EQUAL(0, 0);
}

int main(int argc, char *argv[]) {
    if(argc == 1) {
        UNITY_BEGIN();

        RUN_TEST(testSomething);

        UNITY_END();
    } else {
        printf("wrong args (%d args) - execution stopped at line %d\n", argc, __LINE__);
        exit(ARGUMENT_EXCEPTION);
    }
}
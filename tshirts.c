#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if (cms < 38) 
    {
        sizeName = 'S';
    } 
    else if (cms < 42) 
    {
        sizeName = 'M';
    } 
    else
    {
        sizeName = 'L';
    }
    return sizeName;
}

int testTshirtSize() {
    printf("\nTshirt size test\n");
    assert(size(5) == "error");
    assert(size(37) == 'S');
    assert(size(38) == 'M'); // test edge case
    assert(size(40) == 'M');
    assert(size(41) == 'M'); // test just below 42
    assert(size(42) == 'L'); // test edge case
    assert(size(43) == 'L');
    assert(size(100) == "error"); // test very large size
    assert(size(0) == "error"); // test very small size
    printf("All is well (maybe!)\n");
    return 0;
}


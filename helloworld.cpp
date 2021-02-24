#include <stdio.h>
using namespace std;


int main (void) {
    // print hello world for 9 times
    
    for (int i=1; i<10; ++i) {
        //cout << "hello world " << i << " times!\n";
        printf("Hello world %d times!\n",i);
    }
    return 0;
}
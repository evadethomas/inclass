#include <stdio.h>
#include <stdlib.h>
#include <execinfo.h>

void function2() {
    char* test = NULL;

    if (test==NULL) {
         void* callstack[128];
         int frames = backtrace(callstack, 128);
         char** strs = backtrace_symbols(callstack, frames);
         for (int i = 0; i < frames; ++i) {
             printf("%s\n", strs[i]);
         }
         free(strs);         
    }
}

void function1() {
    function2();
}

int main(int argc, char* argv[]) {
    function1();
}
    

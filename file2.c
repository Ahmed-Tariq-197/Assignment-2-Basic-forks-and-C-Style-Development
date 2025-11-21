\
        /* file2.c
         * Declares the hello() function and calls it from main().
         * Demonstrates how the linker resolves symbol references between files.
         */
        void hello(void);

        int main(void) {
            hello();
            return 0;
        }

\
        /* process_creation.c
         * Demonstrates process creation using fork().
         * Parent waits for child to finish to avoid zombies.
         */
        #include <stdio.h>
        #include <stdlib.h>
        #include <unistd.h>
        #include <sys/types.h>
        #include <sys/wait.h>

        int main(void) {
            pid_t pid = fork();
            if (pid < 0) {
                perror("fork");
                return 1;
            } else if (pid == 0) {
                /* Child process */
                printf("Child: This is the child process. PID: %d, PPID: %d\\n", (int)getpid(), (int)getppid());
                /* child can do more work here */
                sleep(1); /* short sleep to demonstrate ordering */
                return 0;
            } else {
                /* Parent process */
                printf("Parent: This is the parent process. PID: %d, child PID: %d\\n", (int)getpid(), (int)pid);
                /* Wait for child to finish to avoid a zombie */
                wait(NULL);
                printf("Parent: Child has finished.\\n");
            }
            return 0;
        }

\
        # Lab 5 — Process Management (CSE233):
        This project contains the code examples from Lab-5 (Process Management) demonstrating `fork()` (process creation), linker behavior across multiple                 translation units, and inspecting dynamic libraries (loader). The original lab PDF is included with the submission. fileciteturn0file0

        ## Contents
        - `process_creation.c` — fork() example (parent & child, with `wait()`)
        - `file1.c`, `file2.c` — two-file example demonstrating the role of the linker
        - `simple_program.c` — tiny program used to inspect dynamic dependencies with `ldd` (loader)
        - `Makefile` — build/run targets for each example
        - `LICENSE` — MIT license
        - `lab5_project.zip` — generated ZIP containing the entire project

        ## Prerequisites
        - GCC (GNU Compiler Collection) installed (`gcc`)
        - `make` (optional, you can also compile with `gcc` directly)
        - `ldd` (to inspect dynamic libraries)
        - `zip` (optional, used by the Makefile to create the zip archive)

        ## Build & Run (simple)
        To build everything:
        ```bash
        make
        ```
        To run each example:
        ```bash
        make run_process_creation
        make run_file_linker
        make run_simple_program
        ```

        Or run the binaries directly after `make`:
        ```bash
        ./process_creation
        ./file_linker
        ./simple_program
        ```

        ## What each example does 
        - **process_creation.c**: Creates a child process using `fork()`. Parent waits for child to finish. Demonstrates PID/PPID differences and simple parent-child synchronization.
        - **file1.c / file2.c**: Shows how the linker resolves a symbol (`hello`) defined in one file and used in another.
        - **simple_program.c**: Minimal program used with `ldd` to demonstrate which shared libraries are dynamically loaded at run time.

        ## Linker vs Loader 
        - **Linker**: Combines object files and resolves symbol references (e.g., function calls across files) and produces an executable or shared object. It's responsible for symbol resolution and ordering. See `file1.c` + `file2.c` demo.
        - **Loader**: Loads the executable into memory, sets up runtime linkages and maps shared libraries (dynamic linking). Tools like `ldd` show which dynamic libraries are required by an ELF executable.

        ## License
        This project is released under the MIT License — see `LICENSE`.


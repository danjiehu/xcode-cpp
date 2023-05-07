// hello.cpp by Bill Weinman [bw.org]
// updated 2022-05-19

// After compiling, running, and deleting a source file with Xcode, it's a good idea to clean the project before compiling another source file. This ensures that any compiled object files, temporary files, or other artifacts from the previous build are removed, preventing any potential conflicts or issues when building the next source file.

// To clean the project in Xcode, you can go to the "Product" menu, and then select "Clean" (or use the keyboard shortcut Command-Shift-K). This will remove any intermediate build files, such as object files, from the previous build.

// In addition to cleaning the project, you may also want to ensure that any changes to the source files are saved before building the next source file. This can be done by selecting "File" > "Save All" (or using the keyboard shortcut Command-Shift-S).

#include <iostream>

int main() {
    std::cout << "Hello, you!\n";
    return 0;
}

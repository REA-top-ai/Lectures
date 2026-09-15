#include <iostream>
#include <string>
#include <cstring> // Required for strlen()

int main(int, char**){

    int a = 5;
    std::cout << "int a = " << a << "\n";
    std::cout << "sizeof(int) = " << sizeof(int) << "\n";
    std::cout << "Actual memory consumed by a: " << sizeof(a) << " bytes\n\n";

    double b = 5.5;
    std::cout << "double b = " << b << "\n";
    std::cout << "sizeof(double) = " << sizeof(double) << "\n";
    std::cout << "Actual memory consumed by b: " << sizeof(b) << " bytes\n\n";

    float b2 = 5.5f;
    std::cout << "float b2 = " << b2 << "\n";
    std::cout << "sizeof(float) = " << sizeof(float) << "\n";
    std::cout << "Actual memory consumed by b2: " << sizeof(b2) << " bytes\n\n";

    char c = (char)0xF8;
    std::cout << "char c = " << c << "\n";
    std::cout << "sizeof(char) = " << sizeof(char) << "\n";
    std::cout << "Actual memory consumed by c: " << sizeof(c) << " bytes\n\n";

    bool d = true;
    std::cout << "bool d = " << d << "\n";
    std::cout << "sizeof(bool) = " << sizeof(bool) << "\n";
    std::cout << "Actual memory consumed by d: " << sizeof(d) << " bytes\n\n";

    const char *e = "Hello, World!";
    std::cout << "const char *e = " << e << "\n";
    std::cout << "sizeof(char*) = " << sizeof(char*) << "\n";
    size_t e_literal_size = std::strlen(e) + 1; 
    std::cout << "Actual memory consumed by e: " << sizeof(e) + e_literal_size 
              << " bytes (Pointer: " << sizeof(e) << " + Literal in .rodata: " << e_literal_size << ")\n\n";

    std::string f = "short string";
    std::cout << "std::string f = " << f << "\n";
    std::cout << "sizeof(std::string) = " << sizeof(std::string) << "\n";
    size_t f_heap_size = f.capacity(); 
    std::cout << "Actual memory consumed by f: " << sizeof(f) + f_heap_size 
              << " bytes (Object on stack: " << sizeof(f) << " + Buffer on heap: " << f_heap_size << ")\n\n";

    std::string f2 = "very long string, long enough to be stored in a string object, and still doesent consume much memory";
    std::cout << "std::string f2 = " << f2 << "\n";
    std::cout << "sizeof(std::string) = " << sizeof(std::string) << "\n";
    size_t f2_heap_size = f2.capacity(); 
    std::cout << "Actual memory consumed by f2: " << sizeof(f2) + f2_heap_size 
              << " bytes (Object on stack: " << sizeof(f2) << " + Buffer on heap: " << f2_heap_size << ")\n\n";

    const char *g = "short string";
    std::cout << "const char *g = " << g << "\n";
    std::cout << "sizeof(g) = " << sizeof(g) << "\n";
    size_t g_literal_size = std::strlen(g) + 1;
    std::cout << "Actual memory consumed by g: " << sizeof(g) + g_literal_size 
              << " bytes (Pointer: " << sizeof(g) << " + Literal in .rodata: " << g_literal_size << ")\n\n";

    const char *g2 = "very long string, long enough to be stored in a string object, and still doesent consume much memory";
    std::cout << "const char *g2 = " << g2 << "\n";
    std::cout << "sizeof(g2) = " << sizeof(g2) << "\n";
    size_t g2_literal_size = std::strlen(g2) + 1;
    std::cout << "Actual memory consumed by g2: " << sizeof(g2) + g2_literal_size 
              << " bytes (Pointer: " << sizeof(g2) << " + Literal in .rodata: " << g2_literal_size << ")\n\n";

    return 0;
}
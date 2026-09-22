#include <iostream>
#include <stdio.h>

#undef MASK
#define MASK 0B00000001

#undef MULTI
#define MULT(A, B) A*B

#undef TEXT
#define TEXT(A, B, C) "Multiplication of (" #A ") x (" #B ") = " #C "\n"

#undef X_N
#define X_N(N)          x ## N

int main(int, char**) {

    auto a = 42;

    auto b = a | MASK;

    auto c = MULT(a,b);

    auto d = MULT(c, c);

    std::cout << "result = " << bool(a &  MASK) << std::endl;
    std::cout << "b = " << bool(b &  MASK) << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << TEXT(a, b, c)  << std::endl;

    auto x4 = 45;
    printf("%d\n", X_N(4));
}
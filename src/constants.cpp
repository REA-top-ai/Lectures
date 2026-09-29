

int sum(const int a, const int b ) {
    return a + b;
}

int sum_p(const int *a, const int *b ) {
    return *a + *b;
}

int sum_r(const int &a, const int &b ) {
    return a + b;
}

int main (int, char**) {
    const int a = 1234;
    const char *b = "5678";
    constexpr int c = 1234;
    constexpr char *d = "5678";

    auto a_p = &a;
    auto b_p = &b;
    auto c_p = &c;
    auto d_p = &d;

    auto x = sum(a, c);

    int a1 =6, a2 = 7;

    auto x2 = sum(a1, a2);

    int * a1_p{&a1}, *a2_p{&a2};

    auto x3 = sum_p(a1_p, a2_p);

    auto x4 = sum_r(*a1_p, *a2_p);

    auto x5 = sum_r(a1, a2);


    int var = 100500;
    int var_b = 100500;

    int * var_p{&var};

    var_p = &var_b;

    int const * var_p_c{&var};

    var_p_c = &var_b;

    *var_p_c = 100500;

    const int * var_p_cc{&var};

    var_p_cc = &var_b;

    *var_p_cc = 100500;

    const int * const var_p_ccc{&var};

    var_p_ccc = &var_b;

    int * const var_p_cccc{&var};

    var_p_cccc = &var_b;
    *var_p_cccc = 100500;

}
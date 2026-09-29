union simple_union {
    char symbolic[4];
    int numeric;
};

int main() {
    simple_union su;

    auto *su_ptr = &su;

    auto *su_s_ptr = &su.symbolic;
    auto *su_n_ptr = &su.numeric;

    su = {17,65,33,9};

    auto x = su.numeric; //153174289
}
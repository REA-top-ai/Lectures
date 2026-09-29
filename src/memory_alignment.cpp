


static void unions() {
    union u{
        int a;
        short b;
        char c;
    };

    u u1 = {};

    auto u_size = sizeof(u);
    auto u1_size = sizeof(u1);

    u1.a = 12344321;

    u1_size = sizeof(u1);

    auto b = u1.b;

    auto c = u1.c;

    u1 = {};

    u1.c = 67;

    u1_size = sizeof(u1);

    b = u1.b;

    auto a = u1.a;

    auto u_p = &u1;
    auto a_p = &(u1.a);
    auto b_p = &(u1.b);
    auto c_p = &(u1.c);
}

int main(int, char**) {
    structs();
    classes();
    enumerations();
    unions();
}

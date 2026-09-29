class MyClass {
    public:
        MyClass(int op1, int op2):a{op1}, b{op2} {}
        ~MyClass() {}

        int a {};
        int b {};
        int sum() const {
            return magic(a, b);
        }

    private:
        int magic (const int &op1,const int &op2) const {
            return op1 + op2;
        }
};

int main() {
    MyClass instance = {.a = 1,.b = 2};
    instance.a = 3;

    auto sum = instance.sum();

    auto ptr = &instance;
    ptr->a = 4;
    auto result2 = ptr->sum();

    auto memb_ptr = &instance.a;
    auto memb_ptr2 = &instance.b;

    MyClass array [5];
}
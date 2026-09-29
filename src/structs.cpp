
struct simple_struct {
    char symbol;
    int value;
};

// #pragma pack(push, 1)
struct __attribute__((packed)) simple_packed_struct {
    char symbol;
    int value;
};
// #pragma pack(pop)

int main() {

    simple_struct s = {'a', 100500};
    s.symbol = 'b';
    auto s_p = &s;
    auto symbol_ptr = &s.symbol;
    auto value_ptr = &s.value;

    auto diff = (long long)value_ptr - (long long)symbol_ptr;

    simple_packed_struct ps = {'c', 100500};

    auto ps_p = &ps;
    auto ps_symbol_ptr = &ps.symbol;
    auto ps_value_ptr = &ps.value;

    auto ps_diff = (long long)ps_value_ptr - (long long)ps_symbol_ptr;

    simple_struct array [5];
    simple_packed_struct array2 [5];
}
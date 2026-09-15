int main (int, char**) {

    int val = 10;
    int* ptr = &val; // ptr хранит адрес val
    *ptr = 20;       // val теперь тоже 20

    int val2 = 10;
    int& ref = val2;  // ref — это второе имя для val
    ref = 20;        // val теперь 20

    return 0;
}
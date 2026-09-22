int main(int, char**) {

    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = a + b;
    short res_2 = 100 - b;
    float res_3 = 5.4 - c;
    double res_4 = d * 4;

    short a2 = -5;       // -5
    int b2 = -a2;         // 5
    int d2 = -(7 + a2);   // -(7 + -5) = -2


    double a3 = 5;
    double b3 = 5;

    float c3 = b3 - a3;

    long a4 = 100500;
    long b4 = 100500;
    int c4 = a4 - b4;

    int size = 5;
    int a5 = 2 * size++; //10
    size = 5;
    int b5 = 2 * ++size; //12

    //сокращения

    int count = 1;
    double var_d = 10;
    short p = 2;

    count -= 3 - 5;
    var_d /= 3.0 + p;
    p *= 20 - 5;

    return 0;
}
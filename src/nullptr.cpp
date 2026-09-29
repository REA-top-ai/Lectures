
// count the number of occurrences of x in p[]
// p is assumed to point to a zero-terminated array of char (or to nothing)
int count_x(const char* p, char x)
{
    if (p==nullptr)
        return 0;
    int count = 0;
    for (; *p!=0; ++p)
        if (*p==x)
            ++count;
    return count;
}

// count the number of occurrences of x in p[]
// p is assumed to point to a zero-terminated array of char (or to nothing)
int count_x_v2(const char* p, char x)
{
    if (p==nullptr)
        return 0;
    int count = 0;
    while (*p) {
        if (*p==x)
            ++count;
        ++p;
    }
    return count;
}

int main() {
}
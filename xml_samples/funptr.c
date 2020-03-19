void foo (int *p) { *p = 42; }

int main(void) {
    int x = 10;
    foo(&x);
    return 0;
}

#include <iostream>

using namespace std;

void selection_sort(int *a, const int n)
{
    int i, j, k;

    for (i = 0; i < n; i++) {
        k = i;
        for (j = i+1; j < n; j++) {
            if (a[j] < a[k])
                k = j;
        }
        swap(a[i], a[k]);
    }
}

void generate_random_number(int *a, const int n)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10 + 1;
    }
}

void print_array(int *a, const int n, const char *msg)
{
    cout << msg << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

void verify_sort(int *a, const int n)
{
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            cout << "Wrong!" << endl;
            return;
        }
    }

    cout << "Correct!" << endl;
}

int main(void)
{
    int a[10];
    generate_random_number(a, 10);
    print_array(a, 10, "Before sort...");
    selection_sort(a, 10);
    print_array(a, 10, "After sort...");
    verify_sort(a, 10);
    return 0;
}
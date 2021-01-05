#include <iostream>

using namespace std;

int binary_search(int *a, const int x, const int n)
{
    int left = 0, right = n-1, middle = 0;
    while (left <= right) {
        middle = (left + right) / 2;
        if (x < a[middle]) right = middle - 1;
        else if (x > a[middle]) left = middle + 1;
        else return middle;
    }

    return -1;
}


void print_array(int *a, const int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

void selection_sort(int *a, const int n)
{
    int i = 0, j = 0, k = 0;

    for (i = 0; i < n; i++) {
        k = i;
        for (j = i+1; j < n; j++) {
            if (a[j] < a[k]) k = j;
        }
        swap(a[i], a[k]);
    }
}

void generate_ordered_sequence(int *a, const int n)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10 + 1;
    }

    selection_sort(a, n);
}


int main()
{
    const int size = 10;
    int a[10] = {0};

    generate_ordered_sequence(a, size);
    print_array(a, size);
    cout << binary_search(a, 9, size) << endl;
    
    return 0;
}
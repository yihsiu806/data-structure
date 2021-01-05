#include <iostream>

using namespace std;

int binary_search(int *a, const int x, int l, int r)
{
    if (l <= r) {
        int middle = (l + r) / 2;
        if (x > a[middle]) return binary_search(a, x, middle + 1, r);
        else if (x < a[middle]) return binary_search(a, x, l, middle -1);
        
        return middle;
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
    cout << binary_search(a, 9, 0, size-1) << endl;
    
    return 0;
}
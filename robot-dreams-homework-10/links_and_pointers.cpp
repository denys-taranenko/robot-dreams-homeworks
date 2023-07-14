void swap(int& a, int& b) {

    int temp = a;
    a = b;
    b = temp;
}


void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}


bool calculateSum(const double* arr, int arrSize, double& sum) {

    if (arrSize == 0)
    {
        return false;
    }

    sum = 0.0;
    for (int i = 0; i < arrSize; i++)
    {
        sum += arr[i];
    }
    return true;
}


bool find(const int* arr, int size, int elem) {

    const int* end = arr + size;

    while (arr < end)
    {
        if (*arr == elem)
        {
            return true;
        }
        arr++;
    }

    return false;
}
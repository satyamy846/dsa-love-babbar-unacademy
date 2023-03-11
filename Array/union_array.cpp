#include <iostream>
using namespace std;
int main()
{
    int array[7] = {1, 1, 2, 3, 4, 7, 9};
    int array1[6] = {4, 5, 6, 7, 8, 9};

    int i = 0;
    int j = 0;
    int k = 0;
    
    int unionArray[100];
    while (i < 7 && j < 6 && k < 13)
    {
        if (array[i] == array1[j])
        {
            unionArray[k] = array[i];
            k++;
            i++;
            j++;
        }
        if (array[i] < array1[j])
        {
            unionArray[k] = array[i];
            k++;
            i++;
        }
        if (array1[j] < array[i])
        {
            unionArray[k] = array1[j];
            k++;
            j++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << unionArray[i] <<" ";
    }

    return 0;
}
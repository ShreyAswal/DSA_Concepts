#include <iostream>
#include <vector>
// #include <set>
using namespace std;

int main()
{
    int n1;
    cin >> n1;
    int arr1[n1];

    for (int l = 0; l < n1; l++)
    {
        cin >> arr1[l];
    }
    int n2;
    cin >> n2;
    int arr2[n2];

    for (int l = 0; l < n2; l++)
    {
        cin >> arr2[l];
    }

    vector<int> unionset;
    vector<int> intersectionset;

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            unionset.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            unionset.push_back(arr2[j]);
            j++;
        }
        else
        {
            unionset.push_back(arr1[i]);
            intersectionset.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout << "Unionset values :";
    for (int k = 0; k < unionset.size(); k++)
    {
        cout << unionset[k] << " ";
    }
    cout << endl
         << "Intersectionset values :";

    for (int l = 0; l < intersectionset.size(); l++)
    {
        cout << intersectionset[l]<<" ";
    }
}

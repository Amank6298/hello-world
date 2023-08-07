#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 1, 6, 12, 89};
    int n;
    cout << "Enter the number to be deleted " << endl;
    cin >> n;
    int index = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == n)
        {
            index = i;
            break;
        }
        else if(i==5){
            cout<<"Element not present "<<endl;
            break;
        }
        {
         continue;
        }
    }
    for (int k = index; k < 5; k++)
    {
        arr[k] = arr[k + 1];
    }

    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }
    cout << "Size of the array has now become 5" << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    // write your code here......
    for (int i = 0;i < len;i++)
    {
        int min = arr[i];
        for (int j = i + 1;j < len;j++)
        {
            if (arr[j] < min)
                swap(min, arr[j]);
        }
        arr[i] = min; //更新每一轮的最小值
    }
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
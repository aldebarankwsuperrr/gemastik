#include <iostream>

using namespace std;

int main()
{
    int n;
    int a;
    int temp = 0;

    cin >> n;
    
    for (int j = 0; j < 2;j++){
        for (int i = 0; i < n;i++){
            cin >> a;
            temp+=a;
        }
    }
    
    cout << n*temp;

    return 0;
}

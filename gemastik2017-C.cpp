#include <iostream>

using namespace std;

int main (){
    int t, n, c, p, s;
    int ans;

    cin >> t;

    while(t--){

        cin >> n;

        int temp[50] = {0};
        
        ans = n;

        for (int i = 0;i < n;i++){
            cin >> s;
        }

        for (int i = 0; i < n;i++){
            cin >> p;
            for (int j = 0; j < p;j++){
                cin >> c;
                if (temp[c-1] == 0){
                    ans++;
                    temp[c-1]++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}

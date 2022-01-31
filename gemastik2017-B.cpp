#include <iostream>
#include <cmath>

using namespace std;

string cek ( int a, int b, int k){
    if (ceil((float)a/2) - 1 <= b and ceil((float)b/k) - 1 <= a){
        string ans = "";
        while (a > 0 || b > 0){
            for (int i = 0; i < 2 and a > 0;i++){
                ans+='L';
                a--;
            }
            for (int i = 0; i < k and b > 0;i++){
                ans+='P';
                b--;
            }
        }
        return ans;
    }
    return "mustahil";
}


int main (){
    int n;
    int a,b,k;
    
    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> a >> b >> k;
        cout << cek(a, b, k) << endl;
    }
    
    return 0;
}

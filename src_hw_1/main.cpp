#include <iostream>

using namespace std;

int bin_count(int a){
    int count {0};
    do{
        count += a % 2 == 1 ? 1 : 0;
        a /= 2;
    }
    while (a > 0);
    return count;
}

int main(){
    int a, b;
    cin >> a >> b;
    int result {0};    
    for (int i = a; i <= b; i++){
        result += bin_count(i);    
    }
    cout << "Result is " << result << "\n";
}

void print(int n){
    if(n != 1){
        print(n-1);
    }
    cout << n << " ";
}
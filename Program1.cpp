// Tribonacci Series - 0, 0, 1, 1, 2, 4...
// Complexity: E

int tribo(int n){
        if(n == 0)
        return 0;
        if(n == 1)
        return 0;
        if(n == 2)
        return 1;
        return tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
}




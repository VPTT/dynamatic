void nested_loop(int k, int arr[1000][1000]) {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++)
            arr[i][j] = k + arr[i - 1][j];
    }
}

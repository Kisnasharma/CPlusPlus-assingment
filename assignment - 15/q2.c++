// cal time complexity of the following code snippet

int a = 0;
for (i = 0; i < N; i++) {
    for (j = N; j > i; j--) {
        a = a + i + j;
    }
}

// time complexity = O(N*N)

// Explanation : as total iteration of (a = a+i+j) is [N + N-1 + N-2 + N-3 + ..... + 3 + 2 + 1]
//             on simplification of this we get [N*N - (N(N+1)/2)] which further give [(N*N - N)/2] and finally [N*N]

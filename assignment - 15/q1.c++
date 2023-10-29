// cal time and space complexity of the following ocde snippet

 int a = 0, b = 0;
for (int i = 0; i < N; i++) {
    a = a + i;
} // loop 1.
for (int j = 0; j < M; j++) {
    b = b + j;
} // loop 2.

// time complexity = O(N+M)

// Explanation : as loop 1. is iterating N times and loop 2. is iterating M times so,
//             total itertion is O(M+N)
// Space comlexity = O(1)
// Explation : as extra space that is required is 2 one for a and another for b so constant space complexity
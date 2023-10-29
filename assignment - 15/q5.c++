// cal the time complexity of following code snippet
for(int i=0;i<n;i++){
    i*=k;
}

// time complexity : O(log(N-K))

// Explanation :   i    no of iteration 
//               0         1
//               1         1
//               k         1
//               k^2       1
//               k^3       1
//                .        .
//                .        .
//                .        .
//              k^a        1
// total iteration : (1 + 1 + 1 + ..... + 1)(a+2)times
// and , k^a<n => a.log(k)<logn => a<log(n-k) so max value of a is log(n-k) approx
// total iteration : 1(log(n-k) + 2) => time complexity : O(log(n-k))

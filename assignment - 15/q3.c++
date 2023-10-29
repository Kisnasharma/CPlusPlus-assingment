// cal the tme complexity of the following code snippet

int i, j, k = 0;
for (i = n / 2; i <= n; i++) {
    for (j = 2; j <= n; j = j * 2) {
        k = k + n / 2;
    }
}

// time compelixty = O(nlog(n))

// Explanation : i      j                      no. of iteration
//             n/2    2,4,8,16,...,2^k        log(n)
//         (n/2)+1    2,4,8,16,...,2^k        log(n)
//         (n/2)+2    2,4,8,16,...,2^k        log(n)
//           .              .                   .
//           .              .                   .
//           .              .                   .
//           n       2,4,8,16,...,2^k        log(n)
// since , 2^k<=N
// total iteration = [n-(n/2)+1]log(n) = [((n+2)/2)log(n)]
// time complexity = O((n/2 + 1)(logn)) = O(n/2(logn)) = O(nlog(n))

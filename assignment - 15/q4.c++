// calculate the time complexity of the following code snippet
int a = 0, i = N;
while (i > 0) {
    a += i;
    i /= 2;
}

// time complexity : O(log(N))

// Explanation : i     no of iteration
//       N          2
//       N/2        2
//       N/4        2
//       N/8        2
//        .         .
//        .         .
//        .         .
//      N/2^K       2
// total iteration : (2 + 2 + 2 + 2 + ..... +2 )k times
// since N/2^k >=1   =>  N>=2^k  => logN>=K [the max value of k is logN]
//  time complexity : O(2k) = O(2logN) = O(logN)
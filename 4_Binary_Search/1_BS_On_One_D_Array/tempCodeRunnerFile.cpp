// #include <iostream>
// using namespace std;

// int main()
// {

//         int input1;
//         cin >> input1;

//         int sum = 0;
//         int day = 1;

//         while (true)
//         {
//             int units;
//             cin >> units;

//             if (day == input1)
//             {
//                 cout << sum << endl;
//                 break;
//             }

//             sum += units;
//             day++;
//         }

//     return 0;
// }

// 3

//  #include <iostream>
//  using namespace std;

// const int MOD = 1000000007;

// int training(int N) {
//     if (N == 1) return 1;
//     if (N == 2) return 2;
//     if (N == 3) return 3;

//     int a = 1, b = 2, c = 3, d;
//     for (int i = 4; i <= N; i++) {
//         d = (a + b + c) % MOD;
//         a = b;
//         b = c;
//         c = d;
//     }
//     return c;
// }

// int main() {
//     int input1;
//     cin >> input1;

//     int result = training(input1);
//     cout << result << endl;

//     return 0;
// }

// 2

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int minTotalMarks(int N, vector<int>& originalMarks) {
//     sort(originalMarks.begin(), originalMarks.end());

//     int totalMarks = originalMarks[0];
//     int prev = originalMarks[0];

//     for (int i = 1; i < N; i++) {
//         if (originalMarks[i] <= prev) {
//             prev++;
//             totalMarks += prev;
//         } else {
//             prev = originalMarks[i];
//             totalMarks += originalMarks[i];
//         }
//     }

//     return totalMarks;
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> originalMarks(N);

//     for (int i = 0; i < N; i++) {
//         cin >> originalMarks[i];
//     }

//     int result = minTotalMarks(N, originalMarks);
//     cout << result << endl;

//     return 0;
// }

// 1#include <iostream>
#include <cstring>

using namespace std;

int checkConsecutive(int inputs, int input[]) {
    int sortedInput[inputs];
    memcpy(sortedInput, input, sizeof(input[0]) * inputs); // Copy the input array to a new array

    // Sort the array
    for (int i = 0; i < inputs - 1; i++) {
        for (int j = 0; j < inputs - i - 1; j++) {
            if (sortedInput[j] > sortedInput[j + 1]) {
                int temp = sortedInput[j];
                sortedInput[j] = sortedInput[j + 1];
                sortedInput[j + 1] = temp;
            }
        }
    }

    for (int i = 1; i < inputs; i++) {
        if (sortedInput[i] != sortedInput[i - 1] + 1) {
            return 0; // Not consecutive
        }
    }

    return 1; // Consecutive
}

int main() {
    int N;
    cin >> N;

    int marks[N];

    for (int i = 0; i < N; i++) {
        cin >> marks[i];
    }

    int result = checkConsecutive(N, marks);
    cout << result << endl;

    return 0;
}

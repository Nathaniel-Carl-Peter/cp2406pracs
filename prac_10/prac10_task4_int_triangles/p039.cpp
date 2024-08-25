#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <tuple>

// MAX_P = 1_000
// MAX_N = 1000//2
// # MAX_N = 100
const int MAX_P = 1000;
const int MAX_N = 1000/2;

template <typename SOME_VECTOR>
void printoutput(const SOME_VECTOR& vec)
{
    for (const auto& myTuple: vec)
    {
        std::cout << "(" << std::get<0>(myTuple) << ", " 
        << std::get<1>(myTuple) << ", " 
        << std::get<2>(myTuple) << "), "
        << std::get<3>(myTuple) << "), ";
    }
    std::cout << "\n";
}

int main()
{
    std::map<int, std::vector<std::tuple<int, int, int, int>>> res;
    int best_len = 1;
    int best_p = -1;
    for (int a = 1; a <= MAX_N; ++a) {
        for (int b = a; b <= MAX_N; ++b) {
            double c = std::sqrt(a * a + b * b);
            // NOTE! May need to do rounding error check for other similar problems!
            int ic = static_cast<int>(c);  // looks like it works ok in c++.
            if (c == ic) { // Check if c is an integer
                // another way: abs(c-ic) < roundingError
                int p = a + b + ic;
                if (p > MAX_P) {
                    continue;
                }
                res[p].push_back(std::make_tuple(a, b, ic, p));

                int new_len = res[p].size();
                if (new_len > best_len) {
                    best_len = new_len;
                    best_p = p;
                    printoutput(res[p]);
                }
            }
        }
    }

    if (best_p != -1) {
        printoutput(res[best_p]);
        std::cout << "Best length: " << best_len << "\n";
    }

    return 0;

}


// import numpy as np


// def main():
//     res = {}
//     best_len = 1
//     best_p = None
//     for a in range(1, MAX_N+1):
//         for b in range(a, MAX_N + 1):
//             c = np.sqrt(a*a + b*b)
//             ic = int(c)
//             if c == ic:
//                 p = a + b + ic
//                 if p > MAX_P:
//                     continue
//                 if p in res:
//                     res[p] += [(a, b, c, p)]
//                 else:
//                     res[p] = [(a, b, c, p)]
//                 # print(res[p])
//                 new_len = len(res[p])
//                 if new_len > best_len:
//                     best_len = new_len
//                     best_p = p
//                     print(res[p])

//     print(res[best_p])
//     print(best_len)


// if __name__ == "__main__":
//     main()

// print("DONE")
// # [(10, 24, 26.0, 60), (15, 20, 25.0, 60)]
// # [(20, 48, 52.0, 120), (24, 45, 51.0, 120), (30, 40, 50.0, 120)]
// # [(15, 112, 113.0, 240), (40, 96, 104.0, 240), (48, 90, 102.0, 240), (60, 80, 100.0, 240)]
// # [(28, 195, 197.0, 420), (60, 175, 185.0, 420), (70, 168, 182.0, 420), (105, 140, 175.0, 420), (120, 126, 174.0, 420)]
// # [(40, 399, 401.0, 840), (56, 390, 394.0, 840), (105, 360, 375.0, 840), (120, 350, 370.0, 840), (140, 336, 364.0, 840), (168, 315, 357.0, 840)]
// # [(40, 399, 401.0, 840), (56, 390, 394.0, 840), (105, 360, 375.0, 840), (120, 350, 370.0, 840), (140, 336, 364.0, 840), (168, 315, 357.0, 840), (210, 280, 350.0, 840)]
// # [(40, 399, 401.0, 840), (56, 390, 394.0, 840), (105, 360, 375.0, 840), (120, 350, 370.0, 840), (140, 336, 364.0, 840), (168, 315, 357.0, 840), (210, 280, 350.0, 840), (240, 252, 348.0, 840)]
// # [(40, 399, 401.0, 840), (56, 390, 394.0, 840), (105, 360, 375.0, 840), (120, 350, 370.0, 840), (140, 336, 364.0, 840), (168, 315, 357.0, 840), (210, 280, 350.0, 840), (240, 252, 348.0, 840)]
// # 8
// # DONE
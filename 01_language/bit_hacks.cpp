/*
Next permutation of x as a bit sequence.

e.g.    001011 -> 001101
        110011 -> 110110
*/
using ull = uint64_t;
ull next_bits_permutation(ull x) {
  ull c = __builtin_ctzll(x), r = x + (1ULL << c);
  return (r ^ x) >> (c + 2) | r;
}

/*
Iterate over all (proper) subsets of bitset s.
e.g. 1101 -> {1000, 0100, 0001, 1100, 1001, 0101}
*/
using ull = uint64_t;
void subsets(ull s) {
  for (ull x = s; x;) {
    --x &= s;
    /* do stuff */
  }
}

/*
Find the low bit
*/
int lowbit(auto x) {
    return x & (-x);
}

/*
GCC specific functions for bitwise operations

See: https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
*/
__builtin_popcount(x) // popcount (unsigned int)
__builtin_popcountll(x) // popcount (unsigned long long)
__builtin_ctz(x) // # of trailing zeros (unsgined int; undefined if x = 0)
__builtin_ctzll(x) // # of trailing zeros (unsgined long long; undefined if x = 0)
__builtin_clz(x) // # of leading zeros (unsgined int; undefined if x = 0)
__builtin_clzll(x) // # of leading zeros (unsgined long long; undefined if x = 0)
__builtin_ffs(x) // 1 + index of least significant 1 (unsgined int; 0 if x = 0)
__builtin_ffsll(x) // 1 + index of least significant 1 (unsgined long long; 0 if x = 0)
__lg(x) // index of highest set bit (unsigned int or unsigned long long; undefined if x = 0)
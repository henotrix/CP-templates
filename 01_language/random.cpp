#ifdef __unix__
random_device rd;
mt19937_64 rng(rd());
#else
const auto SEED = chrono::high_resolution_clock::now()
                  .time_since_epoch()
                  .count();
mt19937_64 rng(SEED);
#endif
/* 
To generate a random uint_fast64_t (uint64_t) with above code:
uint64_t x = rng();

To generate uniform random of type T (int, double, ...) in [l, r]:
uniform_int_distribution<T> dist(l, r);
auto x = dist(rng);

See the following sources:
https://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine
https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
*/
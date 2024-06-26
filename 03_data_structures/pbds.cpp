#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/priority_queue.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

/*
Most std::map + order_of_key, find_by_order, split, join.

References:
https://gcc.gnu.org/onlinedocs/libstdc++/ext/pb_ds/tree_based_containers.html
https://omeletwithoutegg.github.io/2021/07/23/pbds-split-join-is-slow/

order_of_key(x): # of items < x
find_by_order(k): iterator for k-th element in the set
split(x, T): split ordered_set with key > x to other ordered_set (slow; use Treap)
join(T): join other ordered_set to current one (slow; use Treap)
*/
template <typename T, typename U = null_type>
using ordered_map = tree<T, U, std::less<>, rb_tree_tag,
                         tree_order_statistics_node_update>;
// useful tags: rb_tree_tag, splay_tree_tag

/*
Most of std::unordered_map, but faster (needs good hash).
See examples below.

References: 
https://gist.github.com/Chillee/3bd6ee4429abb4a2e7c19959fb1490ae
https://github.com/kth-competitive-programming/kactl/blob/main/content/data-structures/HashMap.h
*/
template <typename T> struct myhash {
  size_t operator()(T x) const; // splitmix, bswap(x*R), ...
};
template <typename T, typename U>
using hash_table = gp_hash_table<T, U, myhash<T>>;

// most std::priority_queue + modify, erase, split, join
using heap = priority_queue<int, std::less<>>;
// useful tags: pairing_heap_tag, binary_heap_tag,
//              (rc_)?binomial_heap_tag, thin_heap_tag
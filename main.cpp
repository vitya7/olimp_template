#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/priority_queue.hpp>

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

using namespace std;

template <class T, class M>
using trtr = __gnu_pbds::tree <T, M, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;

#define sp ' '
#define en '\n'

#define _str(x) #x
#define ww(x) _str(x) << " = " << x << sp
#define wn(x) _str(x) << " = " << en << x << en

struct _flag_t { string val; }
const _1d {", "}, _2d {"\n  "};
_flag_t _flag = _1d;

ostream& operator << (ostream& os, _flag_t flag)
{ _flag = flag; return os; }

template <class Ch, class Tr, class It>
basic_ostream <Ch, Tr>&
_out (basic_ostream <Ch, Tr> & os, It f, It l) {
    if(f == l) return os << "{}";
    _flag_t cur_flag = _flag;
    os << _1d << "{ " << *f;
    for(; ++f != l; os << cur_flag.val << *f);
    return os << " }";
}

template <class Ch, class Tr, class C>
auto operator << (basic_ostream <Ch, Tr> & os, C const& cont)
	-> decltype ( begin(cont), end(cont), cont.size(), os )
{ return _out(os, begin(cont), end(cont)); }

template <class X, class Y>
ostream& operator << (ostream& os, pair <X,Y> const& p) { return os << "[" << get<0>(p) << ", " << get<1>(p) << "]"; }
template <class X, class Y>
ostream& operator << (ostream& os, tuple <X,Y> const& p) { return os << "[" << get<0>(p) << ", " << get<1>(p) << "]"; }

template <class X, class Y> X&   maxi  (X& x, Y const& y) { return x < (X)y ? x = y : x; }
template <class X, class Y> X&   mini  (X& x, Y const& y) { return x > (X)y ? x = y : x; }
template <class X, class Y> bool bmaxi (X& x, Y const& y) { return x < (X)y ?(x = y, true) : false; }
template <class X, class Y> bool bmini (X& x, Y const& y) { return x > (X)y ?(x = y, true) : false; }

#define int ll
#define qq auto
#define qr auto &
#define qrr auto &&
#define qc auto const&
#define sz(x) int( x.size() )
#define mp(x, y) make_pair( x, y )

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair <int, int>;
using pll = pair <ll, ll>;

template <class K, class T>
using hash_table = __gnu_pbds::cc_hash_table<K, T>;
//using hash_table = unordered_map<K, T>;
//using hash_table = map<K, T>;

constexpr ld PI = acos(-1);
constexpr ld PIH = PI * 0.5;
constexpr ld PID = PI * 2.0;

template <class T> using row = vector<T>;
template <class T> using mat = vector<row<T>>;
template <class T = ll> mat<T>
make_mat(size_t n, size_t m, T val = T())
{ return mat<T>(n, row<T>(m, val)); }

#define _PF_  cout << __PRETTY_FUNCTION__ << endl;
template <class ... T> void PF () { _PF_ }

#define forr(i, n) for(int i = 0; i < n; i ++)
#define forn(i, b, n) for(int i = b; i < n; i ++)
#define all(x) begin(x), end(x)

#define def(f, ...) qq f = [&] (qc f, __VA_ARGS__)
#define call(f, ... ) f( f, __VA_ARGS__ )

int32_t main ()
{


}

/**

*/

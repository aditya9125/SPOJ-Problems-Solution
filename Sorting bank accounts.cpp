typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib> //for qsort
#include<cstdio>

#define rep(x,a,b) for(x=a;x<b;x++)
#define reptill(x,a,b) for(x=a;x<=b;x++)

#define scani(x) scanf("%d",&x)
#define scan2i(x,y) scanf("%d %d",&x,&y)
#define scan3i(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define scanfl(x) scanf("%f",&x)
#define scanc(x) scanf("%c",&x)
#define scand(x) scanf("%lf",&x)

#define scanll(x) scanf("%lli",&x)
#define scan2ll(x,y) scanf("%lli %lli",&x,&y)
#define scan3ll(x,y,z) scanf("%lli %lli %lli",&x,&y,&z);

#define scanl(x) scanf("%ld",&x)
#define scans(x) scanf("%s",x)
#define printi(x) printf("%d\n",x)
#define printl(x) printf("%ld\n",x)
#define printll(x) printf("%lli\n",x)
#define printd(x) printf("%lf\n",x)
#define printfl(x) printf("%f\n",x)
#define printc(x) printf("%c\n",x)
#define prints(x) printf("%s\n",x);
#define sloop(x) loop(i,0,strlen(x)-1)
#define newl cout<<"\n"
#define FILL(A,value) memset(A,value,sizeof(A))


#define whole(x) x.begin(),x.end()
#define pb push_back
#define in insert
#define mp make_pair
#define get(tp_name,x) (get<x>(tp_name))   ///to access tuple(i)
#define umap unordered_map



using namespace std;


#define F first
#define S second



///Optional

///vector< vector<int> > costs(N, vector<int>(M, 0));   //NxM 2d preinitialized(0) vector

 ///comparator class for ordering on the basis of 'Second'
/*
class CompareDist
{
	public:				///pairType doesn't name a type ,its just to show type of pair object passed in operatorfunction

    bool operator()( pairType p1, pairType p2) {
        return p1.S>p2.S;
    }
};
*/

typedef pair<int,int> II;
typedef pair<ll,ll> LL;
typedef vector<II> VII;
typedef vector<LL> VLL;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector< VI > VVI;
typedef vector< VL > VVL;
typedef vector<string> VS;

inline bool inc_range(int x,int y,int z) { return ((x>=y)&&(x<=z)); }
inline bool ex_range(int x,int y,int z) { return ((x>y)&&(x<z)); }
inline bool is_either(int x,int y,int z) { return ((x==y)||(x==z)); }

//maths
#define PI acos(-1)

#define INTmax numeric_limits<int>::max()
#define LLmax numeric_limits<ll>::max()
#define ULLmax numeric_limits<ull>::max()

#define INTmin numeric_limits<int>::min()


typedef priority_queue<II,vector<II>, greater<II> > P_Queue;             ///priority queue contianing II (having vector<II> as underlying container) with greater as functor
																		///		heapify on the basis of comparisons of  II.first  values

template<typename type>
void get_arr(type a[],type n) {for(type i=0;i<n;i++) cin>>a[i];}

template<typename type>
void show_arr(type a[],type n=1) {for(type i=0;i<n;i++) cout<<a[i]<<" ";}

template<typename type>
inline type max3(type a,type b,type c){	 return max(max(a,b),c);}

template<typename type>
inline type min3(type a,type b,type c){	 return min(a,min(b,c));}

template<typename type>
inline type min4(type a,type b,type c,type d){	 return min(a,min3(b,c,d));}


template<typename type>
type modpowIter(type a, type b, type c) { type ans=1;  while(b != 0){ if(b%2 == 1) ans=(ans*a)%c;  a=(a*a)%c; b /= 2; } return ans; }

template<typename type>
type phi(type n){ type result = n;  for (type p=2; p*p<=n; ++p) { if (n % p == 0){ while (n % p == 0)   n /= p; result -= result / p; } }
if (n > 1) result -= result / n; return result;
}

template<class type>
type ncr(type n,type r)
{  	assert(n>=r);
	type ans=1,i;
	if(n==r) return 1; if(r==1) return n; if(r>(n-r)) r=n-r;
	reptill(i,0,r-1) ans=ans*(n-i)/(i+1);
	return ans;
}
template<typename type>  unsigned long long fact(type x){ ull ans=1; for(type i=1;i<=x;i++){ ans*=i;        /*ans%=MOD;   /Optional*/ } return ans; }

template<typename type>

int Digs(type n){ return (n >= 10) ? 1 + Digs(n/10): 1; }


inline void FAST_IO(){ios_base::sync_with_stdio(false);}



#define SIZE (int(2e3)+1)
#define MOD
#define debug
#define MAX1
#define MAX2

//#define Online_judge


class Node
{
	public:
		int bankId,c1,c2,c3,c4,cnt;

	Node()
	{
		cnt=1;
	}
};

vector<Node> v;

bool Comp(Node lhs,Node rhs)
{

	if( lhs.bankId==rhs.bankId)
	{

		if(lhs.c1==rhs.c1)
		{
			if(lhs.c2==rhs.c2)
			{

				if(lhs.c3==rhs.c3)
				{

					return lhs.c4<rhs.c4;
				}
				return lhs.c3<rhs.c3;
			}

			return lhs.c2<rhs.c2;
		}
		return lhs.c1<rhs.c1;

	}

	return lhs.bankId<rhs.bankId;
}

bool isEqual(Node a,Node b)
{
	return (a.bankId==b.bankId and a.c1==b.c1 and a.c2==b.c2 and a.c3==b.c3 and a.c4==b.c4);
}

int main()
{

//	FAST_IO();
//ifstream cin("/home/aditya/Documents/ip");
//	ofstream cout("/home/aditya/Documents/op");



int t;
cin>>t;

while(t--)
{
	 ll n,i,j,k;
	 scanf("%lld\n",&n);

	 v= vector<Node>(n);
	 int ignore;

	 rep(i,0,n)
	 {
		 cin>>v[i].bankId>>ignore>>v[i].c1>>v[i].c2>>v[i].c3>>v[i].c4;
	  }

	sort(whole(v),Comp);


	vector<Node> Ans;

	Ans.pb(v[0]);

	rep(i,1,n)
	{
		//cout<<v[i].bankId<<" "<<ignore<<" "<<v[i].c1<<" "<<v[i].c2<<" "<<v[i].c3<<" "<<v[i].c4;
		if(isEqual(v[i],v[i-1]))
		    Ans.back().cnt++;
		else Ans.pb(v[i]);
	}


	rep(i,0,Ans.size())
	 {
		 int a=Ans[i].bankId;

		 if(Digs(a)<2)
			cout<<"0";

		 cout<<a<<" ";


		int b=ignore;

		for(int j=0;j< 8-Digs(b);j++)
		cout<<"0";

		cout<<b<<" ";

		int c=Ans[i].c1;

		for(int j=0;j< 4-Digs(c);j++)
		cout<<"0";

		cout<<c<<" ";

		int d=Ans[i].c2;

		for(int j=0;j< 4-Digs(d);j++)
		cout<<"0";

		cout<<d<<" ";


		int e=Ans[i].c3;

		for(int j=0;j< 4-Digs(e);j++)
		cout<<"0";

		cout<<e<<" ";



		int f=Ans[i].c4;

		for(int j=0;j< 4-Digs(f);j++)
		cout<<"0";

		cout<<f<<" "<<Ans[i].cnt;
		newl;


	 }

	newl;



}

}

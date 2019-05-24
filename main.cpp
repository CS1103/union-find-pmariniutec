#include <cstdio>
#include <cassert>
#include <vector>
#include <iostream>


template<class Type>
class UnionFind {
  public:
	UnionFind(int n) {
	  size = n;
	  uf.resize(size);
	  for(int i = 0; i < size; i++)
		uf[i] = -1;
	}

	Type root(Type x) {
	  auto r = x;

	  /* Find root */
	  while(uf[r] >= 0)
		r = uf[r];

	  while(uf[x] >= 0) {
		int tmp = uf[x];
		uf[x] = r;
		x = tmp;
	  }

	  return r;
	}

	/* Union of sets containing x and y */
	void join(Type x, Type y) {
	  x = root(x);
	  y = root(y);

	  if(x != y) {
		if(uf[x] < uf[y]) {
		  uf[x] += uf[y];
		  uf[y] = x;
		}
		else {
		  uf[y] += uf[x];
		  uf[x] = y;
		}
	  }
	}

	Type& operator[](int index) {
	  return uf.at(index);
	}

  private:
	int size;
	std::vector<Type> uf;
};

int main() {

  UnionFind<int> uf{10};

  assert(uf.root(1) != uf.root(2));
  uf.join(1, 2);
  assert(uf.root(1) == uf.root(2));

  uf.join(3, 4);
  uf.join(2, 3);
  assert(uf.root(1) == uf.root(4));

  std::cout << "All tests passed.\n";

  return 0;
}

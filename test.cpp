#include "stack.h"
using namespace cbb123;
void test1()
{
	Stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	for (int i = 6; i > 0; --i)
	{
		cout << st.top() << endl;
		st.pop();
	}
}
int main()
{
	test1();
	return 0;
}
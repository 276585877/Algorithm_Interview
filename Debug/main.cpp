/*
2019-9.26
CH1 ջ--ʹ�õݹ麯����ջ��������һ��ջ
��������
5
1 2 3 4 5
*/

#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

stack <int> s;

int Get_Remove_Last_Ele(stack<int> &s)   // ɾ���ײ�Ԫ�أ�������������!
{
	int temp = s.top();     // ��ǰԪ��,����ҲӦ��push��ֵ
	s.pop();
	if (s.empty())
	{
		return temp;
	}
	else
	{
		int result = Get_Remove_Last_Ele(s);
		// ����
		s.push(temp);
		return result;        // �˺�����������,
	}
}

void reverse(stack<int> &s)
{
	// int temp = s.pop();
	int last = Get_Remove_Last_Ele(s);
	if (s.empty())
	{
		cout << last << " ";
		// s.push(last);
		return ;
	}
	else
	{
		reverse(s);
		// s.push(last);
		cout << last << " ";
	}

}

int main()
{
	// freopen("in.txt", "r", stdin);
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int val;
		cin >> val;
		s.push(val);
	}
	reverse(s);
	/*
	while(!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	*/
	return 0;
}

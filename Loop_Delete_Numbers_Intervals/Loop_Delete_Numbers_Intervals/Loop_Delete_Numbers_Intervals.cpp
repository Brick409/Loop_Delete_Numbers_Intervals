// Loop_Delete_Numbers_Intervals.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <queue>
#include <stdio.h>
#include <string>
using namespace std;

/*
有一个数组a[N]顺序存放0~N-1，要求每隔两个数删掉一个数，到末尾时循环至开头继续进行，
求最后一个被删掉的数的原始下标位置。
以8个数(N=7)为例:
｛0，1，2，3，4，5，6，7｝，0->1->2(删除)->3->4->5(删除)->6->7->0(删除),
如此循环直到最后一个数被删除。
*/

class Solution
{
public:
    //用队列模拟，队首取数，用一个计数器计数，隔2个删一个，其他的重新放到队尾
    int loopDelNumsInterval(int len)
    {
        queue<int> q;
        for (int i = 0; i < len;i++)
        {
            q.push(i);
        }
        int count = 0;//记录进行的个数，最大为间隔2

        while (q.size()!=1)
        {
            if (count!=2)
            {
                int b = q.front();
                q.pop();
                q.push(b);
                count++;
            }
            else
            {
                q.pop();
                count = 0;
            }
        }

        int res = q.front();
        return res;
    }

    //输入一个字符串，求出该字符串包含的字符集合
    /*
    输入描述:
    每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。
    输出描述:
    每组数据一行，按字符串原有的字符顺序，输出字符集合，即重复出现并靠后的字母不输出。
    */
    int findCharacter(string str)
    {
        string subStr;
        int num[1000] = { 0 };
        int len = str.size();

        for (int i = 0; i < len; i++)
        {
            if (num[str[i]] == 0)
            {
                subStr += str[i];
                num[str[i]]++;
            }
        }

        cout << subStr << endl;

        return 0;
    }




    //数独是一个我们都非常熟悉的经典游戏，运用计算机我们可以很快地解开数独难题，现在有一些简单的数独题目，请编写一个程序求解。
    /*
    输入描述:
    输入9行，每行为空格隔开的9个数字，为0的地方就是需要填充的。

    输出描述:
    输出九行，每行九个空格隔开的数字，为解出的答案。
    */

};



int _tmain(int argc, _TCHAR* argv[])
{
    Solution test;

    int len = 0;
    cin >> len;

    cout << test.loopDelNumsInterval(len) << endl;
  
    string str;
    cin >> str;

    test.findCharacter(str);

    system("pause");
	return 0;
}


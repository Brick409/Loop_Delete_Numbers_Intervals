// Loop_Delete_Numbers_Intervals.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <queue>
#include <stdio.h>
#include <string>
using namespace std;

/*
��һ������a[N]˳����0~N-1��Ҫ��ÿ��������ɾ��һ��������ĩβʱѭ������ͷ�������У�
�����һ����ɾ��������ԭʼ�±�λ�á�
��8����(N=7)Ϊ��:
��0��1��2��3��4��5��6��7����0->1->2(ɾ��)->3->4->5(ɾ��)->6->7->0(ɾ��),
���ѭ��ֱ�����һ������ɾ����
*/

class Solution
{
public:
    //�ö���ģ�⣬����ȡ������һ����������������2��ɾһ�������������·ŵ���β
    int loopDelNumsInterval(int len)
    {
        queue<int> q;
        for (int i = 0; i < len;i++)
        {
            q.push(i);
        }
        int count = 0;//��¼���еĸ��������Ϊ���2

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

    //����һ���ַ�����������ַ����������ַ�����
    /*
    ��������:
    ÿ����������һ���ַ������ַ�����󳤶�Ϊ100����ֻ������ĸ��������Ϊ�մ������ִ�Сд��
    �������:
    ÿ������һ�У����ַ���ԭ�е��ַ�˳������ַ����ϣ����ظ����ֲ��������ĸ�������
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




    //������һ�����Ƕ��ǳ���Ϥ�ľ�����Ϸ�����ü�������ǿ��Ժܿ�ؽ⿪�������⣬������һЩ�򵥵�������Ŀ�����дһ��������⡣
    /*
    ��������:
    ����9�У�ÿ��Ϊ�ո������9�����֣�Ϊ0�ĵط�������Ҫ���ġ�

    �������:
    ������У�ÿ�оŸ��ո���������֣�Ϊ����Ĵ𰸡�
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


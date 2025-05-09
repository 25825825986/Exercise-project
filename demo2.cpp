#include <bits/stdc++.h>
using namespace std;

// 构建 KMP 部分匹配表
// 该函数生成模式串 T 的部分匹配表，用于 KMP 算法中的失配跳转
vector<int> buildFail(const string &T) {
    int m = T.size();
    vector<int> fail(m + 1, 0); // 初始化部分匹配表，长度为 m+1，初始值为 0
    for (int i = 1, j = 0; i < m; ++i) {
        // 如果当前字符不匹配，回退到前一个匹配位置
        while (j > 0 && T[i] != T[j]) j = fail[j];
        // 如果当前字符匹配，匹配长度加 1
        if (T[i] == T[j]) ++j;
        // 更新部分匹配表
        fail[i + 1] = j;
    }
    return fail;
}

int main() {
    string S, T;                // S 为输入字符串，T 为需要匹配的模式串
    cin >> S >> T;

    auto fail = buildFail(T);   // 构建模式串 T 的部分匹配表
    vector<char> stk;           // 栈，用于存储当前未被匹配的字符
    vector<int> matchLen;       // 栈，用于存储当前匹配的长度

    stk.reserve(S.size());      // 预留栈的空间，避免频繁扩容
    matchLen.reserve(S.size()); // 预留匹配长度栈的空间

    for (char c : S) {          // 遍历输入字符串 S 的每个字符
        stk.push_back(c);       // 将当前字符压入栈中

        // 计算当前匹配长度
        int prev = matchLen.empty() ? 0 : matchLen.back(); // 获取前一个匹配长度
        while (prev > 0 && c != T[prev]) {                 // 如果当前字符不匹配，回退
            prev = fail[prev];
        }
        if (c == T[prev]) ++prev;                          // 如果当前字符匹配，匹配长度加 1
        matchLen.push_back(prev);                          // 更新匹配长度栈

        // 如果匹配到整个模式串 T，则弹出 |T| 个字符
        if (prev == (int)T.size()) {
            for (int k = 0; k < (int)T.size(); ++k) {
                stk.pop_back();    // 弹出栈中的字符
                matchLen.pop_back(); // 弹出匹配长度栈中的值
            }
        }
    }

    // 输出剩余栈内字符
    string result(stk.begin(), stk.end()); // 将栈中的字符拼接成字符串
    cout << result << "\n";                // 输出结果
    return 0;
}

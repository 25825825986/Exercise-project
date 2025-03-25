#include <iostream>
#include <string>
using namespace std;

//git remote add origin https://github.com/25825825986/Exercise-project.git
//ssh-keygen -t rsa -b 4096 -C "153299005@qq.com"



class Student{
    public:
        int m_id;
        string m_name;

        // 赋值学号
        void set_id(int id){
            m_id = id;
        }

        //赋值姓名
        void set_name(string name){
            m_name = name;
        }

        //显示学生信息
        void show(){
            cout << "ID: " << m_id << endl;
            cout << "Name: " << m_name << endl;
        }
};

int main(){
    int m, n, p, q, k = 0;
    cin >> m >> n >> p >> q;
    int c[m * n];
    int a[m][n], b[p][q];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[k] = a[i][j];
            k++;
        }
    }

    k = 0;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            b[i][j] = c[k];
            cout << b[i][j] << " ";
            if(j == q-1)cout << endl;
            k++;
        }
    }
    return 0;
}
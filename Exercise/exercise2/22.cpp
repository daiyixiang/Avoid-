#include<bits/stdc++.h>
#include"ex2.h"
using namespace std;

int main() {
    string b[11];
    b[0] = "sadadsasdasd";
    b[1] = "sdasdadsadsa";
    struct User a;
    a.name = "daiyixiang";
    cout<<b[1];
    a.password = "aa";
    a.type = 3;
    add_blog("my_name is daiyixiang","adasdasdasda dasdoioij daiyixiang d  daiyixiang dddd daiyixiang",a);
    add_blog("asdasdasd_daiyixiang_daiyixiang","daiyixiangdaiyixiangdaiyixiang",a);
    cout<<a.blog_list->size<<endl;
    cout<<frequency(a,"daiyixiang");
}
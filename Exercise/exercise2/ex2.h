#ifndef _EX2_H_
#define _EX2_H_
#include <bits/stdc++.h>
using namespace std;
struct Blog_list
{
    string titles[10];
    string contents[10];
    int size = 0;
};
struct User
{
    string name;
    string password;
    int type;
    Blog_list *blog_list = (struct Blog_list*)malloc(sizeof(struct Blog_list));
};

void log_in(string testName,string testPassword,struct User user){
    if(testName==user.name&&testPassword==user.password){
        if(user.type==0){
            cout<<"Root user logs in!"<<endl;
        }else if(user.type==1){
            cout<<"Administrator logs in!"<<endl;
        }else if(user.type==2){
            cout<<"VIP user logs in!"<<endl;
            cout<<"Ordinary user logs in!"<<endl;
        }else if(user.type==3){
            cout<<"Ordinary user logs in!"<<endl;
            
        }else {
            cout<<"user_type error!"<<endl;
        }
    }else{
        cout<<"Wrong username or password!"<<endl;
    }
}

void add_blog(string title, string content,struct User& user){

    if(user.type==3&&user.blog_list->size==5) {
        cout<<"Become VIP user for further service!"<<endl;
        return;
    }
    user.blog_list->titles[user.blog_list->size] = title;
    user.blog_list->contents[user.blog_list->size] = content;
    user.blog_list->size++;
}

int frequency(struct User& user, string word){
    int cnt = 0;
    int size = user.blog_list->size;
    for(int i=0; i<size; i++){
        string title = user.blog_list->titles[i];
        string content = user.blog_list->contents[i];
        for(int j=0; j<(int)title.length()-(int)word.length()+1; j++){
            string test = title.substr(j,word.length());
            if(test==word) cnt++;
        }
        for(int j=0; j<(int)content.length()-(int)word.length()+1;j++){
            string test = content.substr(j,word.length());
            if(test==word) cnt++;
        }
    }
    return cnt;
}
#endif
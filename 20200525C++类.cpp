很多知识都忘了，重新补习一下

派生类声明：
class boystU:public studenT
{
    //new members here
    //基类如果是自定构建函数，需要在列表初始化时初始化基类的变量
    //例如：
    public:
    boystU (std::string name,int age,char sex):
    studenT (name,age),gender (sex) {}
    //boystU不能直接访问studenT的私有成员
    //派生类定义的成员函数将覆盖基类的，若还想访问基类成员函数，用：
    boy1.studenT::display();
    //protected访问限制只让有血缘关系的对象范访问。

};

指针和引用：
1. 指针指向的数据的类型称为指针的基类型
2. int *a=int* a;
3. 通用指针（空指针）不能赋值给其他指针，但可以放入任意类型（除空）的地址。
4. 初始化指针考虑赋值为NULL，避免不必要危险；要注意指向对象被撤销产生的悬空指针
5. 对象指针访问成员函数方法：
ptr->display();
(*ptr).display();//括号保证避免优先级问题
5.5 .this指针可以解决命名问题？
6. 引用就是给变量的别名：
int x=3.14159;
int &pi=x;
int &π=pi;//可以建立引用的引用



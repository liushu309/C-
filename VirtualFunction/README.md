## C++中的纯虚函数
在C++中的一种函数申明被称之为：纯虚函数(pure virtual function).它的申明格式如下：
    class CShape
    {
    public:
        virtual void Show()=0;
    };
注意红色部分，在普通的虚函数后面加上"=0"这样就声明了一个pure virtual function.

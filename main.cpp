
#include "tinyxml.h"
#include <iostream>
#include <string>
using namespace std;
void loadXML() {
    TiXmlDocument doc;//申明一个文档类型变量，用来存储读取的xml文档
    if (!doc.LoadFile("XMLFile.xml"))	//检测xml文档是否存在
    {
        cerr << doc.ErrorDesc() << endl;
    }
    TiXmlElement* root = doc.FirstChildElement();//指向xml文档的根元素
    if (root == NULL)//检测根元素存在性		
    {
        cerr << "Failed to load file: No root element." << endl;
        doc.Clear();
    }
    //elem指向根的第一个孩子元素
    for (TiXmlElement* elem = root->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement()) {
        const char* arr = elem->Attribute("priority"); //通过元素属性寻找元素
        //if (strcmp(arr, "1") == 0) {
        //    TiXmlElement* elem1 = elem->FirstChildElement();
        //    TiXmlNode* node = elem1->FirstChild();//node指向elem1元素下的文本
        //    cout << node->Value() << endl;
        //}

        if (strcmp(arr, "2") == 0) {
            //TiXmlElement* elem1 = elem->FirstChildElement();
            TiXmlNode* node = elem->FirstChild();//node指向elem1元素下的文本
            cout << node->Value() << endl;
        }

        if (strcmp(elem->Value(), "Item1") == 0) { //也可以通过元素名寻找元素
            TiXmlNode* node = elem->FirstChild();
            cout << node->Value() << endl;
        }
    }
}
int main(int argc, char* argv[])
{
    loadXML();
    system("pause");
    return 0;
}
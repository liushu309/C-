
#include "tinyxml.h"
#include <iostream>
#include <string>
using namespace std;
void loadXML() {
    TiXmlDocument doc;//����һ���ĵ����ͱ����������洢��ȡ��xml�ĵ�
    if (!doc.LoadFile("XMLFile.xml"))	//���xml�ĵ��Ƿ����
    {
        cerr << doc.ErrorDesc() << endl;
    }
    TiXmlElement* root = doc.FirstChildElement();//ָ��xml�ĵ��ĸ�Ԫ��
    if (root == NULL)//����Ԫ�ش�����		
    {
        cerr << "Failed to load file: No root element." << endl;
        doc.Clear();
    }
    //elemָ����ĵ�һ������Ԫ��
    for (TiXmlElement* elem = root->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement()) {
        const char* arr = elem->Attribute("priority"); //ͨ��Ԫ������Ѱ��Ԫ��
        //if (strcmp(arr, "1") == 0) {
        //    TiXmlElement* elem1 = elem->FirstChildElement();
        //    TiXmlNode* node = elem1->FirstChild();//nodeָ��elem1Ԫ���µ��ı�
        //    cout << node->Value() << endl;
        //}

        if (strcmp(arr, "2") == 0) {
            //TiXmlElement* elem1 = elem->FirstChildElement();
            TiXmlNode* node = elem->FirstChild();//nodeָ��elem1Ԫ���µ��ı�
            cout << node->Value() << endl;
        }

        if (strcmp(elem->Value(), "Item1") == 0) { //Ҳ����ͨ��Ԫ����Ѱ��Ԫ��
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

#include <iostream>
#include <string>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;
void loadXML() {
    XMLDocument doc;//����һ���ĵ����ͱ����������洢��ȡ��xml�ĵ�
    if (!doc.LoadFile("XMLFile.xml"))	//���xml�ĵ��Ƿ����
    {
        // cerr << doc.ErrorDesc() << endl;
        std::cout << "cound not open file!" << std::endl;
    }
    XMLElement* root = doc.FirstChildElement();//ָ��xml�ĵ��ĸ�Ԫ��
    if (root == NULL)//����Ԫ�ش�����		
    {
        cerr << "Failed to load file: No root element." << endl;
        doc.Clear();
    }
    //elemָ����ĵ�һ������Ԫ��
    for (XMLElement* elem = root->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement()) {
        const char* arr = elem->Attribute("priority"); //ͨ��Ԫ������Ѱ��Ԫ��
        //if (strcmp(arr, "1") == 0) {
        //    TiXmlElement* elem1 = elem->FirstChildElement();
        //    TiXmlNode* node = elem1->FirstChild();//nodeָ��elem1Ԫ���µ��ı�
        //    cout << node->Value() << endl;
        //}

        if (strcmp(arr, "2") == 0) {
            //TiXmlElement* elem1 = elem->FirstChildElement();
            XMLNode* node = elem->FirstChild();//nodeָ��elem1Ԫ���µ��ı�
            cout << node->Value() << endl;
        }

        if (strcmp(elem->Value(), "Item1") == 0) { //Ҳ����ͨ��Ԫ����Ѱ��Ԫ��
            XMLNode* node = elem->FirstChild();
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
## 使用示例 
### 使用命名空间
    using namespace tinyxml2;
### 1. 打开文件
    XMLDocument doc;//申明一个文档类型变量，用来存储读取的xml文档
        if (!doc.LoadFile("XMLFile.xml"))	//检测xml文档是否存在
        {
            cerr << doc.ErrorDesc() << endl;
        }
    
### 2. 获取下了元素
    XMLElement* root = doc.FirstChildElement();//指向xml文档的根元素
    XMLElement* certen_elemant = doc.FirstChildElement("liushu");//指向xml文档的某个元素

### 3. 获取当前元素的值
    XMLlNode* node = elem->FirstChild();//node指向elem1元素下的文本  
    cout << node->Value() << endl;



// map是C++中STL中的一个关联容器，以键值对来存储数据，数据类型自己定义。它的内部数据结构是红黑树，
// 所有它是由默认排列顺序的，同时map，它是一对一的，具体就是键值是唯一的，跟哈希表的概念差不多。

//包含头文件<map>

//定义map
map<datatype1,datatype2> mp;
datatype1是键(key),datatype2是值(ans);
map <string,int> mp;

定义map类型，是有模板的，他接受三个参数：
第一个参数是键的数据类型
第二个参数是值的数据类型
第三个参数是排序规则，不写的话就按照默认的排序规则，也就是按照键的升序


//向map中添加元素element
以map<string,int> mp;为例：

第一种：
mp["uiui"]=100;

第二种：
mp.insert(make_pair("Anna",1));
m.insert(pair<string,int>(s,id));//insert添加元素


//map的遍历


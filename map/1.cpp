// map是C++中STL中的一个关联容器，以键值对来存储数据，数据类型自己定义。它的内部数据结构是红黑树，
// 所有它是由默认排列顺序的，同时map，它是一对一的，具体就是键值是唯一的，跟哈希表的概念差不多。

//包含头文件<map>

//定义map
运行效率方面：unordered_map最高，而map效率较低但 提供了稳定效率和有序的序列。
占用内存方面：map内存占用略低，unordered_map内存占用略高,而且是线性成比例的。

unordered_map 无序map，查询key效率更高

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

//第一种
for(auto &i:mp){
    cout<<i->first<<i->second;
}

//第二种
for(const auto &[key,value]:mp){
    cout<<key<<value;
}


//map查找元素
// 查找数据有两种办法，一个使用find函数还有一个是用count函数（当然了，你查找数据，很明显要查找的
// 肯定是键吧，没有查找值的吧，哈哈哈）
// （1）find函数
// find函数查找成功会返回指向它的迭代器，没有找到的话，返回的是end这个迭代器
// （2）count函数
// count函数的意思就是查找这个键的出现次数，map中键是唯一的，所以它的值要么是0
// 要么是1，是1不就是查找成功吗，不过它的缺点也可以知道，它可以确定是否存在这个
// 键，可是却不能确定这个键的位置
if(mp.find(aaa)!=mp.end()){
    成功找到
}
else{
    无此元素
}

if(mp.count()){
    成功找到
}
else{
    无此元素
}


//删除数据
删除map中的数据用到的是erase函数啦
erase里的参数可以直接写键，也可以写迭代器。
erase(m.begin(),m.end());//这句话代表清空m中的内容
m.erase("uuu");

map<string,int>::iterator ii;
	ii=m.find("opop");
	if(ii!=m.end()){
		m.erase(ii);//存在opop键，就删除
	}


//map初始化时排序

struct CmpByKeyLength {  
  bool operator()(const string& k1, const string& k2) {  
    return k1.length() < k2.length();  
  }  
};
map<string, int, CmpByKeyLength > mapStudent;  //这里注意要换成自己定义的compare

//用sort实现对map的排序
map按value排序
map转存到vector中
vector<PAIR> name_score_vec(name_score_map.begin(), name_score_map.end());  
sort(name_score_vec.begin(), name_score_vec.end(), CmpByValue()); 






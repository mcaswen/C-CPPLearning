#include <iostream>
#include <random>

//基本单例模式的使用
class Singleton1 
{
public:

    static Singleton1& GetInstance() 
    {
        return s_Instance;
    }

    void Function() {}
        
private:
    Singleton1() {}
    ~Singleton1() {}

    //防复制
    Singleton1(const Singleton1&) = delete;

    //防赋值
    Singleton1& operator =(const Singleton1&) = delete;

    //声明
    static Singleton1 s_Instance;

    float m_Member = 0.0f;

};

//定义并初始化静态成员变量
Singleton1 Singleton1::s_Instance;

//无需在声明并在外部定义静态成员变量的单例
class Singleton2 
{
public:
    static Singleton2& GetInstance() 
    {
        static Singleton2 instance; //第一次访问时创建，此后一直存在直到程序结束
        return instance;
    }

    void Function() {}
        
private:
    Singleton2() {}
    ~Singleton2() {}

    //防复制
    Singleton2(const Singleton2&) = delete;

    //防赋值
    Singleton2& operator =(const Singleton2&) = delete;
    float m_Member = 0.0f;
};

void Test1() 
{
    Singleton1::GetInstance().Function();

    //值拷贝！读写的实则是Instance副本的数据，无意义
    //auto Instance = Singleton1::GetInstance(); 

    //正确读写全局单例的数据版本
    auto& Instance = Singleton1::GetInstance(); 

}

//随机数示例
class RandomNumberGenerater 
{
public:
    static RandomNumberGenerater& GetInstance() 
    {
        static RandomNumberGenerater instance; 
        return instance;
    }

    // int GetRandomInt(int min, int max) 
    // {
    //     // 将引擎输出的原始随机数映射到特定的统计分布和范围上
    //     auto dist = std::uniform_int_distribution<int>(min, max); 
    //     return dist(m_Engine);

    // }

    // float GetRandomFloat(float min, float max) 
    // {
    //     auto dist = std::uniform_real_distribution<float>(min, max);
    //     return dist(m_Engine);
    // }

    //这么封装的话无需Get().xxx
    static int GetRandomInt(int min, int max) 
    {
        return GetInstance().IGetRandomInt(min, max);
    }

    static float GetRandomFloat(float min, float max) 
    {
        return GetInstance().IGetRandomFloat(min, max);
    }

private:
    RandomNumberGenerater() 
    {
        InitializeRandomEngine();
    }
    ~RandomNumberGenerater() {}

    RandomNumberGenerater(const RandomNumberGenerater&) = delete;

    RandomNumberGenerater& operator =(const RandomNumberGenerater&) = delete;

    std::mt19937 m_Engine; //负责​​产生高质量的、均匀分布​​的​​原始伪随机数序列,本质是数学算法

    //或
    int IGetRandomInt(int min, int max) 
    {
        // 将引擎输出的原始随机数映射到特定的统计分布和范围上
        auto dist = std::uniform_int_distribution<int>(min, max); 
        return dist(m_Engine);

    }

    float IGetRandomFloat(float min, float max) 
    {
        auto dist = std::uniform_real_distribution<float>(min, max);
        return dist(m_Engine);
    }

    void InitializeRandomEngine() 
    {
        std::random_device rd; // ​​初始化引擎内部状态的起始值​​, 决定了引擎​​整个随机序列的起点
        m_Engine.seed(rd());
    }
};

void Test2() 
{
    std::cout << RandomNumberGenerater::GetRandomInt(10, 500) << std::endl;
}

int main() 
{
    Test2();
}
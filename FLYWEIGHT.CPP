#include<iostream>
using namespace std;
class Forever
{
  public:
    Forever(int my_value)
    {
        m_value_one = my_value;
        cout << "tor: " << m_value_one << '\n';
    }
    ~Forever()
    {
        cout << m_value_one << ' ';
    }
    void report(int our_value)
    {
        cout << m_value_one << our_value << ' ';
    }
  private:
    int m_value_one;
};

class Industry
{
  public:
    static Forever *get_fly(int in)
    {
        if (!s_pool[in])
          s_pool[in] = new Forever(in);
        return s_pool[in];
    }
    static void clean_up()
    {
        cout << "tors: ";
        for (int i = 0; i < X; ++i)
          if (s_pool[i])
            delete s_pool[i];
        cout << '\n';
    }
    static int X, Y;
  private:
    static Forever *s_pool[];
};

int Industry::X = 6, Industry::Y = 10;
Forever *Industry::s_pool[] =
{
  0, 0, 0, 0, 0, 0
};

int main()
{
  for (int i = 0; i < Industry::X; ++i)
  {
    for (int j = 0; j < Industry::Y; ++j)
      Industry::get_fly(i)->report(j);
    cout << '\n';
  }
  Industry::clean_up();
}

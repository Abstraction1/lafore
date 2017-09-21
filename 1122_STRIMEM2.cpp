#include <iostream>
#include <cstring>

class strCount
{
private:
    int count;
    char* str;
    friend class String;
public:
    strCount(char* s)
    {
        int length = std::strlen(s);
        str = new char[length + 1];
        std::strcpy(str, s);
        count = 1;
    }

    ~strCount()
    {
        delete[] str;
    }
};

class String
{
private:
    strCount* psc;
public:
    String()
    {
        psc = new strCount("NULL");
    }

    String(char* s)
    {
        psc = new strCount(s);
    }

    String(String& S)
    {
        std::cout << "\ncopy constructor";
        psc = S.psc;
        (psc->count)++;
    }

    ~String()
    {
        if(psc->count == 1)
        {
            delete psc;
        }
        else
        {
            (psc->count)--;
        }
    }

    void display()
    {
        std::cout << psc->str;
        std::cout << " (addr =" << psc << ")";
    }

    String& operator =(String& S)
    {
        if(this == &S)
        {
            return *this;
        }

        std::cout << "\nassignment";
        if(psc->count == 1)
        {
            delete psc;
        }
        else
        {
            (psc->count)--;
        }
        psc = S.psc;
        (psc->count)++;
        return *this;
    }
};

int main(int argc, char *argv[])
{
    String s3 ("Hello");
    std::cout << "\ns3 = "; s3.display();
    String s1, s2;
    s1 = s2 = s3;
    std::cout << "\ns1 = "; s1.display();
    std::cout << "\ns2 = "; s2.display();
    std::cout << std::endl;
    return EXIT_SUCCESS;
}

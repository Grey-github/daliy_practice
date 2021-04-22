#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //以输出模式开启seq_data.txt
    ofstream outfile("seq_data.txt");

    //以追加模式(append mode)开启seq_data.txt
    //新数据会被追加到文件末尾
    //oftream outfile("seq_data.txt", ios_base::app);

    if (!outfile)
    {
        //因为某种原因，文件无法打开
        cerr << "Oops! Unable to save session data!\n";
    }
    else
    {
        //ok:outfile开启成功,接下来将数据写入
        outfile << usr_name <<' '
                << num_tries << ' '
                << num_right << endl;
    }

    //以读取模式(input mode)开启infile
    ifstream infile("seq_data.txt");

    int num_tries = 0;
    int num_cor = 0;

    if (!infile)
    {
        //由于某种原因，文件无法打开
        //我们将假设这是一位新的用户
    }
    else
    {
        //ok:读取文件中的每一行
        //  检查这个用户是否曾经玩过这个程序
        //每一行的格式：
        //  name num_tries num_correct
        //nt:猜过的总次数(num_tries)
        //nc:猜对的总次数(num_correct)

        string name;
        int nt;
        int nc;

        while (infile >> name)
        {
            infile >> nt >> nc;
            if (name == usr_name)
            {
                //找到他了
                cout << "Welcome back, " << usr_name
                     << "\nYour corrent score is " << nc
                     << " out of " << nt << "\nGood Luck!\n";

                num_tries = nt;
                num_cor = nc;
            }
        }
    }

    //如果想要同时读写同一个文件
    //我们得定义一个fstream对象
    //为了以追加模式(append mode)开启
    //我们得以传入第二参数值(ios_base::in|ios_base::app)
    fstream iofile("seq_data.txt", ios_base::in|ios_base::app);

    if (!iofile)
    {
        //由于某种原因，文件无法开启
    }
    else
    {
        //开始读取之前，将文件重新定位至起始处
        iofile.seekg(0);
        //其他部分都和先前讨论的相同
    }
}


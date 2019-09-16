 #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <sstream>
    using namespace std;
    int main (int argc, char * const argv[]) {
        int numberCount;
        int maxNumbers;
        int counter = 0;
             int = {5,6,18,19,34};
             int = {5,25,28,29,40};
             int = {17,24,26,37,43};
             int = {1,8,14,34,42};
             int = {19,26,31,32,42};
             int = {5,14,27,35,40};
             int = {28,32,33,37,43};
             int = {2,13,18,41,45};
             int = {1,4,6,10,41};
        cout << "Lottery Game" << endl << "=================================" << endl;
        cout << "How many Lottery Numbers = ";
        cin >> numberCount;
        cout << "from 1 to ? ";
        cin >> maxNumbers;
        cout << "You have chosen " << numberCount << " Lottery Numbers from 1 to " << maxNumbers << endl;
        int lotteryNumbers[numberCount];
        int a, b;
        bool newNumber;
        long t;
        srand(time(NULL));
        for (t=0; t<10; t++){
        for(a=0; a<numberCount; a++)
        {
            do
            {   
                lotteryNumbers[a] = rand() % maxNumbers + 0;
                newNumber = true;
                for (b=0; b<a; b++)
                {
                    if (lotteryNumbers[a]==lotteryNumbers[b])
                    {
                        newNumber = false;
                    }
                    else
                         switch (lotteryNumbers[b])
                         {
                       lotteryNumbers[a] = rand() % maxNumbers + 0;
                                             newNumber = true;
                                 }
                }
            } while (!newNumber);
        }
        for (a=0; a<numberCount; a++)
        {
            cout << lotteryNumbers[a] << " ";
        }
        cout <<"("<<counter++<<")"<< endl;
}
}

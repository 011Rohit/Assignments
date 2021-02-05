#include<iostream>

using namespace std;
void calculate(int ROW1,int ROW2,int COL1,int COL2){
int i, j, arr1[100][100],
              arr2[100][100],
              arr3[100][100];


              if(ROW1 <=0 || ROW2 <=0|| COL1<=0 || COL2<=0 )
                cout<<"invalid input try again"<<endl;
                else if(ROW1 > 1000 || ROW2 >1000 || COL1>1000 || COL2>1000)
                    cout<<"out of range ";
              else {

 cout<<"Enter first matrix elements \n";

    // input first matrix
    for(i = 0; i < ROW1; i++)
    {
        for(j = 0; j < COL1; j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"\nEnter second matrix elements ";

    // input second matrix
    for(i = 0; i < ROW2; i++)
        {
        for(j = 0; j < COL2; j++)
        {
            cin>>arr2[i][j];
        }
    }

    printf("\narr1 * arr2 = ");

    // multiply two matrices
    for(i = 0; i < ROW1; i++)
    {
        for(j = 0; j < COL2; j++)
        {
            arr3[i][j] = 0;
             for(int k = 0; k < COL1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }

        printf("\n");
    }

    // print the result
    for(i = 0; i < ROW2; i++)
    {
        for(j = 0; j < COL2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
              }
}
int main()
{
    int ROW1;
    int ROW2;
    int COL1;
    int COL2;

            cout<<"enter row and column value for first matrix ";
              cin>>ROW1>>COL1;

              cout<<"enter row and column value for second matrix ";
              cin>>ROW2>>COL2;

    calculate(ROW1,ROW2,COL1,COL2);

    // signal to operating system everything works fine
    return 0;
}

#include <iostream>

using namespace std;

//TASK-03
int main()
{

    int row,column;
    cout<<"Enter the size of row::"<<endl;
    cin>>row;

    int **arrayPtr = new int*[row];

    int elementsNum;


    int *columnSize =new int[5];// to store elements number which user gives (basically to keep a track)

    for(int i=0;i<row;i++){
        cout<<"How many elements you want add in row "<< i <<"?::"<<endl;
        cin>>elementsNum;
        arrayPtr[i] = new int[elementsNum];
        columnSize[i]=elementsNum;

        for(int j=0;j<elementsNum;j++){
            cout<<"Enter the elements for row no "<< i <<"::"<<endl;
            cin>>arrayPtr[i][j];


        }
    }


    //Printing Part
    for(int i=0;i<row;i++){
        for(int j=0;j<columnSize[i];j++){

           cout<<arrayPtr[i][j]<<" ";
        }
        cout<<endl;

    }










    //Deallocating Part
    for(int i=0;i<row;i++){
        delete[] arrayPtr[i];

    }
    delete[] arrayPtr;
    delete[] columnSize;



   arrayPtr=NULL;
   columnSize=NULL;



    return 0;
}

#include <iostream>

using namespace std;

//TASK-02

int main()
{



    int row,column;
    cout<<"Enter the size of row::"<<endl;
    cin>>row;

    cout<<"Enter the size of column::"<<endl;
    cin>>column;
        char **arrayPtr = new char*[row];

        for(int i=0; i<row; i++)
        {
        arrayPtr[i]=new char[column];
        }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"Enter the characters in the array ::"<<endl;
            cin>>arrayPtr[i][j];
        }

    }


      cout<<"The values in String form:"<<endl;
      for(int i=0;i<row;i++){


            cout<<arrayPtr[i];

        cout<<endl;

    }


     //Deallocating Part
    for(int i=0;i<row;i++){
        delete[] arrayPtr[i];
    }
    delete[] arrayPtr;



  arrayPtr=NULL;




return 0;

}

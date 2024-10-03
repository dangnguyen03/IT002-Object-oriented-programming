#include <iostream>
using namespace std;
#define MAXROW 300
#define MAXCOLUMN 300
class Matrix
{
private:
    int row, column;
    int data[100][100];
public:
    Matrix()
    {
        row=column = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                data[i][j]=0;
            }        
        }
    }
    Matrix(int r, int c, int x)
    {
        row=r;
        column = c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                data[i][j]= x;
            }        
        }
    }
    Matrix(int r, int c)
    {
        row = r;
        column = c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                data[i][j]= 0;
            }        
        }
    }
    bool operator == (const Matrix other)
    {
        if (this->row!=other.row || this->column != other.column) return 0;
        for (int i = 0; i < other.row; i++)
        {
            for (int j=0; j < other.column; j++)
            {
                if (this->data[i][j]!=other.data[i][j]) return 0;
            }
        }
        return 1;
    }
    bool operator != (const Matrix other)
{
    if (this->row!=other.row || this->column != other.column) return 1;
    for (int i = 0; i < other.row; i++)
    {
        for (int j=0; j < other.column; j++)
        {
            if (this->data[i][j]!=other.data[i][j]) return 1;
        }
    }
    return 0;
}
    Matrix operator + (const Matrix other)
    {
        Matrix temp;
        temp.row = this->row;
        temp.column = this->column;
        for(int i=0 ; i < other.row; i++)
        {
            for (int j=0; j<other.column; j++)
            {
                temp.data[i][j] = this->data[i][j];
                temp.data[i][j] += other.data[i][j];
            }
        }
        return temp;
    }
    Matrix operator - (const Matrix other)
{
        Matrix temp;
        temp.row = this->row;
        temp.column = this->column;
        for(int i=0 ; i < other.row; i++)
        {
            for (int j=0; j<other.column; j++)
            {
                temp.data[i][j] = this->data[i][j];
                temp.data[i][j] -= other.data[i][j];
            }
        }
        return temp;
}
    Matrix &operator += (const Matrix other)
{
    for(int i=0 ; i < other.row; i++)
    {
        for (int j=0; j<other.column; j++)
        {
            this->data[i][j] += other.data[i][j];
        }
    }
}
    Matrix &operator -= (const Matrix other)
{
    for(int i=0 ; i < other.row; i++)
    {
        for (int j=0; j<other.column; j++)
        {
            this->data[i][j] -= other.data[i][j];
        }
    }
}	
    Matrix operator * (const Matrix other)
{
    Matrix temp(other.row,this->column);

    for(int i=0 ; i < other.row; i++)
    {
        for (int j=0; j< this->column; j++)
        {
            for (int k = 0; k < other.column; k++)
            {
                temp.data[i][j]+=other.data[i][k]*this->data[k][j];
            }
        }
    }
    return temp;
}
    Matrix &operator *= (const Matrix other)
{
    Matrix temp(other.row,this->column);
    for(int i=0 ; i < other.row; i++)
    {
        for (int j=0; j< this->column; j++)
        {
            for (int k = 0; k < other.column; k++)
            {
                temp.data[i][j]+=other.data[i][k]*this->data[k][j];
            }
        }
    }
    this->column=temp.column;
    this->row=temp.row;
    for (int i = 0; i < temp.row; i++)
    {
        for (int j = 0; j < temp.column; j++)
        {
            this->data[i][j]=temp.data[i][j];
        }
    }
}
    Matrix &operator ++()
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->column; j++)
            {
                ++this->data[i][j];
            }          
        }     
        return *this; 
    }
    Matrix operator ++(int)
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->column; j++)
            {
                this->data[i][j]++;
            }          
        }    
        return *this;  
    }
    Matrix &operator --()
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->column; j++)
            {
                --this->data[i][j];
            }          
        }     
        return *this; 
    }
    Matrix operator --(int)
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->column; j++)
            {
                this->data[i][j]--;
            }          
        }    
        return *this;  
    }
    friend bool AvailableAdd(Matrix m1, Matrix m2);
    friend istream & operator >> (istream& in, Matrix &m);
    friend ostream & operator << (ostream& out, Matrix m);
    ~Matrix(){}
};
bool AvailableAdd(Matrix m1, Matrix m2)
{
    return m1.column == m2.column && m1.row == m2.row ;
}

ostream &operator << (ostream& out, Matrix m)
{
    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.column; j++)
        {
            out  <<  m.data[i][j] << ' ';
        }       
        out <<endl; 
    }
    return out;
}

istream &operator >> (istream& in, Matrix &m)
{
    cout << "Enter rows: ";
    in >> m.row;
    cout << "Enter columns: ";
    in >> m.column;
    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.column; j++)
        {
            in >> m.data[i][j];
        }        
    }
    return in;
}
int main()
{
	// Đề bài yêu cầu đa năng hóa toán tử, không yêu cầu xử lý hàm main
    return 0;
}
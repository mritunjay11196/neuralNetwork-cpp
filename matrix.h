
#ifndef matrix_h
#define matrix_h

#include <iostream>
#include <vector>

class Matrix
{
private:
    int row;
    int column;
    std::vector<std::vector<double>> values;
public:
    Matrix(int row, int column, bool isRandom);
    Matrix* transpose();
    
    double getRandomNumber() { return (double)(std::rand()%100)/100; }
    void printToConsole();
    
    void setValue(int row, int column, double val) { this->values[row][column] = val; };
    double getVal(int row, int column) { return this->values[row][column]; };
    
    int getRow() { return this->row; }
    int getColumn() { return this->column; }
};

Matrix::Matrix(int row, int column, bool isRandom)
{
    this->row = row;
    this->column = column;
    
    for(int i=0; i<row; i++)
    {
        std::vector<double> columnValues;
        for(int j =0; j<column; j++)
        {
            double  r = 0.00;
            if(isRandom)
            r = this->getRandomNumber();
            columnValues.push_back(r);
        }
        this->values.push_back(columnValues);
    }
}

Matrix* Matrix::transpose()
{
    Matrix* m = new Matrix(this->column, this->row, false);
    
    for(int i=0; i<row; i++)
        for(int j=0; j<column; j++)
            m->setValue(j, i, this->getVal(i, j));
    
    return m;
        
}



void Matrix::printToConsole()
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            std::cout << this->values[i][j]<<"  ";
        }
        std::cout<<std::endl;
    }
    
}






#endif /* matrix */

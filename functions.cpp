#include <iostream>
using namespace std;
int maxarray(int a[][3]);
int minarray(int a[][3]);
double arrayaverage(int a[][3]);
void rowssum(int a[][3]);
void binary(int num);
void octal(int num);
void colproduct(int a[][3]);
void diagonal(int a[][3]);
int trace(int a[][3]);
bool isprime(int n);
void comb();
int main()
{
    char choice;
    bool check=0;
    do
    {
        int a[3][3];
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
            {
                cout<<"Enter a number= ";
                cin>>a[i][j];
            }
        }
        cout<<"Elements of 3*3 mtrix are= " <<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j=0; j<3; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        int max= maxarray(a);
        cout<<"-------Maximum-------"<<endl;
        cout<<"Maximum Number of 3*3 matrix= "<<max<<endl;
        int min= minarray(a);
        cout<<"-------Minimum-------"<<endl;
        cout<<"Minimum Number of 3*3 matrix= "<<min<<endl;
        double avg= arrayaverage(a);
        cout<<"-------Average-------"<<endl;
        cout<<"Average of 3*3 matrix= "<<avg<<endl;
        rowssum(a);
        colproduct(a);
        diagonal(a);
        int t= trace(a);
        cout<<"--------Trace of matrix------"<<endl;
        cout<<"Trace of matrix= "<<t<<endl;
        if(t<=100)
        {
            check= isprime(t);
            if(check==1)
            {
                cout<<"TRACE is Prime"<<endl;
            }
            else
            {
                cout<<"TRACE is not Prime"<<endl;
            }
        }
        else
        {
            comb();
        }
        cout<<"Do you want to continue? Enter Y for yes and N for no= ";
        cin>>choice;
    } while (choice=='y'||choice=='Y');
}
int maxarray(int a[][3])
{
    int max= a[0][0];
    for(int i=0; i<3; i++)
    {
        for( int j=0; j<3; j++)
        {
            if(max < a[i][j])
            {
                max= a[i][j];
            }
        }
    }
    return max;
}
int minarray(int a[][3])
{
    int min=a[0][0];
    for(int i=0; i<3; i++)
    {
        for( int j=0; j<3; j++)
        {
            if(min > a[i][j])
            {
                min= a[i][j];
            }
        }
    }
    return min;
}
double arrayaverage(int a[][3])
{
    int sum=0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            sum= sum+a[i][j];
        }
    }
    double avg= double(sum)/9;
    return avg;
}
void rowssum(int a[][3])
{
    cout<<"-------Sum of Rows-------"<<endl;
   for (int i=0; i<3; i++)
    {
        int s=0;
        for (int j=0; j<3; j++)
        {
            s= s+a[i][j];
        }
        cout<<"Sum of row "<<i+1<<" = "<<s<<endl;
        if(s>=100)
        {
            binary(s);
        }
        else
        {
            octal(s);
        }
    } 
}
void binary(int num)
{
    int n=num;
    int r,binary=0,i=1;
    while(num!=0)
    {
        r=num%2;
        num=num/2;
        binary=binary+(r*i);
        i=i*10;
    }
    cout<<"\tBinary of "<<n<<" is= "<<binary<<endl;
}
void octal(int num)
{
    int n=num;
    int r,octal=0,i=1;
    while(num!=0)
    {
        r=num%8;
        num=num/8;
        octal=octal+(r*i);
        i=i*10;
    }
    cout<<"\tOctal of "<<n<<" is= "<<octal<<endl;
}
void colproduct(int a[][3])
{
    cout<<"-------Product OF Columns-------"<<endl;
    int k=0, p, j=0;
    while(k<3)
    {
        p=1;
        for (int i=0; i<3; i++)
        {
            p= p*a[i][j];
        } 
        cout<<"Product of column "<<j+1<<" = "<<p<<endl;
        j++;
        k++;
    }
}
void diagonal(int a[][3])
{
    cout<<"-------Diagnal Values are-------"<<endl;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if(i==j)
            {
                cout<<a[i][j]<<endl;
            }
        }
    }
}
int trace(int a[][3])
{
    int sum=0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if(i==j)
            {
                sum= sum+a[i][j];
            }
        }
    }
    return sum;
}
bool isprime(int n)
{
    bool p=1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            p=0; 
            break;
        }
    }
    return p;
}
void comb()
{
    int a[5];
    for(int i=0; i<5; i++)
    {
        cout<<"Enter a number= ";
        cin>>a[i];
    }
    cout<<"-------Elements of Array are-------"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" , ";
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<a[i]<<","<<a[j]<<endl;
        }  
    }
}

/*Case Study 2: Bank Transaction History
A bank account has 12 months of transaction amounts (positive = credit, negative =
debit).
Questions:
Calculate the net balance at end of year.
Find the month with highest credit and highest debit.
Count the number of credit and debit transactions separately.
Display all months where the transaction was a debit. */

#include <iostream>
using namespace std;

int main()
{
    int size = 12;
    int transaction[size] = {2000, 7000, 15000, -12000, -27700, -6000, 3000, 5000, -9000, 10000, -5000, 11000};
    cout<<"*******Annual transaction details********"<<endl;
    // finding ner value
    int netbal = 0;
    int credit  = 0;
    int debit = 0 ;
     int creditcount= 0;
    int debitcount = 0 ;
    for(int j =0; j<size; j++)
    {
        netbal  = netbal + transaction[j];
    }
    //for finding total credit and debit
    for(int k =0; k<size; k++)
    {
        if(transaction[k]>= 0)
        {
            credit = credit + transaction[k];
            creditcount++;
        }
        else
        {
            debit = debit + transaction[k];
            debitcount++;
        }
    }

    int high_credit  =  transaction[0]; 
    int high_debit  =  transaction[0]; 


    for(int l=0; l<size; l++)
    {
        if(transaction[l] > high_credit)
        {
            high_credit = transaction[l];
        }
        if(transaction[l] < high_debit) 
        {
            high_debit = transaction[l];
        }
    }

    
    for(int l=0; l<size; l++)
    {
      if(transaction[l] > 0)
      {
         cout << "Credit Month " << l + 1
                 << ": " << transaction[l] << endl;
      }
      if(transaction[l] < 0)
      {
         cout << "Debit Month " << l + 1
                 << ": " << transaction[l] << endl;
      }
    }

   


    cout<<"Net Annually balance :" <<netbal<<endl;
    cout<<"Annually credit  :" <<credit<<endl;
    cout<<"Annually debit :" <<debit<<endl;
    cout<<"High Credit :"<<high_credit<<endl;
    cout<<"High Debit  :"<<high_debit<<endl;
    cout<<"Total Credit :"<<creditcount<<endl;
    cout<<"Total Debit  :"<<debitcount<<endl;
  




}

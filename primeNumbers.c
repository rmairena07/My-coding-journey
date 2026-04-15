#include <stdio.h>
#include <stdbool.h>

#define MAX 50

int main()
{
    int primes[MAX] = {2,3}; //Hardcode first 2 prime numbers
    bool isPrime = true; //flag condition
    int i; //iterador
    int num; //number being checked
    int count = 2; //guardamos los 2 hard coded prime numbers en nuestra cuenta de primes

    for(num = 4; num<=100; num++) //comenzamos del 4 al 100 y vamos increasing
    {
        
        isPrime = true; //asumimos que num es prime
        for(i =2; i<num;i++)//para iterador en la 2nda posicion mientras sea menor que el numero que estamos checking lo vamos a increase
        {
            if (num % i == 0) //if num thats being checked divided by the iterator is == 0 we have found a not prime number and we exit out of the loop and repeat with the next one
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime) //if after dividing the number is still prime we add it to our arrary
        {
            primes[count] = num;
            count++;
        }
    }
    
    for(i=0; i<count ;i++)
    {
        printf("%d\n", primes[i]); //printing the result 
    }
    return 0;
}
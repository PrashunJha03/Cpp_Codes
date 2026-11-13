// A polling team stores votes received by candidates in an array. Write a program using functions to calculate total votes, identify the winner, and βind the vote difference between winner and runner-up.


#include <stdio.h>

// Function to calculate total votes
int totalVotes(int votes[], int n)
{
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        total += votes[i];
    }
    return total;
}

// Function to find the winner
int findWinner(int votes[], int n)
{
    int max = 0;
    for(int i = 1; i < n; i++)
    {
        if(votes[i] > votes[max])
        {
            max = i;
        }
    }
    return max;
}

// Function to find vote difference
int voteDifference(int votes[], int n)
{
    int first = -1, second = -1;

    for(int i = 0; i < n; i++)
    {
        if(first == -1 || votes[i] > votes[first])
        {
            second = first;
            first = i;
        }
        else if(second == -1 || votes[i] > votes[second])
        {
            second = i;
        }
    }

    if(second == -1)
        return 0;

    return votes[first] - votes[second];
}

int main()
{
    int n, votes[100];

    printf("Enter number of candidates: ");
    scanf("%d", &n);

    printf("Enter votes for each candidate:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &votes[i]);
    }

    printf("Total Votes = %d\n", totalVotes(votes, n));

    int winner = findWinner(votes, n);

    printf("Winner is Candidate %d\n", winner + 1);

    printf("Vote Difference = %d\n",
           voteDifference(votes, n));

    return 0;
}

/*A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back of the book. They always turn pages one at a time. When they open the book, page  is always on the right side:
When they flip page , they see pages  and . Each page except the last page will always be printed on both sides. The last page may only be printed on the front, given the length of the book. If the book is  pages long, and a student wants to turn to page , what is the minimum number of pages to turn? They can start at the beginning or the end of the book.
Given  and , find and print the minimum number of pages that must be turned in order to arrive at page 
Using the diagram above, if the student wants to get to page , they open the book to page , flip  page and they are on the correct page. If they open the book to the last page, page , they turn  page and are at the correct page. Return .
*/

#include <bits/stdc++.h>

using namespace std;

int func(int n,int p){
    int frontTurns = p/2;
    int backTurns = n/2 - p/2;

    return min(frontTurns,backTurns);
}

int main(){
    int n,p;
    cout<<"Enter total no.of pages in the book"<<endl;
    cout<<"Enter page to be opened"<<endl;
    cin>>n>>p;
    cout<<func(n,p);

    return 0;
}
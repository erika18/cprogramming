include <iostream>
using namespace std;
int merge(int b[],int c[],int a[],int p,int q)
{
    int i=0,j=0,k=0;

    while(i<p&&j<q)
    {
        if(b[i]<=c[j])
          {
              a[k]=b[i];
              i=i+1;
          }
          else
          {
              a[k]=c[j];
              j=j+1;
          }
        k=k+1;
    }
    if(i==p)
    {
       for(int l=j;l<q;l++)
       {
            a[k++]=c[l];
        }
    }
    else
    {
        for(int m=i;m<p;m++)
        {
            a[k++]=b[m];
        }
    }
    return 0;
}
void merge_sort(int a[],int n)
{
    int i=0;
    int b[20],c[20];
    int p=0,q=0;
    if(n>1)
    {
        for(i=0;i<n/2;i++)
           b[p++]=a[i];
        for(i=n/2;i<n;i++)
            c[q++]=a[i];

    merge_sort(b,p);
    merge_sort(c,q);
    merge(b,c,a,p,q);
    }
}
int main()
{

    cout << "enter value for n" << endl;
    int n,a[40];
    cin>>n;
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++)
      cin>>a[i];
    merge_sort(a,n);
    cout<<"sorted array is\n";
    for(int i=0;i<n;i++)
       cout<<a[i];
    return 0;

}

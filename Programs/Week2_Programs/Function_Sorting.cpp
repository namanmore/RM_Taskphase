#include<iostream>
using namespace std;
 void bubble_sort(int z[], int c)
        {
            int i,j,tmp=0;
            for(i=0;i<c;i++)
            {
                for(j=0;j<(c-1);j++)
                {
                    if(z[j+1]<z[j])
                    {
                        tmp=z[j];
                        z[j]=z[j+1];
                        z[j+1]=tmp;

                    }
                }

            }
            cout<<"Sorted array is\n";
            for(i=0;i<c;i++)
                cout<<z[i]<<"\t";
                cout<<"\n";

        }
 void selection_sort(int z[], int c)
        {
            int i,j,Min,tmp=0;
            for(i=0;i<(c-1);i++)
            {
                    Min=i;
                for(j=i+1;j<c;j++)
                {
                    if(z[j]<z[Min])
                        Min=j;
                }
                tmp=z[i];
                z[i]=z[Min];
                z[Min]=tmp;
            }
            cout<<"Sorted array is\n";
            for(i=0;i<c;i++)
                cout<<z[i]<<"\t";
                cout<<"\n";

        }

        void B_search(int z[], int c, int s)
        {
            int lb=0,ub=c,mid,k=0;
            while(ub>=lb)
            {
                mid=(lb+ub)/2;
                if(z[mid]>s)
                    ub=mid-1;
                if(z[mid]<s)
                    lb=mid+1;
                if(z[mid]==s)
                    {

                        k=1;break;
                    }
            }
            if(k==1)
                cout<<"Element is found at position(index) "<<mid<<"\n";
                if(k==0)
                    cout<<"Element is not present\n";
        }
int main()
{
    int x,n,i,ser;
    char ch;
    cout<<"Enter size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter array elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<"Enter 's' for selection sort OR 'b' for bubble sort\n";
        cin>>ch;
        switch(ch)
        {
        case 's':
            selection_sort(a,n);
            cout<<"Enter the number to be searched\n";
            cin>>ser;
            B_search(a , n, ser);
            break;
        case 'b':
            bubble_sort(a,n);
            cout<<"Enter the number to be searched\n";
            cin>>ser;
            B_search(a , n, ser);
            break;
        default:
            cout<<"Invalid choice";
        }
}

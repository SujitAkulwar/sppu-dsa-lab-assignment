#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        int n,x,name,weight;
        int array[10][10];
        string namearr[10];
        char ch;
        graph(){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    array[i][j]=0;
                }
            }
        }
        void add(){
            cout<<"\nenter number of cities : ";
            cin>>n;
            for(int i=0;i<n;i++){
                cout<<"\nenter the name of city "<<i<<" : ";
                cin>>namearr[i];
            }
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    if(i==j){array[i][j]=0;}
                    else{
                        cout<<"\nis there flight path between cities "<<namearr[i]<<" and "<<namearr[j]<<" ?Y/N : ";
                        cin>>ch;
                        if(ch=='y' || ch=='Y'){
                            cout<<"enter distance between two cities : ";
                            cin>>array[i][j];
                            array[j][i]=array[i][j];
                        }
                        else{
                            array[i][j]=-2;
                            array[i][j]=array[j][i];
                        }
                    }
                }
            }
        }
        void display(){
            for(int i=0;i<n;i++){
                cout<<"\t"<<namearr[i];
            }cout<<endl;
            for(int i=0;i<n;i++){
                cout<<namearr[i];
                for(int j=0;j<n;j++){
                    cout<<"\t"<<array[i][j];
                }cout<<endl;
            }
        }
}c;

int main(){
    char ch;
    while(true){
        cout<<"1. enter data"<<endl;;
        cout<<"2. display data"<<endl;
        cout<<"3. exit"<<endl;
        cout<<" choice : ";
        cin>>ch;
        switch(ch){
            case 49:
                c.add();
                break;
            case 50:
                c.display();
                break;
            case 51:
                exit(0);
            default:
                cout<<"invalid choice !!";
        }
    }
}






































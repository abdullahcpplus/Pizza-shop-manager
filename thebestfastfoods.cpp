#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;
class shop
{
    const int width = 66, hight = 17;
    char ltr[12] = "1 ltr drink";
    char ltr2[12] = "500ml Drink";
    char ltr3[12] = "250ml Drink";
    char bur[7] = "Burger";
    char cbur[15] = "Chicken Burger";
    char zbur[14] = "Zinger Burger";
    char cshaw[17] = "Chicken Shawarma";
    char zshaw[16] = "Zinger Shawarma";
    char spizza[12] = "Small Pizza";
    char mpizza[13] = "Medium Pizza";
    char lpizza[12] = "Large Pizza";
    char pasta[6] = "Pasta";
    int cn;
    int b1, lt1;
    int cb ,lt2;
    int zb,lt3;
    int cs ,lt4;
    int zs, lt5;
    int sp, lt6;
    int mp, lt7;
    int lp,lt8;
    int pp,lt9 ;
    int count,x,y,XX,YY,cnt;
    char dealNo;
    int quantity,price, total,grosstotal;
public:
    void forbill();
    void drow();
    void showbill();
    void setup(){
        cn = 0;
        b1 = 6, lt1=4;
        cb = 25,lt2=26;
        zb=47, lt3=48;
        cs = 2,lt4=4;
        zs=24, lt5=26;
        sp= 48, lt6=48;
        mp=4, lt7=4;
        lp=26, lt8=26;
        pp=51,lt9=48 ;
        count=0,x=1,y=0,XX=2,YY=0,cnt=0;
    }
};
void shop ::drow()
{
    grosstotal=0;
    total=0;
    system("cls");
    bool run = true;
    cout << "*********************** Wlecome to menu **************************" << endl
         << endl;
         cout<<"Following deals available."<<endl;
    for (int i = 0; i < width; i++)
    {
        cout << "_";
        
    }
    cout << endl;
    for (int i = 0; i < hight; i++)
    {

        for (int j = 0; j < width; j++)
        {

            if (j == b1 && i == 2)
            {
                cout << bur[cn];
                if (cn < 5)
                {
                    cn++;
                    b1++;
                    
                }
                else cn=0;
            }
            else if(j==x && i==y){
                cout<<count+1;
                count++;
                if(count<9){
                x=x+21;
                if(count % 2==0){
                    x++;
                }
                if(count%3==0){
                    x=1;
                    y=y+6;
                }
                
                }
            }else if(j==XX && i==YY){
                cout<<")";
                cnt++;
                if(cnt<9){
                XX=XX+21;
                if(cnt % 2==0){
                    XX++;
                }
                if(cnt%3==0){
                    XX=2;
                    YY=YY+6;
                }
                
                }
            }
            else if(j ==lt1 && i==3){
                cout<<ltr3[cn];
                if(lt1<14){
                    cn++;
                    lt1++;
                }else cn=0;
            }
            else if(j==cb && i== 2){
                cout<<cbur[cn];
                if(cn<13){
                    cn++;
                    cb++;
                }
                else {
                    cn=0;
                }
            }
            else if(j==lt2 && i==3){
                cout<<ltr3[cn];
                if(cn<10){
                    cn++;
                    lt2++;
                }
                else{
                    cn=0;
                }
            }
            else if(j == zb && i == 2){
                cout<<zbur[cn];
                if(cn<12){
                    cn++;
                    zb++;
                }
                else{
                    cn=0;
                }
            }
            else if(j==lt3 && i==3){
                cout<<ltr3[cn];
                if(cn<10){
                    cn++;
                    lt3++;
                }
                else{
                    cn=0;
                }
            }
           else if (j == cs && i == 8)
            {
                cout << cshaw[cn];
                if (cn < 15)
                {
                    cn++;
                    cs++;
                    
                }
                else
                { cn=0;}
            }
            else if(j== lt4&& i==9){
             cout<<ltr2[cn];
             if(cn<10){
                cn++;
                lt4++;
             }else
             cn=0;
            }
            else if(j==zs && i==8){
                cout<<zshaw[cn];
                if(cn<14){
                  cn++;
                  zs++;
                }else cn=0;
            }
            else if(j==lt5 && i==9){
                cout<<ltr2[cn];
                if(cn<10){
                    cn++;
                    lt5++;
                }else cn=0;
            }
            else if(j ==sp && i==8){
                cout<<spizza[cn];
                if(cn<10){
                    cn++;
                    sp++;
                }else cn=0;
            }
            else if(j==lt6 && i==9){
                cout<<ltr2[cn];
                if(cn<10){
                    cn++;
                    lt6++;
                }else cn=0;
            }
            else if(j==mp&& i==14){
                cout<<mpizza[cn];
                if(cn<11){
                    cn++;
                    mp++;
                }else cn=0;
            }
            else if(j==lt7 && i==15){
                cout<<ltr[cn];
                if(cn<10){
                    cn++;
                    lt7++;
                }else cn=0;
            }
            else if(j==lp && i==14){
                cout<<lpizza[cn];
               if(cn<10){
                cn++;
                lp++;
               }else cn=0;
            }
            else if(j==lt8&& i== 15){
                cout<<ltr[cn];
                if(cn<10){
                    cn++;
                    lt8++;
                }else cn=0;
            }
            else if(j==pp && i==14){
                cout<<pasta[cn];
                if(cn < 4){
                    cn++;
                    pp++;
                }
                   else
                {
                    cn= 0;
                }
            }
            else if(j==lt9 && i==15){
                cout<<ltr[cn];
                if(cn<10){
                    cn++;
                    lt9++;
                }else cn=0;
            }
            else if (j == 21 || j == 21 - 1 || j == 43 || j == 43 - 1)
            {
                cout << "*";
            }
            else if (j == 0 || j == width - 1)
            {
                cout << "|";
            }
            else if (i == 5 || i == 11)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < width; i++)
    {
        if (i == 0 || i == width - 1)
        {
            cout << "|";
        }
        else
            cout << "_";
    }
    cout<<endl;
    bool cho=true;
    char rr;
    while(cho){
    cout<<"Press 1 to add items and Press any key to exit"<< endl;
    cin>>rr;
    if(rr =='1'){
    cout<<"Enter deal no     : ";
    cin>>dealNo;
    cout<<"Enter Deal price  : ";
    cin>>price;
    cout<<"Enter Quantity    : ";
    cin>>quantity;
    
    total=price*quantity;
    grosstotal=grosstotal+total;
     
forbill();
}
    else{
        
    cho=false;
    }
  }
}
void shop :: forbill(){
    ofstream out("mybill.txt",ios :: app);
        out<<"________________________________________________________________________"<<endl;
    if(dealNo =='1'){
        out<<"|  Burger with 250 ml drink            | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }else if(dealNo=='2'){
        out<<"|  chicken Burger with 250 ml drink    | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }else if(dealNo=='3'){
        out<<"|  Zinger Burger with 250 ml drink     | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }else if(dealNo=='4'){
        out<<"|  chicken Shawarma with 500 ml drink  | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }
    else if(dealNo=='5'){
        out<<"|  Zinger Shawarma with 500 ml drink   | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }else if(dealNo=='6'){
        out<<"|  Small Pizza with 500 ml drink       | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }else if(dealNo== '7'){
        out<<"|  Mediun Pizza with 1Ltr drink        | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }else if(dealNo=='8'){
        out<<"|  Large Pizza with 1Ltr drink         | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }else if(dealNo=='9'){
        out<<"|  Pasta with 1Ltr drink               | "<<quantity<<" | "<<price<<" | "<< total<< endl;
    }else{
        out<<"|  Deal not available                  |"<<endl;
    }
        out<<"|  Total bill                          | "<<grosstotal<< endl;
      out.close();
}
void shop:: showbill(){
    string take,tt;
    getline(cin,tt);
    ifstream in("mybill.txt");
    while(!in.eof()){
        getline(cin,take);
        cout<<take;
    }
}
int main()
{
    shop best;
    char cho;
    bool run = true;
    system("cls");

    while (run)
     {
        system("cls");
        cout<< "\t*********************** The best Fast Foods *************************"<< endl<<endl;
        cout<<"\t\t*************************************************"<< endl;
        cout<<"\t\t**                                             **"<< endl;
        cout<<"\t\t** 1)Add items and print bill.                 **"<< endl;
        cout<<"\t\t** 2)Show Bill.                                **"<< endl;
        cout<<"\t\t** 3)Exit.                                     **"<< endl;
        cout<<"\t\t**                                             **"<< endl;
        cout<<"\t\t*************************************************"<< endl<<endl;
        cout<<"enter your choice: ";
        cin>> cho;
        if(cho == '1'){
            best.setup();
            best.drow();    

        }
        else if(cho=='2'){
        system("cls");
        best.showbill();
        }
        else if(cho=='3'){
            system("cls");
            cout<<"GoodBye have a nice day"<< endl;
            Sleep(2000);
            run=false;
        }
        else{
            system("cls");
            cout<<"You entered wrong input."<<endl;
            cout<<"Redirecting the perious page."<<endl;
            Sleep(2000);
        }
    }

    return 0;
}
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
     cout<<"Rules\n"
         <<"-----"
         << "\nPlz help 3 Cannibals and 3 missionaries to move other side of River \n"
         <<"NOTICE THAT:\n"
         <<"-----------\n"
         <<"When there is on one side more Cannibals than missionaries ,they eat them"<<endl;
         getch ();
         system ("cls");
   
    int Left_M =3;
    int Left_C =3;
    int Right_M =0;
    int Right_C =0;
    int M =0;
    int C =0;
    

    cout<<"\nM M M C C C |     --- | \n"<<endl;

    while (true) {
        while (true) {
            cout<<"Left Side -------BOAT------> Right Side river travel\n"<<endl;
            cout<<"Enter number of Missionaries travel ==> ";
            cin >> M;
            cout<<"Enter number of Cannibals travel ==> ";
            cin>>C;

            if ((M==0 && C==0)||(M+C > 2)||(Left_M-M < 0)||(Left_C-C<0)) {
                cout<<"Invalid input, please re-enter.\n"<<endl;
            } else {
                break;
            }
           
        }

        Left_M -=M;
        Left_C -=C;
        Right_M +=M;
        Right_C +=C;

        cout<<endl;
        for (int i=0;i<Left_M;i++)
            cout<<"M ";
        for (int i=0;i<Left_C;i++)
            cout<<"C ";
        cout<<"| --> | ";
        for (int i=0;i<Right_M;i++)
            cout<<"M ";
        for (int i=0;i<Right_C;i++)
            cout << "C ";
        cout<<endl;

        

        if (((Left_C==3 && Left_M==1)||(Left_C==3 && Left_M==2)||(Left_C==2 && Left_M==1)||
             (Right_C==3 && Right_M==1)||(Right_C==3 && Right_M==2)||(Right_C==2 && Right_M==1))) {
            cout<<"Cannibals eat missionaries:\nYou lost the game\n"
                <<"**          ****************   ************   ********   **********\n"
                <<"**          ****************   ************   ********   **********\n"
                <<"**          **            **   **             **         **      **\n"
                <<"**          **            **   **             **         **      **\n"
                <<"**          **            **   ************   ********   **********\n"
                <<"**          **            **   ************   ********   **********\n"
                <<"**          **            **             **   **         **    **\n"
                <<"**          **            **             **   **         **     **\n"
                <<"*********   ****************   ************   ********   **      **\n"
                <<"*********   ****************   ************   ********   **       **\n";
                
            break;
        }

        if ((Right_M + Right_C)==6) {
            cout<<"You won the game : \n\tCongragulationts\n"
                <<"***********   **********   ********   **                  **   ************\n"
                <<"**********    **********   ********    **                **    ************\n"
                <<"**      **    **      **   **    **     **              **     **        **\n"
                <<"**     **     **      **   **    **      **            **      **        **\n"
                <<"*******       **********   **    **       **          **       **        **\n"
                <<"*******       **********   ********        **        **        **        **\n"  
                <<"**    **      **    **     ********         **      **         **        **\n"
                <<"**      **    **     **    **    **          **    **          **        **\n"
                <<"**********    **      **   **    **           **  **           ************\n"
                <<"***********   **       **  **    **            ****            ************\n";
            
            break;
        }

        while (true) {
            cout<<"Right side -------BOAT------> Left side river travel\n"<<endl;
            cout<<"Enter number of Missionaries travel ==> ";
            cin>>M;
            cout<<"Enter number of Cannibals travel ==> ";
            cin>>C;

            if ((M==0 && C==0)||(M+C > 2)||(Right_M-M < 0)||(Right_C-C < 0)) {
                cout<<"Invalid input, please re-enter.\n"<<endl;
            } else {
                break;
            }
            
        }

        Left_M +=M;
        Left_C +=C;
        Right_M -=M;
        Right_C -=C;

        cout<<endl;
        for (int i=0;i<Left_M;i++)
            cout<<"M ";
        for (int i=0;i<Left_C;i++)
            cout<<"C ";
        cout<<"| <-- | ";
        for (int i=0;i<Right_M;i++)
            cout<<"M ";
        for (int i=0;i<Right_C;i++)
            cout<<"C ";
        cout<<endl;

        

        if (((Left_C==3 && Left_M==1)||(Left_C==3 && Left_M==2)||(Left_C==2 && Left_M==1)||
             (Right_C==3 && Right_M==1)||(Right_C==3 && Right_M==2)||(Right_C==2 && Right_M==1))) {
            cout<<"Cannibals eat missionaries:\nYou lost the game\n"
                <<"**          ****************   ************   ********   **********\n"
                <<"**          ****************   ************   ********   **********\n"
                <<"**          **            **   **             **         **      **\n"
                <<"**          **            **   **             **         **      **\n"
                <<"**          **            **   ************   ********   **********\n"
                <<"**          **            **   ************   ********   **********\n"
                <<"**          **            **             **   **         **    **\n"
                <<"**          **            **             **   **         **     **\n"
                <<"*********   ****************   ************   ********   **      **\n"
                <<"*********   ****************   ************   ********   **       **\n";
            break;
        }
    }

    return 0;
}

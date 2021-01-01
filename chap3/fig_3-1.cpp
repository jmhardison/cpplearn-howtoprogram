 #include <iostream>
 #include <string>
 #include "fig_3-1_Account.h"

 using namespace std;

 int main(){
     Account myAccount;

      cout << "Initial account name is: " << myAccount.getName();

      cout << "\nPlease enter the account name: ";

      string theName;
      getline(cin, theName);
      myAccount.setName(theName);

      cout << "Name in object myAccount is: " << myAccount.getName() << endl;
 }
// The Project For Building A ATM Management System.
# include <stdio.h>
# include <math.h>
int change_password_p();
int check_balance(int balance);
int exit_program();
int deposit_money(int balance);
int withdrawal(int balance);
int Password_Match();
int Menu();
int main()
{   
    int range,password,attemts=0,menu,choose,withdraw,deposit,check,change,end;
    int balance=100000;
    printf("Enter Your Password : \n");
    do{
    password=Password_Match();
    attemts++;
    switch(password){
    case 1 :
    case 2 :
    case 3 :
    case 4 :
    case 5 :
    printf("Welcome To Our Bank");
    break;
    default :
    printf("Incorrect Password");
    }
    }while(password==0 && attemts<=3);

    printf("Please Choose Your Menu : \n");

    do{
        menu=Menu();
        switch(menu){
        case 1:
        withdraw=withdrawal(balance);
        break;
        case 2:
        deposit=deposit_money(balance);
        break;
        case 3:
        check=check_balance(balance);
        break;
        case 4:
        change=change_password_p();
        break;
        case 5:
        end=exit_program();
        break;
        default :
        printf("---Wrong Choise Try Again---");
        break;
        }
        }while(menu != 5);
  return 0;
}

int Password_Match()
{
    int pass;
    scanf("%d",&pass);

    if(pass==1234)return 1;
    if(pass==2345)return 2;
    if(pass==5678)return 3;
    if(pass==8907)return 4;
    if(pass==5645)return 5;
    else return 0;
}

int Menu()
{
    int choose;

    printf("1.Withdraw Money \n");
    printf("2.Deposit Money \n");
    printf("3.Check Balance \n");
    printf("4.Change Password \n");
    printf("5.Exit \n");
    scanf("%d",&choose);

    return choose;
}

int withdrawal(int balance)
{
    int difference,amount;
    if(balance>=1000)
    {
        printf("Amount To Be Withdraw : \n");
        scanf("%d",&amount);
        difference= balance - amount;
        printf("Amount Left : %d\n",difference);
    }else if(balance<=1000 && balance>=0){
        printf("---Insufficent Balance Left Try Not To Go Below That---");
        printf("Amount To Be Withdraw : \n");
        scanf("%d",&amount);
        difference= balance - amount;
        printf("Amount Left : %d\n",difference);
        balance= difference;
        return balance;
    }else{
        printf("Insufficent Balance \n");
    }
    return difference;
}

int deposit_money(int balance)
{
    int add,amount;
    printf("Enter Amount For The Deposits : \n");
    scanf("%d",&amount);
    add = balance + amount;
    printf("Display The Resent Amount : %d\n",add);
    balance=add;
    return balance;
}

int check_balance(int balance)
{
    printf("The Actual Balance  In Your Account Is : %d \n",balance);
}

int change_password_p()
{
    int phone,otp,new_pass; 
    printf("Enter Your Phone Number : \n");
    scanf("%d",&phone);
    printf("Enter The OTP \n");
    scanf("%d",&otp);
    if(otp==123)
    {
        printf("New Password \n");
        scanf("%d",&new_pass);
        printf("Password Change Successfully \n");
    }else {
        printf("Invalid OTP \n");
        new_pass=-1;
    }
    return new_pass;
}

int exit_program()
{
    printf("EXIT \n");
    return 0;
}
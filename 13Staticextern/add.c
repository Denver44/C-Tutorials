//static int count; // here the static keyword is  declared so it cannot access the file from anywehre we can only access it here in this part only.
int increment();
//int count; // here the count is declared as global variable if we decalre the it as local variable the output will be 1.
int increment()
{
    static int count;  // hold the value even though it is declare as a local variable but we can 
    count = count + 1;
    return count;
}

// int a = 5;   this is for showing the extenal stroage class.
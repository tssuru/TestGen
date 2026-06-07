try:
    #include <iostream>
    
    int h(int a){
        int z = 36;
        if (a) 
            z = 7;
        else if (a > -4)
             return 0;
        else
             z = 9;
        return z;
    }
    
    int main(){
        std::cout << h(-1);
        return 0;
    }
    
except: print('error')

try:
    #include <iostream>
    
    int h(int d){
        int z = 70;
        if (d <= 1) 
            return 0;
        else if (d != 2)
             z = 1;
        else
             return 9;
        return z;
    }
    
    int main(){
        std::cout << h(-2);
        return 0;
    }
    
except: print('error')

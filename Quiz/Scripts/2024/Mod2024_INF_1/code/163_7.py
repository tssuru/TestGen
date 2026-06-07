try:
    #include <iostream>
    
    int h(int a){
        int u = 10;
        if (a) 
            return 5;
        else if (a == 4)
             u = 9;
        else
             return 1;
        return u;
    }
    
    int main(){
        std::cout << h(-7);
        return 0;
    }
    
except: print('error')

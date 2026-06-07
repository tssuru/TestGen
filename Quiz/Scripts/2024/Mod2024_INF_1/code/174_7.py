try:
    #include <iostream>
    
    int h(int d){
        int v = 24;
        if (d) 
            return 3;
        if (d != -1)
             v = 5;
        else
             return 1;
        return v;
    }
    
    int main(){
        std::cout << h(3);
        return 0;
    }
    
except: print('error')

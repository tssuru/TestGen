try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<3;
    }
    
    int main(){
        std::cout<<(f(-4) || f(-3));
        return 0;
    }
    
except: print('error')

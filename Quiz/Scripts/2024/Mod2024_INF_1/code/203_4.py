try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<-3;
    }
    
    int main(){
        std::cout<<(f(1) and f(-5));
        return 0;
    }
    
except: print('error')

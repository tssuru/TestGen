try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n<-3;
    }
    
    int main(){
        std::cout<<(f(-5) and f(0));
        return 0;
    }
    
except: print('error')

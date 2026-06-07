try:
    
    def f(n):
        print("f", end="");
        return n!=0
    
    print(f(8) and f(0))
    
except: print('error')

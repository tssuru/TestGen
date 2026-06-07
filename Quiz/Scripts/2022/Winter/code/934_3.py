try:
    
    def f(n):
        print("f", end="");
        return n!=1
    
    print(f(1) and f(6))
    
except: print('error')

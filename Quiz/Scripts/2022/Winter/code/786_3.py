try:
    
    def f(n):
        print("f", end="");
        return n!=4
    
    print(f(4) or f(3))
    
except: print('error')

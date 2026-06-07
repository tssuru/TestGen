try:
    
    def f(n):
        print("f", end="");
        return n!=4
    
    print(f(-3) or f(3))
    
except: print('error')

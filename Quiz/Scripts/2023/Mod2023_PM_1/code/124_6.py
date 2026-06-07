try:
    
    def f(n):
        print("f", end="");
        return n==1
    
    print(f(7) or f(-6))
    
except: print('error')

try:
    
    def f(n):
        print("f", end="");
        return n>0
    
    print(f(6) or f(-2))
    
except: print('error')

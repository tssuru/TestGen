try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(2) or f(-2))
    
except: print('error')

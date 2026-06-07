try:
    
    def f(n):
        print("f", end="");
        return n>=4
    
    print(f(-7) or f(2))
    
except: print('error')

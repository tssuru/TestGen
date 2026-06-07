try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(7) or f(-7))
    
except: print('error')

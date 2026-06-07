try:
    
    def f(n):
        print("f", end="");
        return n>3
    
    print(f(2) and f(-8))
    
except: print('error')

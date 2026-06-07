try:
    
    def f(n):
        print("f", end="");
        return n>0
    
    print(f(-1) and f(7))
    
except: print('error')

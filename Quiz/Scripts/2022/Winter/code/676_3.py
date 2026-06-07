try:
    
    def f(n):
        print("f", end="");
        return n>=-1
    
    print(f(3) and f(-7))
    
except: print('error')

try:
    
    def f(n):
        print("f", end="");
        return n<=4
    
    print(f(0) and f(-7))
    
except: print('error')

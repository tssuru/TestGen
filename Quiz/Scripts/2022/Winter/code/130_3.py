try:
    
    def f(n):
        print("f", end="");
        return n<=1
    
    print(f(5) and f(-2))
    
except: print('error')

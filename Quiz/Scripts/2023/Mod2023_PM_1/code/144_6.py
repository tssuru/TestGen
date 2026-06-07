try:
    
    def f(n):
        print("f", end="");
        return n>=4
    
    print(f(-7) and f(4))
    
except: print('error')

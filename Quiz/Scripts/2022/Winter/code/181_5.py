try:
    
    a,b,c=6,8,7
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(2,a=5)
    print(a,b,c)
    
except: print('error')

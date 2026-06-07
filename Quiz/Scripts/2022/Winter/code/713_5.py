try:
    
    a,b,c=6,8,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(0,c=2,b=3)
    print(a,b,c)
    
except: print('error')

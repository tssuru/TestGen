try:
    
    a,b,c=6,8,7
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(4,b=0)
    print(a,b,c)
    
except: print('error')

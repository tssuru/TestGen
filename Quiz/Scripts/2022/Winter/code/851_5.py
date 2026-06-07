try:
    
    a,b,c=9,8,7
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(1,c=5,b=3)
    print(a,b,c)
    
except: print('error')

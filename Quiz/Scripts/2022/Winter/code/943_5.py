try:
    
    a,b,c=6,7,8
    def f(a,b=9,c=7):
        print(a,b,c,end="")
    
    f(a=0,c=2,b=1)
    print(a,b,c)
    
except: print('error')

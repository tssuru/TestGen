try:
    
    a,b,c=7,9,8
    def f(a,b=6,c=7):
        print(a,b,c,end="")
    
    f(c=2,a=5,b=0)
    print(a,b,c)
    
except: print('error')

try:
    
    a,b,c=7,6,8
    def f(a,b=9,c=7):
        print(a,b,c,end="")
    
    f(b=2,a=1,b=0)
    print(a,b,c)
    
except: print('error')

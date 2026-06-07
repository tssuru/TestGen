try:
    
    a,b,c=7,8,9
    def f(a,b=7,c=6):
        print(a,b,c,end="")
    
    f(b=1,c=0,a=3)
    print(a,b,c)
    
except: print('error')

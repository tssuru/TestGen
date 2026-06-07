try:
    
    a,b,c=7,8,7
    def f(a,b=9,c=6):
        print(a,b,c,end="")
    
    f(a=2,3,b=0)
    print(a,b,c)
    
except: print('error')

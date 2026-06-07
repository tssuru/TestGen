try:
    
    a,b,c=6,8,6
    def f(a,b=9,c=7):
        print(a,b,c,end="")
    
    f(b=0,c=1,3)
    print(a,b,c)
    
except: print('error')

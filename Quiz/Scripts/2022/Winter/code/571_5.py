try:
    
    a,b,c=6,8,7
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(c=1,a=5,c=0)
    print(a,b,c)
    
except: print('error')

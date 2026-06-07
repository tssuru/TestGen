try:
    
    a,b,c=9,8,7
    def f(a,b=6,c=6):
        print(a,b,c,end="")
    
    f(0,2,a=5)
    print(a,b,c)
    
except: print('error')

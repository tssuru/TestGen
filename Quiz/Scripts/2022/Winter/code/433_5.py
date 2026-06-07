try:
    
    a,b,c=6,7,8
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(b=0,a=5,c=3)
    print(a,b,c)
    
except: print('error')

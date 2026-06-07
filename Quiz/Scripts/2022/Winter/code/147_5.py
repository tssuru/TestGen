try:
    
    a,b,c=7,7,8
    def f(a,b=6,c=9):
        print(a,b,c,end="")
    
    f(3,2,a=1)
    print(a,b,c)
    
except: print('error')

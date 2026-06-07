try:
    
    a,b,c=6,7,8
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(a=3,2,b=5)
    print(a,b,c)
    
except: print('error')

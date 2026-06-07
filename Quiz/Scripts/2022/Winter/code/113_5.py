try:
    
    a,b,c=6,8,7
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(1,c=5,b=3)
    print(a,b,c)
    
except: print('error')

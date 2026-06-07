try:
    
    a,b,c=9,8,7
    def f(a,b=6,c=9):
        print(a,b,c,end="")
    
    f(b=5,c=3,0)
    print(a,b,c)
    
except: print('error')

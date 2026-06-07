try:
    
    a,b,c=6,8,7
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(4,1,b=5)
    print(a,b,c)
    
except: print('error')

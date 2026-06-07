try:
    
    a,b,c=6,8,6
    def f(a,b=7,c=9):
        print(a,b,c,end="")
    
    f(0,2,3)
    print(a,b,c)
    
except: print('error')

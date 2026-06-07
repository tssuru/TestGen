try:
    
    a,b,c=6,8,7
    def f(a,b=9,c=9):
        print(a,b,c,end="")
    
    f(a=4,0,a=1)
    print(a,b,c)
    
except: print('error')

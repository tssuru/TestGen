try:
    
    a,b,c=6,6,8
    def f(a,b=7,c=9):
        print(a,b,c,end="")
    
    f(a=0,2,a=5)
    print(a,b,c)
    
except: print('error')

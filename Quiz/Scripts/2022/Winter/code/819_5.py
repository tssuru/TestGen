try:
    
    a,b,c=7,6,8
    def f(a,b=7,c=9):
        print(a,b,c,end="")
    
    f(b=3,c=4,1)
    print(a,b,c)
    
except: print('error')

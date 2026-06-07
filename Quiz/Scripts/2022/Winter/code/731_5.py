try:
    
    a,b,c=6,8,9
    def f(a,b=7,c=7):
        print(a,b,c,end="")
    
    f(b=5,c=3,1)
    print(a,b,c)
    
except: print('error')

try:
    
    a,b,c=6,8,9
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(b=0,c=3,4)
    print(a,b,c)
    
except: print('error')

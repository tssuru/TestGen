try:
    
    a,b,c=6,7,8
    def f(a,b,c=6):
        print(a,b,c,end="")
    
    f(b=0,c=3,2)
    print(a,b,c)
    
except: print('error')

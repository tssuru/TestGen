try:
    
    a,b,c=8,7,9
    def f(a,b=6,c=8):
        print(a,b,c,end="")
    
    f(a=2,b=0,c=2)
    print(a,b,c)
    
except: print('error')

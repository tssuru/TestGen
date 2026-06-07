try:
    
    a,b,c=6,6,7
    def f(a,b=9,c=8):
        print(a,b,c,end="")
    
    f(0,c=1)
    print(a,b,c)
    
except: print('error')

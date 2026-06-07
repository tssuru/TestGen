try:
    
    a,b,c=9,9,7
    def f(a,b=6,c=8):
        print(a,b,c,end="")
    
    f(0,1)
    print(a,b,c)
    
except: print('error')

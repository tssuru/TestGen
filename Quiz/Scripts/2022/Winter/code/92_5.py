try:
    
    a,b,c=7,7,9
    def f(a,b=6,c=8):
        print(a,b,c,end="")
    
    f(0,4)
    print(a,b,c)
    
except: print('error')

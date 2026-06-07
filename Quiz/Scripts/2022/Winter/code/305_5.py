try:
    
    a,b,c=6,7,9
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(b=2,c=1,3)
    print(a,b,c)
    
except: print('error')

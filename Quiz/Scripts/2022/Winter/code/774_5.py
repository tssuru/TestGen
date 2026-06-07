try:
    
    a,b,c=9,9,6
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(b=5,c=2,0)
    print(a,b,c)
    
except: print('error')

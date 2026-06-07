try:
    
    a,b,c=7,9,6
    def f(a,b=7,c=8):
        print(a,b,c,end="")
    
    f(1,c=5,b=0)
    print(a,b,c)
    
except: print('error')

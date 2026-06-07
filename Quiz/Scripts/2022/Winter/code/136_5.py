try:
    
    a,b,c=7,6,9
    def f(a,b=7,c=8):
        print(a,b,c,end="")
    
    f(1,c=4,b=0)
    print(a,b,c)
    
except: print('error')

try:
    
    a,b,c=7,9,6
    def f(a,b=8,c=8):
        print(a,b,c,end="")
    
    f(0,3,1)
    print(a,b,c)
    
except: print('error')

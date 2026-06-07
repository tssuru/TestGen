try:
    
    a,b,c=7,6,9
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(a=2,0,a=4)
    print(a,b,c)
    
except: print('error')

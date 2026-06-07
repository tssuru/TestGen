try:
    
    a,b,c=9,6,7
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(5,0,a=2)
    print(a,b,c)
    
except: print('error')

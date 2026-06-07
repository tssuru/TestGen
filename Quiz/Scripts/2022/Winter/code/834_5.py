try:
    
    a,b,c=7,9,6
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(0,3,0)
    print(a,b,c)
    
except: print('error')

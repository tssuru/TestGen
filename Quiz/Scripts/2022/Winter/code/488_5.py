try:
    
    a,b,c=7,9,7
    def f(a,b=6,c=8):
        print(a,b,c,end="")
    
    f(5,4)
    print(a,b,c)
    
except: print('error')

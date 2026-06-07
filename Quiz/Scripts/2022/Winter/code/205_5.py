try:
    
    a,b,c=6,9,7
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(3,5)
    print(a,b,c)
    
except: print('error')

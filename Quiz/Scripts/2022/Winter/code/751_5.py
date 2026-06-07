try:
    
    a,b,c=9,6,7
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(b=5,c=4,4)
    print(a,b,c)
    
except: print('error')

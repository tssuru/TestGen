try:
    
    a,b,c=8,7,6
    def f(a,b=9,c=8):
        print(a,b,c,end="")
    
    f(2,c=4,b=5)
    print(a,b,c)
    
except: print('error')

try:
    
    a,b,c=8,6,9
    def f(a,b=8,c=7):
        print(a,b,c,end="")
    
    f(2,b=5)
    print(a,b,c)
    
except: print('error')

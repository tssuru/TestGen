try:
    
    a,b,c=8,9,6
    def f(a,b,c=7):
        print(a,b,c,end="")
    
    f(4,c=3,b=2)
    print(a,b,c)
    
except: print('error')
